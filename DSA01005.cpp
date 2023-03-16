#include<bits/stdc++.h>
using namespace std;
int n,a[100],ok;
void xuat(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<" ";
}
void sinh(){
	int i=n-1;
	while(i>=1&&a[i]>a[i+1]){
		i--;
	}
	if(i==0) ok=0;
	else{
		int j=n;
		while(a[j]<a[i]) j--;
		swap(a[i],a[j]);
		reverse(a+i+1,a+n+1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		ok=1;
		for(int i=1;i<=n;i++) cin>>a[i];
		while(ok){
			xuat();
			sinh();
		}
		cout<<endl;
	}
}