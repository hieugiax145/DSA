#include<bits/stdc++.h>
using namespace std;
void xuat(int n,int a[]){
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
}
void SelectionSort(int n,int a[]){
	for(int i=0;i<n-1;i++){
		int pos=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[pos]){
				pos=j;
			}
		}
		swap(a[i],a[pos]);
		cout<<"Buoc "<<i+1<<": ";
		xuat(n,a);
	}
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int &x:a) cin>>x;
	SelectionSort(n,a);
}