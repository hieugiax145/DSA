#include<bits/stdc++.h>
using namespace std;
int n,a[100],used[100];
string s;
void xuat(){
	for(int i=1;i<=n;i++) cout<<s[a[i]-1];
	cout<<" ";
}
void QuayLui_HoanVi(int i){
	for(int j=1;j<=n;j++){
		if(!used[j]){
			a[i]=j;
			used[j]=1;
			if(i==n) xuat();
			else QuayLui_HoanVi(i+1);
			used[j]=0;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		n=s.size();
		QuayLui_HoanVi(1);
		cout<<endl;
	}
}