#include<bits/stdc++.h>
using namespace std;

int marked[1001];
vector<int> dinh[1001];
vector<pair<int,int>> E;

void DFS(int u,int x,int y){
	marked[u]=1;
	for(int v:dinh[u]){
		if((u==x&&v==y)||(u==y&&v==x)) continue;
		if(!marked[v]) DFS(v,x,y);
	}
}

void DuyetCau(int n){
	for(auto i:E){
		int a=i.first,b=i.second;
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(!marked[j]){
				cnt++;
				DFS(j,a,b);
			}
		}
		if(cnt>1){
			cout<<a<<" "<<b<<" ";
		}
		memset(marked,0,sizeof marked);
	}
	for(int i=1;i<=n;i++) dinh[i].clear();
	E.erase(E.begin(),E.end());
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
			E.push_back({x,y});
		}
		DuyetCau(n);
	}
}