#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		multimap<int,int> mp;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			mp.insert(make_pair(x,i));
		}
		for(auto x:mp) cout<<x.first<<" ";
		cout<<endl;
	}
}