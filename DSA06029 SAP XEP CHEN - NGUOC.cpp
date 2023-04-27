#include<bits/stdc++.h>
using namespace std;

void xuat(int n,int a[]){
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
}

// void SelectionSort(int n,int a[]){
// 	for(int i=0;i<n-1;i++){
// 		int pos=i;
// 		for(int j=i+1;j<n;j++){
// 			if(a[j]<a[pos]){
// 				pos=j;
// 			}
// 		}
// 		swap(a[i],a[pos]);
// 		SelectionSort(n,a);
// 		cout<<"Buoc "<<i+1<<": ";
// 		xuat(n,a);
// 	}
// }

void SelectionSort(int i,int n,int a[]){
	if(i<n-1){
		int tmp[100];
		int pos=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[pos]) pos=j;
		}
		swap(a[i],a[pos]);
		for(int k=0;k<n;k++){
			tmp[k]=a[k];
		}
		SelectionSort(i+1,n,a);
		cout<<"Buoc "<<i+1<<": ";
		xuat(n,tmp);
	}
}

// void InsertionSort(int n,int a[]){
// 	for(int i=0;i<n;i++){
// 		int x=a[i],pos=i-1;
// 		while(pos>=0&&x<a[pos]){
// 			a[pos+1]=a[pos];
// 			pos--;
// 		}
// 		a[pos+1]=x;
// 		cout<<"Buoc "<<i<<": ";
// 		xuat(i+1,a);
// 	}
// }

void InsertionSort(int i,int a[],int n){
	if(i<=n){
		int tmp[100];
		for(int j=0;j<i;j++) tmp[j]=a[j];
		int val=a[i],pos=i-1;
		while(pos>=0&&a[pos]>val){
			a[pos+1]=a[pos];
			pos--;
		}
		a[pos+1]=val;
		InsertionSort(i+1,a,n);
		cout<<"Buoc "<<i-1<<": ";
		xuat(i,tmp);
	}
}

// void BubbleSort(int n,int a[]){
// 	for(int i=n-1;i>=1;i--){
// 		int ok=1;
// 		for(int j=0;j<i;j++){
// 			if(a[j]>a[j+1]){ 
// 				swap(a[j],a[j+1]);
// 				ok=0;
// 			}
// 		}
// 		if(ok) break;
// 		BubbleSort(n,a);
// 		cout<<"Buoc "<<n-i<<": ";
// 		xuat(n,a);
// 	}
// }

void BubbleSort(int i,int n,int a[],int ok){
	if(!ok){
		ok=1;
		int tmp[1000];
		for(int j=0;j<i;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				ok=0;
			}
		}
		if(!ok){
			for(int k=0;k<n;k++) tmp[k]=a[k];
			BubbleSort(i-1,n,a,ok);
			cout<<"Buoc "<<n-i<<": ";
			xuat(n,tmp);
		}
	}
}

int main(){
	// int t;
	// cin>>t;
	// while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int &x:a) cin>>x;
		// SelectionSort(0,n,a);
		InsertionSort(1,a,n);
		// int ok=0;
		// BubbleSort(n-1,n,a,ok);
	// }
}