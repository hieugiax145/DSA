#include<bits/stdc++.h>
using namespace std;

int marked[1001];
vector<int> dinh[1001];
int color[1001];
int truoc[1001];

bool BFS(int x){
	queue<int> path;
	color[x]=1;
	path.push(x);
	while(!path.empty()){
		int m=path.front();
		path.pop();
		for(int i:dinh[m]){
			if(color[i]==0){
				path.push(i);
				truoc[i]=m;
				color[i]=1;
			}
			else if(color[i]==1) return true;
		}
	}
	color[x]=2;
	return false;
}

bool DFS(int x){
	color[x]=1;
	for(int i:dinh[x]){
		if(color[i]==0){
			truoc[i]=x;
			if(DFS(i)) return true;
		}
		else if(color[i]==1) return true;
	}
	color[x]=2;
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
		}
		for(int i=1;i<=n;i++){
			sort(dinh[i].begin(),dinh[i].end());
		}
		int ok=0;
		for(int i=1;i<=n;i++){
			if(color[i]==0){
				if(BFS(i)) ok=1;
			}
		}
		if(ok) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		for(int i=1;i<=n;i++){
			dinh[i].clear();
			truoc[i]=0;
			color[i]=0;
		}
	}
}