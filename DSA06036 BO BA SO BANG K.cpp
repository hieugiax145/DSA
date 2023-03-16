#include<bits/stdc++.h>
using namespace std;
bool findTriplet(int n,long k,long long a[]){
	sort(a,a+n);
	for(int i=0;i<n-2;i++){
		int l=i+1,r=n-1;
		while(l<r){
			if(a[i]+a[l]+a[r]==k) return true;
			else if(a[i]+a[l]+a[r]>k) r--;
			else l++;
		}	
	}
	return false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		long long k;
		cin>>n>>k;
		long long a[n];
		for(long long &x:a) cin>>x;
		if(findTriplet(n,k,a)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}