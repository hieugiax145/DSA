#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		for(auto &x:a) cin>>x;
		int i=1;
		int ok=1;
		while(ok&&i<n){
			if(a[i-1]>a[i]) ok=0;
			else i++;
		}
		if(i==n) cout<<0<<endl;
		else cout<<i<<endl;
	}
}