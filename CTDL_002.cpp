#include<bits/stdc++.h>
using namespace std;
int n,k,a[100]={0},v[100],ok;
vector<vector<int>> res;
void xuat(){
	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	cout<<endl;
}
void sinh(){
	int i=n;
	while(i>=1&&a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0) ok=0;
	else a[i]=1;
}
int check(){
	int sum=0;
	for(int i=1;i<=n;i++){
		if(a[i]) sum+=v[i];
	}
	return sum==k;
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>v[i];
	}
	ok=1;
	while(ok){
		if(check()){
			vector<int> x;
			for(int i=1;i<=n;i++){
				if(a[i]) x.push_back(v[i]);
			}
			res.push_back(x);
		}
		sinh();
	}
	for(int i=0;i<res.size();i++){
		for(int j=0;j<res[i].size();j++){
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<res.size();
}