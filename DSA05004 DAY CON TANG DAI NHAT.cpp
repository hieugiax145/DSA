#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n],cnt[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		cnt[i]=1;
	}
	int ans=0;
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[j]<a[i]){
				cnt[i]=max(cnt[i],cnt[j]+1);
			}
		}
		ans=max(ans,cnt[i]);
	}
	cout<<ans;
}