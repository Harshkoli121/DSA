#include <bits/stdc++.h>

using namespace std;

class Node{
	private:
	    int data;
	    Node *next;
	public:
	    void insert(int x);
	    void print();
	    void reverse();
};

Node *head;

void Node::insert(int x){
	Node *temp = new Node();
	temp->data = x;
	temp->next = NULL;
	
	if(head==NULL)
	{
		head = temp;
	}
	else
	{
		Node *temp2 = head;
		while(temp2->next!=NULL)
		{
			temp2 = temp2->next;
		}
		temp2->next = temp;
	}
}

void Node::print(){
	Node *temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

void Node::reverse()
{
  Node *curr = head;
  Node *prev = NULL;
  Node *after = curr->next;
  while(after!=NULL)
  {
  	curr->next = prev;
  	prev = curr;
  	curr = after;
  	after = curr->next;
  }
  curr->next = prev;
  head = curr;
}

int main()
{
	Node list;
	list.insert(1);
	list.insert(2);
	list.insert(3);
	list.insert(4);
	list.insert(5);
	list.insert(6);
	cout<<"Actual linked list :"<<endl;
	list.print();
	list.reverse();
	cout<<"\n";
	cout<<"\nAfter reversing the linked list :"<<endl;
	list.print();
	
	return 0;
}
