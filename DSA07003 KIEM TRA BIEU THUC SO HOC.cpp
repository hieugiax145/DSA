#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stack<char> ss;
		int check;
		for(int i=0;i<s.length();i++){
			if(s[i]=='('||s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'){
				ss.push(s[i]);
			}
			if(s[i]==')'){
				char tmp=ss.top();
				check=0;
				while(tmp!='('){
					check=1;
					ss.pop();
					tmp=ss.top();
				}
				if(!check) break;
				if(tmp='(') ss.pop();
			}
		}
		if(check) cout<<"No"<<endl;
		else cout<<"Yes"<<endl;
	}
}