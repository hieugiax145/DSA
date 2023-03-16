#include<bits/stdc++.h>
using namespace std;
int n,a[1001];
void xuat(){
	for(int i=0;i<n;i++) cout<<a[i];
	cout<<endl;
}
void solve(string s){
	for(int i=0;i<s.size();i++){
		a[i]=s[i]-'0';
	}
}
void sinh(){
	int i=n-1;
	while(a[i]==1){
		a[i]=0;
		i--;
	}
	a[i]=1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		n=s.size();
		solve(s);
		sinh();
		xuat();
	}
}