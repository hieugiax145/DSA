#include<bits/stdc++.h>
using namespace std;
long long solve(int n,int k,int a[]){
	sort(a,a+n);
	long long sum=0;
	for(int i=0;i<n-1;i++){
		int y=lower_bound(a+i+1,a+n,a[i]+k)-a;
		sum=sum+y-i-1;
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