#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
};

typedef struct Node* node;

node makeNode(int x){
	node newNode=new Node;
	newNode->data=x;
	newNode->next=NULL;
	return newNode;
}

void addNode(node &head,int x){
	node tmp=makeNode(x);
	if(head==NULL) head=tmp;
	else{
		node p=head;
		while(p->next!=NULL) p=p->next;
		p->next=tmp;
	}
}

void convertNode(node &head,int a,int b){
	node p=head;
	while(p!=NULL){
		if(p->data==a) p->data=b;
		p=p->next;
	}
}

int getData(node &head,int k){
	node p=head;
	int x;
	for(int i=0;i<=k;i++){
		x=p->data;
		p=p->next;
	}
	return x;
}

void deleteBigger(node &head,int k){
	node p=head,tmp;
	while(p!=NULL&&p->data>k){
		head=p->next;
		free(p);
		p=head;
	}
	while(p!=NULL){
		while(p!=NULL&&p->data<=k){
			tmp=p;
			p=p->next;
		}
		if(p==NULL) return;
		tmp->next=p->next;
		free(p);
		p=tmp->next;
	}
}

void insertSorted(node &head,int x){
	node newNode=makeNode(x);
	if(head==NULL) head=newNode;
	else{
		if(head->data>x){
			newNode->next=head;
			head=newNode;
		}
		else{
			node p=head;
			while(p->next!=NULL&&p->next->data<x) p=p->next;
			newNode->next=p->next;
			p->next=newNode;
		}
	}
}

void print(node head){
	node p=head;
	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
	}
}

int main(){
	int n,a,b,k;
	cin>>n;
	node head=NULL;
	int x;
	while(cin>>x){
		insertSorted(head,x);
	}
	// cin>>a>>b;
	// cin>>k;
	// int x=getData(head,k);
	// convertNode(head,a,b);
	// deleteBigger(head,x);
	// insertSorted(head,k);
	print(head);
}