#include<bits/stdc++.h>
using namespace std;

long long solve(int n,long long k,long long a[]){
	sort(a,a+n);
	long long sum=0;
	for(int i=0;i<n-2;i++){
		int l=i+1,r=n-1;
		while(l<r){
			if(a[i]+a[l]+a[r]>=k){
				r--;
			}
			else{
				sum+=(r-l);
				l++;
			}
		}
	}
	return sum;
}

int main(){
	int t;
	cin>>t;	
	while(t--){
		int n;
		long long k;
		cin>>n>>k;
		long long a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<solve(n,k,a)<<endl;
	}
}