#include<bits/stdc++.h>
using namespace std;

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

bool check(node root){
	if(!root->left&&!root->right) return true;
	if(root->left&&root->right){
		return check(root->left)&&check(root->right);
	}
	return false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
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
		cout<<check(root);
		cout<<endl;
	}
}