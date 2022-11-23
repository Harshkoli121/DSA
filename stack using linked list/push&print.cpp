
#include<bits/stdc++.h>
using namespace std;
class Stack{
    Stack *next;
    int data;
    public:
    void push(int x );
    void print();
    void pop();
};
Stack *head;
void Stack::push(int x){
    Stack *temp = new Stack();
    temp->data=x;
    if(head==NULL){
        head=temp;
        temp->next=NULL;
    }else{
        temp->next=head;
        head=temp;
    }
}
void Stack::print(){
    Stack *temp=head;
    while(head!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
int main(){
    Stack stack;
    int n,data;
    while(1){
        cout<<"1.push"<<endl;
        cout<<"2.print"<<endl;
        cout<<"3.exit"<<endl;
        cin>>n;
    switch(n){
        case 1:{
            cout<<"enter the elements:";
            cin>>data;
            stack.push(data);
        }break;
        case 2:{
            stack.print();
        }break;
        case 3:{
            exit(1);
        }break;
    }
    }
    return 0;
}
