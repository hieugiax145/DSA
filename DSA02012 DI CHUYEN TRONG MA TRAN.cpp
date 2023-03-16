#include<bits/stdc++.h>
using namespace std;
int m,n,ok,a[100]={0};
void xuat(){
	for(int i=0;i<n+m-2;i++) cout<<a[i]<<" ";
	cout<<endl;
}
void sinh(){
	int i=n+m-3;
	while(i>=0&&a[i]==1){
		a[i]=0;
		i--;
	}
	if(i<0) ok=0;
	else a[i]=1;
}
bool check(){
	int demR=0,demD=0;
	for(int i=0;i<n+m-2;i++){
		if(a[i]==0) demR++;
		if(a[i]==1) demD++;
	}
	return demR<n&&demD<m;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int dem=0;
		ok=1;
		cin>>m>>n;
		int x[100][100];
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>x[i][j];
			}
		}
		while(ok){
			if(check()) dem++;
			sinh();
		}
		cout<<dem<<endl;
	}
}