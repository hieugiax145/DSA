#include<bits/stdc++.h>
using namespace std;

vector<int> dinh[1001];
bool marked[1001];

void DFS(int x){
	stack<int> path;
	path.push(x);
	marked[x]=true;
	cout<<x<<" ";
	while(!path.empty()){
		int u=path.top();
		path.pop();
		for(int v:dinh[u]){
			if(!marked[v]){
				marked[v]=true;
				path.push(u);
				path.push(v);
				cout<<v<<" ";
				break;
			}
		}
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,c,x;
		cin>>n>>c>>x;
		while(c--){
			int a,b;
			cin>>a>>b;
			dinh[a].push_back(b);
		}
		DFS(x);
		for(int i=1;i<=n;i++) dinh[i].clear();
		memset(marked,false,sizeof(marked));
	}
}