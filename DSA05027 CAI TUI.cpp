#include<bits/stdc++.h>
using namespace std;

int knapsack(int n,int v,int w[],int val[]){
	int res[n+1][v+1];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=v;j++){
			if(i==0||j==0) res[i][j]=0;
			else{
				if(w[i]<=j) res[i][j]=max(res[i-1][j],val[i]+res[i-1][j-w[i]]);
				else res[i][j]=res[i-1][j];

			}
		}
	}
	return res[n][v];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,v;
		cin>>n>>v;
		int w[n+1],val[n+1];
		for(int i=1;i<=n;i++) cin>>w[i];
		for(int i=1;i<=n;i++) cin>>val[i];
			cout<<knapsack(n,v,w,val)<<endl;
	}
}