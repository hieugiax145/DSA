#include<bits/stdc++.h>
using namespace std;
void xenke(int n, int a[]){
	sort(a,a+n);
	int i=0,j=n-1;
	while(i<j){
		cout<<a[j]<<" "<<a[i]<<" ";
		i++;
		j--;
	}
	if(i==j) cout<<a[i];
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int &x:a) cin>>x;
		xenke(n,a);
	}
}