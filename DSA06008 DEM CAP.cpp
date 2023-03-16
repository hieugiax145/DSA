#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++)
int dem(int x,int n,int Y[],int noY[]){
	if(x==0) return 0;
	if(x==1) return noY[0];
	int* idx=upper_bound(Y,Y+n,x);
	int cnt=(Y+n)-idx;
	cnt+=(noY[0]+noY[1]);
	if(x==2) cnt-=(noY[3]+noY[4]);
	if(x==3) cnt+=noY[2];
	return cnt;
}
int solve(int m, int n,int X[],int Y[]){
	int noY[6]={0};
	FOR(i,0,n){
		if(Y[i]<5) noY[Y[i]]++;
	}
	sort(Y,Y+n);
	int cnt=0;
	FOR(i,0,m){
		cnt+=dem(X[i],n,Y,noY);
	}
	return cnt;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		int X[m],Y[n];
		for(int &x:X) cin>>x;
		for(int &x:Y) cin>>x;
		cout<<solve(m,n,X,Y)<<endl;
	}
}