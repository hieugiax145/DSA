#include<bits/stdc++.h>
using namespace std;
int n,k,a[100],ok;
char c;
void xuat(){
	for(int i=0;i<k;i++){
		c=a[i]+64;
		cout<<c;
	}
	cout<<endl;
}
void sinh(){
	int i=k-1;
	while(a[i]==n+i-k+1){
		i--;
	}
	if(i<0) ok=0;
	else{
		a[i]++;
		for(int j=i+1;j<k;j++){
			a[j]=a[j-1]+1;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<k;i++){
			a[i]=i+1;
		}
		ok=1;
		while(ok){
			xuat();
			sinh();
		}
	}
}