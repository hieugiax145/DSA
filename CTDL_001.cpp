#include<bits/stdc++.h>
using namespace std;
int n,ok,a[100]={0};
void xuat(){
	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	cout<<endl;
}
void sinh(){
	int i=n;
	while(i>=1&&a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0) ok=0;
	else a[i]=1;
}
bool check(){
	for(int i=1;i<=n;i++){
		if(a[i]!=a[n-i+1]) return false;
	}
	return true;
}
int main(){
	cin>>n;
	ok=1;
	while(ok){
		// if(check())
			xuat();
		sinh();
	}
}