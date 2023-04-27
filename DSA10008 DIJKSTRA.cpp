#include<bits/stdc++.h>
using namespace std;

int n,k,u;
vector<pair<int,int>> dinh[1001];
int marked[1001];

void Dijkstra(int u){
	vector<int> d(n+1,INT_MAX);
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> T;
	d[u]=0;
	T.push({0,u});
	while(!T.empty()){
		pair<int,int> i=T.top();
		T.pop();
		int a=i.first;
		int b=i.second;
		marked[b]=1;
		for(auto j:dinh[b]){
			int v=j.first;
			int s=j.second;
			if(!marked[v]){
				d[v]=min(d[v],d[b]+s);
				T.push({d[v],v});
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<d[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k>>u;
		while(k--){
			int st,en,w;
			cin>>st>>en>>w;
			dinh[st].push_back({en,w});
			dinh[en].push_back({st,w});
		}
		Dijkstra(u);
		for(int i=1;i<=n;i++){
			dinh[i].clear();
			marked[i]=0;
		}
	}
}