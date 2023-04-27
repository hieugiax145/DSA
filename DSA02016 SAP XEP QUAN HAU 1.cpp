#include<bits/stdc++.h>
using namespace std;

int n;
int X[11],cot[11],d1[20],d2[20];
int dem=0;

void Try(int i){
	for(int j=1;j<=n;j++){
		if(!cot[j]&&!d1[i-j+n]&&!d2[i+j-1]){
			cot[j]=d1[i-j+n]=d2[i+j-1]=1;
			if(i==n) dem++;
			else Try(i+1);
			cot[j]=d1[i-j+n]=d2[i+j-1]=0;
		}
	}
}

void reset(){
	dem=0;
	memset(X,0,sizeof(X));
	memset(cot,0,sizeof(cot));
	memset(d1,0,sizeof(d1));
	memset(d2,0,sizeof(d2));
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		Try(1);
		cout<<dem<<endl;
		reset();
	}
}