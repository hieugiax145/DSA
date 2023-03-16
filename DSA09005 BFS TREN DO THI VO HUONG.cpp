#include<bits/stdc++.h>
using namespace std;

vector<int> dinh[1001];
int marked[1001];

void DFS(int x){
	queue<int> path;
	vector<int> res;
	marked[x]=1;
	path.push(x);
	while(!path.empty()){
		int u=path.front();
		path.pop();
		res.push_back(u);
		for(int v:dinh[u]){
			if(!marked[v]){
				marked[v]=1;
				path.push(v);
			}
		}
	}
	for(int i:res) cout<<i<<" ";
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,d,start;
		cin>>n>>d>>start;
		while(d--){
			int a,b;
			cin>>a>>b;
			dinh[a].push_back(b);
			dinh[b].push_back(a);
		}
		DFS(start);
		memset(marked,0,sizeof(marked));
		for(int i=1;i<=n;i++) dinh[i].clear();
	}
}