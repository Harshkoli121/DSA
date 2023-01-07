#include<bits/stdc++.h>
using namespace std;
class Node{
    int data;
    Node *next;
    public:
    void insert(int num);
    void insert1(int num1);
    void createlist();
    void createlist1();
    void print();
    void print1();
    void mergelist(Node *head,Node *head1);
};
Node *head;
Node *head1;
void Node::insert(int num)
{
    Node *temp=new Node();
    temp->data=num;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }else{
        Node *temp1=head;
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
        }
        temp1->next=temp;
    }
    
}
void Node::insert1(int num1)
{
    Node *temp=new Node();
    temp->data=num1;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    }
    Node *temp1=head;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next=temp;
}
void Node::createlist()
{
    
    int s,num;
    cout<<"Enter size of list 1:";
    cin>>s;
    for(int i=0;i<s;i++)
    {
        cin>>num;
        insert(num);
    }
    // cout<<"1st list:";
    // print();
    // cout<<endl;
  
}
void Node::createlist1()
{
    int s,num;
    cout<<"Enter size of list 2:";
    cin>>s;
    for(int i=0;i<s;i++)
    {
        cin>>num;
        insert1(num);
    }
//   cout<<"2nd list";
// //   print1();
// //   cout<<endl;
}
void Node::print()
{
    Node *temp1=head;
    while(temp1!=NULL)
    {
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
    
}
void Node::print1()
{
    Node *temp1=head1;
    while(temp1!=NULL)
    {
        cout<<temp1->data<<" ";
         temp1=temp1->next;
    }
   
}
void Node::mergelist(Node *head,Node *head1)
{
    Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=head1;

}
int main()
{
    Node list;
    list.createlist();
    list.createlist1();
    list.mergelist(head,head1);
    cout<<"\n"<<"final list:";
    list.print();
    return 0;

}
