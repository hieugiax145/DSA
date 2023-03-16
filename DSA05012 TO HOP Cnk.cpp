#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

int solve(int n,int k){
	if(n-k<k) k=n-k;
	int res[k+1];
	memset(res,0,sizeof(res));
	res[0]=1;
	for(int i=1;i<=n;i++){
		for(int j=min(i,k);j>0;j--){
			res[j]+=res[j-1];
			res[j]%=mod;
		}
	}
	return res[k];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<solve(n,k)<<endl;
	}
}