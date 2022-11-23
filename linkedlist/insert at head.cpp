#include <iostream>
using namespace std;

class Node{
	private:
	   Node *head;
	   Node *next;
	   int data;
	public:
	   void insert(int num);
	   void print();
};

void Node::insert(int num)
{
	Node *temp = new Node();
	temp->data = num; 
	temp->next = head;
	head = temp;
}

void Node::print(){
	Node *temp = head;
	while(temp->next!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

int main()
{
  Node list;
	int n,num;
	cout<<" Enter the number of elements :";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		list.insert(num);
	}
	list.print();
	return 0;
}
