#include<bits/stdc++.h>
using namespace std;
int n,k,a[100];
vector<string> vl;
void xuat(){
	for(int i=0;i<k;i++) cout<<vl[a[i]-1]<<" ";
	cout<<endl;
}
void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i+1;j++){
		a[i]=j;
		if(i==k-1) xuat();
		else Try(i+1);
	}
}
int main(){
	cin>>n>>k;
	map<string,int> mp;
	for(int i=0;i<n;i++){
		string x;
		cin>>x;
		if(mp[x]==0){
			vl.push_back(x);
			mp[x]++;
		}
	}
	n=vl.size();
	sort(vl.begin(),vl.end());
	Try(0);

}