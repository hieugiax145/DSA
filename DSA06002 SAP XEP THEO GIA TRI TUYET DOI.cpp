#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        multimap<int,int> mp;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            mp.insert(make_pair(abs(x-k),k));
        }
        for(auto k:mp) cout<<k.second<<" ";
        cout<<endl;
    }
}