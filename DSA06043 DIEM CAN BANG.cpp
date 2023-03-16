#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int sum=0;
		int ans=-1;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
			b[i]=sum;
		}
		for(int i=0;i<n;i++){
			if(b[i]==(b[n-1]-b[i]-a[i+1])){
				ans=i+2;
				break;
			}
		}
		cout<<ans<<endl;
	}
}