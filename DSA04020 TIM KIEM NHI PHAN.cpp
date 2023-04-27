#include<bits/stdc++.h>
using namespace std;

int binarySerach(int n,int a[],int x){
	int l=0,r=n-1;
	while(l<r){
		int mid=(l+r)/2;
		if(a[mid]==x) return mid+1;
		else if(a[mid]>x) r=mid-1;
		else if(a[mid]<x) l=mid+1;
	}
	return 0;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int &x:a) cin>>x;
		if(!binarySerach(n,a,x)) cout<<"NO"<<endl;
		else cout<<binarySerach(n,a,x)<<endl;
	}
}