#include <iostream>
using namespace std;

//you can also use class
struct Node{
	int data;
	Node *next;
};
Node *head;

/**
 * newNode function will return a node with data as val
 * */
Node *newNode(int val){
	Node *temp = new Node;
	temp->data = val;
	return temp;
}

/**
 * createLinkedList will read the `n` inputs from user and will create a linked list of size `n`
 * */
 Node *createLinkedList(int n){
     int num;
     Node *temp=new Node;
     for(int i=0;i<n;i++){
         cin>>num;
         temp->data=num;
         temp->next=head;
         head=temp;
     }
 	return NULL;
 }
 
 /**
  * printLinkedList will print all the elemets of linked list
  * */
void printLinkedList(Node *head){
    Node *temp=head;
	while(temp->next!=NULL){
	    
	    cout<<temp->data<<" ";
	    temp=temp->next;
	}
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	Node* head =createLinkedList(5);
	cout<<"printing List";
	
	printLinkedList(head);
	return 0;
}
