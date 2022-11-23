#include <iostream>
using namespace std;

class Node{
	private:
	    int data;
	    Node *next;
	    Node *prev;
	public:
	    void insert(int x);
	    void print();
};

Node *head;

void Node::insert(int x)
{
	Node *temp = new Node();
	temp->data = x;
	temp->next = NULL;
	
	if(head==NULL)
	{
		head = temp;
		head->prev = NULL;
	}
	else
	{
		Node *curr = head;
		Node *back = head;
		while(curr->next!=NULL)
		{
			curr = curr->next;
			curr->prev = back;
			back = curr;
		}
		curr->next = temp;
		temp->prev = curr;
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
int main() {
	Node list;
	int n,x;
	cout<<" Enter the size of list :";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		list.insert(x);
	}
	list.print();
	return 0;
}
