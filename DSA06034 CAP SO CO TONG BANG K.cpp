#include<bits/stdc++.h>
using namespace std;
long long solve(long long n,long long k,long long a[]){
	sort(a,a+n);
	long long sum=0;
	for(int i=0;i<n-1;i++){
		long long x=k-a[i];
		long long y=lower_bound(a+i+1,a+n,x)-a;
		long long z=upper_bound(a+i+1,a+n,x)-a;
		sum=sum+z-y;
	}
	return sum;	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		long long a[n];
		for(long long &x:a) cin>>x;
		cout<<solve(n,k,a)<<endl;
	}	
}