#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int &x:a) cin>>x;
		int ans=INT_MAX;
		int pos1,pos2;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
			// ans=min(ans,abs(a[i]+a[i-1]));
				if(ans>abs(a[i]+a[j])){
					ans=abs(a[i]+a[j]);
					pos1=i;
					pos2=j;
				}
			}
		}
		cout<<a[pos1]+a[pos2]<<endl;
	}
}