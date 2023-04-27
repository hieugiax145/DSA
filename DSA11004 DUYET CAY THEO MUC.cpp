#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> res;
// int level=1;

struct Node{
	int data;
	Node *left,*right;
};

typedef struct Node* node;

node makeNode(int x){
	node newNode=new Node;
	newNode->data=x;
	newNode->left=newNode->right=NULL;
	return newNode;
}

void addNode(node &root,int dad,int child,char dir){
	if(dir=='L') root->left=makeNode(child);
	if(dir=='R') root->right=makeNode(child);
	
}

void insertTree(node &root,int dad,int child,char dir){
	if(root==NULL) return;
	if(root->data==dad) addNode(root,dad,child,dir);
	else{
		insertTree(root->left,dad,child,dir);
		insertTree(root->right,dad,child,dir);
	}
}

void store(node &root,int level){
	if(root){
		res[level].push_back(root->data);
		// level++;
		store(root->left,level+1);
		store(root->right,level+1);
	}
}

void print(node root){
	if(root){
		if(root->left) cout<<root->left->data<<" ";
		if(root->right) cout<<root->right->data<<" ";
		print(root->left);
		print(root->right);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		res.clear();
    	res.resize(10005);
		node root=NULL;
		int n;
		cin>>n;
		int dad,child;
		char dir;
		while(n--){
			cin>>dad>>child>>dir;
			if(!root) root=makeNode(dad);
			insertTree(root,dad,child,dir);
		}
		
		store(root,1);
		for(int i=1;i<res.size();i++){
			for(int k:res[i]) cout<<k<<" ";
		}
		// cout<<level;
		// cout<<root->data<<" ";
		// print(root);
		// cout<<root->left->data<<" ";
		cout<<endl;
	}
}