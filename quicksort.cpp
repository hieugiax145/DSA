#include<bits/stdc++.h>
using namespace std;

void quicksort(int a[],int l,int r){
	int x=a[(l+r)/2];
	int i=l,j=r;
	while(i<j){
		while(a[i]<x) i++;
		while(a[j]>x) j--;
		if(i<=j) swap(a[i++],a[j--]);
	}
	if(i<r) quicksort(a,i,r);
	if(j>l) quicksort(a,l,j);
}

void xuat(int n,int a[]){
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int &i:a) cin>>i;
	quicksort(a,0,n-1);
	xuat(n,a);
}