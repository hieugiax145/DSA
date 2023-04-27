#include<bits/stdc++.h>
using namespace std;

int marked[1001];
vector<int> dinh[1001];
int truoc[1001];
int ans;

bool BFS(int x){
	queue<int> path;
	marked[x]=1;
	path.push(x);
	while(!path.empty()){
		int m=path.front();
		path.pop();
		for(int i:dinh[m]){
			if(!marked[i]){
				path.push(i);
				truoc[i]=m;
				marked[i]=1;
			}
			else if(truoc[i]!=m) return true;
		}
	}
	return false;
}

bool DFS(int x){
	marked[x]=1;
	for(int i:dinh[x]){
		if(!marked[i]){
			truoc[i]=x;
			if(DFS(i)) return true;
		}
		else if(i!=truoc[x]) return true;
	}
	return false;
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
		for(int i=1;i<=n;i++){
			sort(dinh[i].begin(),dinh[i].end());
		}
		int ok=0;
		for(int i=1;i<=n;i++){
			memset(marked,0,sizeof marked);
			if(DFS(i)) ok=1;
			
		}
		if(ok) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		for(int i=1;i<=n;i++){
			dinh[i].clear();
			truoc[i]=0;
			marked[i]=0;
		}
	}
}