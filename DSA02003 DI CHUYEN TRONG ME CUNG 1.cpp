#include<bits/stdc++.h>
using namespace std;
int n,a[100][100],ok;
string s;
void quaylui(int i,int j){
	if(a[i+1][j]){
		s+='D';
		quaylui(i+1,j);
		s.erase(s.size()-1,1);
	}
	if(a[i][j+1]){
		s+='R';
		quaylui(i,j+1);
		s.erase(s.size()-1,1);
	}
	if(i==n-1&&j==n-1){
		cout<<s<<" ";
		ok=1;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		ok=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		if(a[0][0]==0) ok=0;
		else quaylui(0,0);
		if(ok==0) cout<<-1;
		cout<<endl;
	}
}