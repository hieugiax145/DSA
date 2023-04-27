#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int dem=0;
		if(s[0]==')'){
			s[0]='(';
			dem++;
		}
		if(s[s.size()-1]=='('){
			s[s.size()-1]=')';
			dem++;
		}
		stack<char> ss;
		for(char i:s){
			if(i=='(') ss.push(i);
			else{
				if(!ss.empty()) ss.pop();
				else{
					ss.push(i);
					dem++;
				}
			}
		}
		cout<<dem+ss.size()/2<<endl;
	}
}