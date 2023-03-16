#include<bits/stdc++.h>
using namespace std;
int n,k,a[100],vl[100];
vector<vector<int>> res;
int check(){
	int s=0;
	for(int i=1;i<=n;i++){
		if(a[i]) s+=vl[i];
	}
	return s==k;
}
void QuayLui_NhiPhan(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			if(check()){
				vector<int> x;
				for(int m=1;m<=n;m++){
					if(a[m]) x.push_back(vl[m]);
				}
				res.push_back(x);
			}
		}
		else QuayLui_NhiPhan(i+1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=n;i++) cin>>vl[i];
		sort(vl+1,vl+n+1);
		QuayLui_NhiPhan(1);
		if(res.size()==0) cout<<-1;
		else{
			for(int i=res.size()-1;i>=0;i--){
				cout<<'[';
				for(int j=0;j<res[i].size();j++){
					cout<<res[i][j];
					if(j!=res[i].size()-1) cout<<" ";
				}
				cout<<']';
				cout<<" ";
			}
		}
		res.clear();
		cout<<endl;
	}
}