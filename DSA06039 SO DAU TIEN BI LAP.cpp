#include<bits/stdc++.h>
using namespace std;
	
void solve(int n,int a[],map<int,int> mp){
	for(int i=0;i<n-1;i++){
		if(mp[a[i]]>1){
			cout<<a[i]<<endl;
			return;
		}
	}
	cout<<"NO"<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		map<int,int> mp;
		for(int i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
		}
		solve(n,a,mp);
	}
}