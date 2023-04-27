#include<bits/stdc++.h>
using namespace std;

void BFS(int x,vector<int> dinh[]){
	queue<int> path;
	vector<int> res;
	int marked[1001]={0};
	path.push(x);
	marked[x]=1;
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
	for(int x:res) cout<<x<<" ";
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		vector<int> dinh[1001];
		int n,k,start;
		cin>>n>>k>>start;
		while(k--){
			int x,y;
			cin>>x>>y;
			dinh[x].push_back(y);
		}
		BFS(start,dinh);
	}
}