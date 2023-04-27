#include<bits/stdc++.h>
using namespace std;

vector<int> dinh[1001];
int marked[1001];
int truoc[1001];
int check,en;

void DFS(int x){
	if(check) return;
	marked[x]=1;
	for(int i:dinh[x]){
		for(int i:dinh[x]){
			if(!marked[i]){
				truoc[i]=x;
				DFS(i);
			}
			else if(i!=truoc[x]&&i==1){
				en=x;
				check=1;
				return;
			}
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		check=0;
		while(k--){
			int x,y;
			cin>>x>>y;
			dinh[x].push_back(y);
			dinh[y].push_back(x);
		}
		for(int i=1;i<=n;i++){
			sort(dinh[i].begin(),dinh[i].end());
		}
		DFS(1);
		if(check){
			vector<int> ans;
			ans.push_back(1);
			while(en!=1){
				ans.push_back(en);
				en=truoc[en];
			}
			ans.push_back(1);
			reverse(ans.begin(),ans.end());
			for(auto i:ans) cout<<i<<" ";
				cout<<endl;
		}
		else cout<<"NO"<<endl;
		for(int i=1;i<=n;i++){
			dinh[i].clear();
			marked[i]=0;
			truoc[i]=0;
		}
	}
}