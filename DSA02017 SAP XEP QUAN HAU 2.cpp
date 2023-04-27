#include<bits/stdc++.h>
using namespace std;

int X[9][9],cot[16],d1[16],d2[16];
int ans=0,sum=0;

void Try(int i){
	for(int j=1;j<=8;j++){
		if(!cot[j]&&!d1[i-j+8]&&!d2[i+j-1]){
			cot[j]=d1[i-j+8]=d2[i+j-1]=1;
			sum+=X[i][j];
			if(i==8) ans=max(ans,sum);
			else Try(i+1);
			cot[j]=d1[i-j+8]=d2[i+j-1]=0;
			sum-=X[i][j];
		}
	}
}

void reset(){
	ans=0;
	sum=0;
	memset(X,0,sizeof(X));
	memset(cot,0,sizeof(cot));
	memset(d1,0,sizeof(d1));
	memset(d2,0,sizeof(d2));
}

int main(){
	int t;
	cin>>t;
	while(t--){
		for(int i=1;i<=8;i++){
			for(int j=1;j<=8;j++) cin>>X[i][j];
		}
		Try(1);
		cout<<ans<<endl;
		reset();
	}
}