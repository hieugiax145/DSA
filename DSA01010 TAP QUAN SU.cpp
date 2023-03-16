#include<bits/stdc++.h>
using namespace std;
int solve(int n,int k,int a[],map<int,int> mp){
	int dem=0;
	int i=k-1;
	while(i>=0&&a[i]==n-k+i+1){
		i--;
	}
	if(i<0) return k;
	else{
		a[i]++;
		for(int j=i+1;j<k;j++) a[j]=a[j-1]+1;
		for(int j=0;j<k;j++){
			if(!mp[a[j]]) dem++;
		}
	}
	return dem;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[k];
		map<int,int> mp;
		for(int &x:a){
			cin>>x;
			mp[x]++;
		}
		cout<<solve(n,k,a,mp)<<endl;
	}	
}