#include<bits/stdc++.h>
using namespace std;

int n,m,q;
vector<pair<int,int>> dinh[1001];
int d[1001][1001];

void Floyd(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			d[i][j]=1e9;
		}
		d[i][i]=0;
	}
	while(m--){
		int st,en,w;
		cin>>st>>en>>w;
		d[st][en]=d[en][st]=w;
	}
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
			}
		}
	}
}

int main(){
	cin>>n>>m;
	Floyd();
	cin>>q;
	while(q--){
		int a,b;
		cin>>a>>b;
		cout<<d[a][b]<<endl;
	}
}