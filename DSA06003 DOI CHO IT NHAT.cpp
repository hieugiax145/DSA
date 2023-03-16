#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int n,int a[]){
	int dem=0;
	for(int i=0;i<n-1;i++){
		int pos=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[pos]){
				pos=j;
			}
		}
		if(pos!=i) dem++;
		swap(a[i],a[pos]);
	}
	cout<<dem<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int &x:a) cin>>x;
		SelectionSort(n,a);
	}
}