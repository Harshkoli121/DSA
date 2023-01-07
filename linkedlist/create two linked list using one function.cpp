#include<bits/stdc++.h>
using namespace std;
class Node{
    int data;
    Node *next;
    public:
    void insert(int data);
    void print();
    
};
Node *head;
void Node::insert(int num){
    Node *temp=new Node();
    temp->data=num;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    }else{
      Node *temp2=head;  
    
    while(temp2->next!=NULL){
        temp2=temp2->next;
        
    }
    temp2->next=temp;
    }
}
void Node::print(){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node list;
    int n,num;
    cout<<"enter the no. of elements:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        list.insert(num);
    }
    for(int i=0;i<n;i++){
        cin>>num;
        list.insert(num);
    }
    list.print();
    return 0;
}
