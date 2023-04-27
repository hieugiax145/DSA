#include<bits/stdc++.h>
using namespace std;

vector<int> dinh[1001];
int marked[1001];
vector<pair<int,int>> T;

void DFS(int u){
	marked[u]=1;
	for(int i:dinh[u]){
		if(!marked[i]){
			T.push_back({u,i});
			DFS(i);
		}
	}
}

void TreeGraph(int n,int u){
	DFS(u);
	if(T.size()!=n-1) cout<<-1<<endl;
	else for(auto i:T) cout<<i.first<<" "<<i.second<<" "<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,u;
		cin>>n>>m>>u;
		while(m--){
			int a,b;
			cin>>a>>b;
			dinh[a].push_back(b);
			dinh[b].push_back(a);
		}
		TreeGraph(n,u);
		for(int i=1;i<=n;i++){
			marked[i]=0;
			dinh[i].clear();
		}
		T.clear();
	}
}