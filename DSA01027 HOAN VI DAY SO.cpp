#include<bits/stdc++.h>
using namespace std;
int n,a[10001],ok;
void xuat(){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void sinh(){
	int i=n-2;
	while(i>=0&&a[i]>a[i+1]){
		i--;
	}
	if(i<0) ok=0;
	else{
		int j=n-1;
		while(a[j]<a[i]) j--;
		swap(a[i],a[j]);
		reverse(a+i+1,a+n);
	}
}
int main(){
	cin>>n;
	ok=1;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	while(ok){
		xuat();
		sinh();
	}
	cout<<endl;
}