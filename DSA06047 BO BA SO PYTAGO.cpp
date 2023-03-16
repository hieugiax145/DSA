#include<bits/stdc++.h>
using namespace std;
void solve(int n,long long a[]){
	sort(a,a+n);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			long long c=pow(a[i],2)+pow(a[j],2);
			long long C=sqrt(c);
			if(C*C==c&&binary_search(a+j+1,a+n,C)){
				cout<<"YES"<<endl;
				return;
			}
		}
	}
	cout<<"NO"<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		for(long long &x:a) cin>>x;
		solve(n,a);
	}
}