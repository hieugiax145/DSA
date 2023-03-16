#include<bits/stdc++.h>
using namespace std;

int solve(int n,long long m,long long a[]){
	sort(a,a+n);
	int sum=0;
	for(int i=0;i<n-2;i++){
		int j=i+1,k=n-1;
		while(j<k){
			if(a[i]+a[j]+a[k]>=m){
				k--;
			}
			else{
				sum+=(k-j);
				j++;
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