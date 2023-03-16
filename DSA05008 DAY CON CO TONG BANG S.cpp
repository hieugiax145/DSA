#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,sum;
		cin>>n>>sum;
		int a[n+1];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		bool mark[n+1][sum+1];
		mark[0][0]=true;
		for(int j=1;j<=sum;j++){
			mark[0][j]=false;			
		}
		for(int i=1;i<=n;i++) mark[i][0]=true;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=sum;j++){
				if(j<a[i]) mark[i][j]=mark[i-1][j];
				if(j>=a[i]){
					if(mark[i-1][j]) mark[i][j]=mark[i-1][j];
					else mark[i][j]=mark[i-1][j-a[i]];
				}
			}
		}
		if(mark[n][sum]) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}