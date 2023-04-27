#include<bits/stdc++.h>
using namespace std;

int n,k,a[16],b[16];

void xuat(){
	for(int i=1;i<=k;i++) cout<<b[a[i]]<<" ";
	cout<<endl;
}

void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k) xuat();
		else Try(i+1);
	}
}

void reset(){
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=n;i++) cin>>b[i];
		sort(b+1,b+1+n);
		Try(1);
		reset();
	}
}