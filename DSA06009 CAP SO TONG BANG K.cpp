#include<bits/stdc++.h>
using namespace std;
int solve(int n,int k,int a[]){
	sort(a,a+n);
	int sum=0;
	for(int i=0;i<n-1;i++){
		int x=k-a[i];
		int y=lower_bound(a+i+1,a+n,x)-a;
		int z=upper_bound(a+i+1,a+n,x)-a;
		sum=sum+z-y;
	}
	return sum;	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int &x:a) cin>>x;
		cout<<solve(n,k,a)<<endl;
	}	
}