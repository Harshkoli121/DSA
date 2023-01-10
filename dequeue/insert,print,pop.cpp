#include<bits/stdc++.h>
#define max 5
using namespace std;
class Dequeue{
    private:
    int arr[max];
    int front=-1;
    int rear=-1;
    int data;
    public:
    void insert_at_end(int data);
    void insert_at_front(int data);
    void delete_from_front();
    void delete_from_end();
    void print();
};
void Dequeue::insert_at_end(int i){
    if(rear>=max-1){
        cout<<"insertion not possible"<<endl;
    }else{
        if(front==-1){
            front=front+1;
            rear=rear+1;
        }else{
            rear=rear+1;
            arr[rear]=i;
        }
    }
    
}
void Dequeue::insert_at_front(int i){
    if(front==-1){
        front=0;
        arr[--rear]=i;
    }else{
        if(front!=-1){
            arr[--front]=i;
        }
    }
}
void Dequeue::delete_from_front(){
    if(front==-1){
        cout<<"deletion not possible"<<endl;
    }else{
        cout<<"deleted element is"<<arr[front]<<endl;
        if(front==rear){
            front=rear=-1;
            return;
        }else{
            front=front+1;
        }
    }
}
void Dequeue::delete_from_end(){
     if(front==-1){
        cout<<"deletion not possible"<<endl;
    }else{
        cout<<"deleted element is"<<arr[rear]<<endl;
        if(front==rear){
            front=rear=-1;
            return;
        }else{
            rear=rear+1;
        }
    }
}
void Dequeue::print(){
    if(front==-1){
        cout<<"dequeue is empty"<<endl;
    }else{
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
    }
}
int main(){
    Dequeue dequeue;
    int n,i;
    while(1){
    cout<<"1.insert at end"<<endl<<"2.insert at front"<<endl;
    cout<<"3.delete from end"<<endl<<"4.delete from front"<<endl<<"5.print"<<endl<<"6.exit"<<endl;
    cin>>n;
    switch(n){
        case 1:{
            cout<<"enter elements to be inserted at end";
            cin>>i;
            dequeue.insert_at_end(i);
         }break;
         case 2:{
             cout<<"enter elements to be inserted at front";
             cin>>i;
             dequeue.insert_at_front(i);
         }break;
         case 3:{
             dequeue.delete_from_front();
         }break;
         case 4:{
             dequeue.delete_from_end();
         }break;
         
         case 5:{
             dequeue.print();
         }break;
         case 6:{
             exit(1);
         }break;
    }
}
}
