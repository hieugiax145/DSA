#include<bits/stdc++.h>
using namespace std;

int marked[1001];
vector<int> dinh[1001];

void DFS(int x){
	marked[x]=1;
	for(int i:dinh[x]){
		if(!marked[i]) DFS(i);
	}
}

void DuyetTru(int n){
	for(int i=1;i<=n;i++){
		marked[i]=1;
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(!marked[j]){
				DFS(j);
				cnt++;
			}
		}
		if(cnt!=1){
			cout<<i<<" ";
		}
		memset(marked,0,sizeof marked);
	}
	for(int i=1;i<=n;i++) dinh[i].clear();
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		while(k--){
			int x,y;
			cin>>x>>y;
			dinh[x].push_back(y);
			dinh[y].push_back(x);
		}
		DuyetTru(n);
	}
}