#include<bits/stdc++.h>
using namespace std;

void solve(int n,int a[]){
	if(n>0){
		int b[n];
		for(int i=0;i<n-1;i++){
			b[i]=a[i]+a[i+1];
		}
		solve(n-1,b);	
		cout<<"[";
		for(int i=0;i<n-1;i++){
			cout<<a[i]<<" ";
		}
		cout<<a[n-1]<<"] ";
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int &x:a) cin>>x;
		solve(n,a);
		cout<<endl;
	}
}