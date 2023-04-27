#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int l,int mid,int r){
	int i=l,j=mid+1;
	int cnt=l;
	int tmp[100001];
	while(i<=mid&&j<=r){
		if(a[i]<=a[j]) tmp[cnt++]=a[i++];
		else tmp[cnt++]=a[j++];
	}
	while(i<=mid) tmp[cnt++]=a[i++];
	while(j<=r) tmp[cnt++]=a[j++];
	for(int k=l;k<=r;k++) a[k]=tmp[k];
}

void mergeSort(int a[],int l,int r){
	if(l>=r) return;
	int mid=(l+r)/2;
	mergeSort(a,l,mid);
	mergeSort(a,mid+1,r);
	merge(a,l,mid,r);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int &i:a) cin>>i;
		mergeSort(a,0,n-1);
		for(int i:a) cout<<i<<" ";
		cout<<endl;
	}
}