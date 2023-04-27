#include<bits/stdc++.h>
using namespace std;

long long F[105];

void fibo(){
	F[1]=F[2]=1;
	for(int i=3;i<=105;i++) F[i]=F[i-2]+F[i-1];
}

char solve(long long n,long long k){
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(k<=F[n-2]) return solve(n-2,k);
	else solve(n-1,k-F[n-2]);
}

int main(){
	fibo();
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		cout<<solve(n,k)<<endl;
	}
}