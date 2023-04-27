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

void InsertionSort(int n,int a[]){
	for(int i=0;i<n;i++){
		int x=a[i],pos=i-1;
		while(pos>=0&&x<a[pos]){
			a[pos+1]=a[pos];
			pos--;
		}
		a[pos+1]=x;
		cout<<"Buoc "<<i<<": ";
		xuat(i+1,a);
	}
}

void BubbleSort(int n,int a[]){
	for(int i=n-1;i>=1;i--){
		int ok=1;
		for(int j=0;j<i;j++){
			if(a[j]>a[j+1]){ 
				swap(a[j],a[j+1]);
				ok=0;
			}
		}
		if(ok) break;
		cout<<"Buoc "<<n-i<<": ";
		xuat(n,a);
	}
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int &x:a) cin>>x;
	// SelectionSort(n,a);
	// InsertionSort(n,a);
	BubbleSort(n,a);
}