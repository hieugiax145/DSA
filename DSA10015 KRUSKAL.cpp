#include<bits/stdc++.h>
using namespace std;

struct edge{
	int st,en,w;
	edge(int a,int b,int c){
		st=a,en=b,w=c;
	}
};

int parent[105],sz[105];
vector<edge> C;

void make_set(int n){
	for(int i=1;i<=n;i++){
		parent[i]=i;
		sz[i]=1;
	}
}

int find(int x){
	if(x==parent[x]) return x;
	return parent[x]=find(parent[x]);
}

bool cmp(edge a,edge b){
	return a.w<b.w;
}

bool Union(int a,int b){
	a=find(a);
	b=find(b);
	if(a==b) return false;
	if(a!=b){
		if(sz[a]<sz[b]) swap(a,b);
		parent[b]=a;
		sz[a]+=sz[b];
	return true;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		while(k--){
			int a,b,c;
			cin>>a>>b>>c;
			edge xx(a,b,c);
			C.push_back(xx);
		}
		make_set(n);
		int ans=0;
		sort(C.begin(),C.end(),cmp);
		int cnt=0;
		for(auto i:C){
			if(cnt==n-1) break;
			if(Union(i.st,i.en)){
				ans+=i.w;
				cnt++;
			}
		}
		cout<<ans<<endl;
		C.clear();
	}
}