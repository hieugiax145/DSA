#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int> dinh[n+1];
		for(int i=1;i<=k;i++){
			int a,b;
			cin>>a>>b;
			dinh[a].push_back(b);
			dinh[b].push_back(a);

		}
		for(int i=1;i<=n;i++){
			cout<<i<<": ";
			for(int x:dinh[i]) cout<<x<<" ";
			cout<<endl;
		}
	}
}