#include<bits/stdc++.h>
using namespace std;
int mark[1001][1001];
int main(){
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		int n1=s1.length(),n2=s2.length();
		for(int i=0;i<=n1;i++){
			for(int j=0;j<=n2;j++){
				if(i==0||j==0) mark[i][j]=0;
				else{
					if(s1[i-1]==s2[j-1]) mark[i][j]=mark[i-1][j-1]+1;
					else mark[i][j]=max(mark[i-1][j],mark[i][j-1]);
				}
			}
		}
		cout<<mark[n1][n2]<<endl;
	}
}