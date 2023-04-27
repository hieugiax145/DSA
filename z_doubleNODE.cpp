#include<bits/stdc++.h>
using namespace std;

struct Node{
	string data;
	Node *pre;
	Node *next;
};

struct douList{
	Node *head;
	Node *tail;
};

typedef struct Node* node;
typedef struct douList* dlist;

node makeNode(string x){
	node newNode=new Node;
	newNode->data=x;
	newNode->pre=newNode->next=NULL;
	return newNode;
}

dlist makeList(string x){
	dlist newdlist=new douList;
	node newNode=makeNode(x);
	newdlist->head=newNode;
	newdlist->tail=newdlist->head;
	return newdlist;

}

void addHead(dlist &p,string x){
	if(!p) p=makeList(x);
	else{
		node newNode=makeNode(x);
		newNode->next=p->head;
		p->head->pre=newNode;
		p->head=newNode;
	}
}

void addTail(dlist &p,string x){
	if(!p) p=makeList(x);
	else{
		node newNode=makeNode(x);
		newNode->pre=p->tail;
		p->tail->next=newNode;
		p->tail=newNode;
	}
}

void addPos(dlist &p,int k,string x){
	node pos=p->head;
	for(int i=1;i<k;i++){
		pos=pos->next;
	}
	node newNode=makeNode(x);
	newNode->pre=pos;
	newNode->next=pos->next;
	pos->next->pre=newNode;
	pos->next=newNode;
}

void insertSorted(dlist &p,string x){
	if(!p) p=makeList(x);
	else{
		node newNode=makeNode(x);
		if(p->head->data>x){
			newNode->next=p->head;
			p->head->pre=newNode;
			p->head=newNode;
		}
		else{
			node current=p->head;
			while(current->next&&current->next->data<x) current=current->next;
			newNode->next=current->next;
			if (current->next) current->next->pre=newNode;
			else p->tail=newNode;
			newNode->pre=current;
			current->next=newNode;
		}
	}
}

void deleteNode(dlist &p,string x){
	node current=p->head;
	while(!current&&current->data==x){
		p->head=current->next;
		free(current);
		current=p->head;
	}
	node tmp;
	while(current){
		while(current&&current->data!=x){
			tmp=current;
			current=current->next;
		}
		if(!current) return;
		tmp->next=current->next;
		current->next->pre=tmp;
		free(current);
		current=tmp->next;
	}
}

void printHead(dlist p){
	node l=p->head;
	while(l){
		cout<<l->data<<" ";
		l=l->next;
	}
	cout<<endl;
}

void printTail(dlist p){
	node l=p->tail;
	while(l){
		cout<<l->data<<" ";
		l=l->pre;
	}
	cout<<endl;
}

int main(){
	string x;
	dlist p=NULL;
	while(cin>>x){
		addHead(p,x);
	}
	deleteNode(p,"milan");
	printTail(p);
	printHead(p);
}