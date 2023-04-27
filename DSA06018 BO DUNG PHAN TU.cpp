#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		set<int> se;
		while(n--) {
			int x;
			cin>>x;
			se.insert(x);
		}
		int ans=*se.rbegin()-*se.begin()-se.size()+1;
		cout<<ans<<endl;
	}
}