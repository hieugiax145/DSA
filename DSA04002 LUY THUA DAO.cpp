#include<bits/stdc++.h>
using namespace std;

const long long mod=1e9+7;

long long reverse(long long n){
	long long x=0;
	while(n>0){
		x=x*10+n%10;
		n/=10;
	}
	return x;
}

long long power(long long n,long long k){
	if(k==0) return 1;
	long long x=power(n,k/2);
	x=(x*x)%mod;
	if(k%2==0) return x;
	else return (n*x)%mod;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n;
		k=reverse(n);
		cout<<power(n,k)<<endl;
	}
}