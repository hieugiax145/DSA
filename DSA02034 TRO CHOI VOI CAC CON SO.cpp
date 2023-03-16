#include<bits/stdc++.h>
using namespace std;
int n,a[100],used[100];
void xuat(){
	for(int i=1;i<=n;i++) cout<<a[i];
	cout<<endl;
}
int check(){
	for(int i=2;i<=n;i++){
		if(abs(a[i]-a[i-1])==1) return 0;
	}
	return 1;
}
void QuayLui_HoanVi(int i){
	for(int j=1;j<=n;j++){
		if(!used[j]){
			a[i]=j;
			used[j]=1;
			if(i==n){
				if(check()) xuat();
			}
			else QuayLui_HoanVi(i+1);
			used[j]=0;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		QuayLui_HoanVi(1);
	}
}