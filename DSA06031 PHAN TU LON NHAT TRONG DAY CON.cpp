#include<bits/stdc++.h>
using namespace std;
void solve(int n,int k,int a[]){
	deque<int> dp;
	for(int i=0;i<n;i++){
		if(dp.front()<=i-k) dp.pop_front();
		while(!dp.empty()&&a[dp.back()]<=a[i]){
			dp.pop_back();
		}
		dp.push_back(i);
		if(i+1>=k) cout<<a[dp.front()]<<" ";
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		solve(n,k,a);
	}
}