#include<bits/stdc++.h>
using namespace std;
int n,a[100]={0},ok;
void xuat(){
	for(int i=0;i<n;i++){
		if(a[i]==1) cout<<"8";
		else if(a[i]==0) cout<<"6";
	}
	cout<<endl;
}
void sinh(){
	int i=n-1;
	while(i>=0&&a[i]==1){
		a[i]=0;
		i--;
	}
	if(i<0) ok=0;
	else a[i]=1;
}
int check(){
	if(a[0]==1&&a[n-1]==0){
		int dem6=0,dem8=0,res=0;
		for(int i=0;i<n-2;i++){
			if(a[i]==1&&a[i+1]==1) dem8++;
		}
		for(int i=1;i<n;i++){
			if(a[i]==0) dem6++;
			else dem6=0;
			if(dem6>3) return 0;
		}
		return dem6<=3&&dem8==0;
	}
	return 0;
}
int main(){
	cin>>n;
	ok=1;
	if(n>=6){
		while(ok){
			if(check()){
				xuat();
			}
			sinh();
		}
	}
}