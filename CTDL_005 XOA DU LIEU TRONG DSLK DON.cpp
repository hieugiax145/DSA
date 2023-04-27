#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
};

typedef struct Node* node;

node create(int x){
	node tmp=new Node;
	tmp->data=x;
	tmp->next=NULL;
	return tmp;
}

void insert(node &head,int x){
	node tmp=create(x);
	if(head==NULL) head=tmp;
	else{
		node p=head;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=tmp;
	}
}

void solve(node &head,int x){
	node p=head;
	node tmp;
	while(p!=NULL&&p->data==x){
		head=p->next;
		free(p);
		p=head;
	}
	while(p!=NULL){
		while(p!=NULL&&p->data!=x){
			tmp=p;
			p=p->next;
		}
		if(p==NULL) return;
		tmp->next=p->next;
		free(p);
		p=tmp->next;
	}
}

void print(node &head,int x){
	node p=head;
	while(p!=NULL){
			cout<<p->data<<" ";
		p=p->next;
	}
}

int main(){
	int n;
	cin>>n;
	node a=NULL;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		insert(a,x);
	}
	int x;
	cin>>x;
	ans(a,x);
	print(a,x);
}