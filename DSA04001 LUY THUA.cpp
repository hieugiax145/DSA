#include<bits/stdc++.h>
using namespace std;

const long long mod=1e9+7;

long long power(int n,int k){
	if(k==0) return 1;
	long long x=power(n,k/2);
	if(k%2==0) return (x*x)%mod;
	else return n*((x*x)%mod)%mod;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<power(n,k)<<endl;
	}
}