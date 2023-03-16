#include<bits/stdc++.h>
using namespace std;
int n,k,a[100],check;
vector<int> vl;
void xuat(){
	for(int i=0;i<k;i++) cout<<vl[a[i]]<<" ";
	cout<<endl;
}
void sinh(){
	int i=k-1;
	while(i>=0&&a[i]==n-k+i){
		i--;
	}
	a[i]++;
	if(i<0) check=0;
	else {
		for(int j=i+1;j<k;j++) a[j]=a[j-1]+1;
	}
}
int main(){
	cin>>n>>k;
	check=1;
	int ok[1000]={0};
	for(int i=0;i<k;i++){
		a[i]=i;
	}
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		if(!ok[x]){
			vl.push_back(x);
			ok[x]=1;
		}
	}
	sort(vl.begin(),vl.end());
	n=vl.size();
	while(check){
		xuat();
		sinh();
	}
}