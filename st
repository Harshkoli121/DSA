#include<bits/stdc++.h>
#define max 5
using namespace std;
class Stack{
    private:
    int top=-1;
    int stack_arr[max];
    public:
     void push(int data);
    void print();
    void pop();
};
void Stack::push(int data){
    if(top==max-1){
        cout<<"stack overflow";
    }else{
        top=top+1;
        stack_arr[top]=data;
    }
}
void Stack::print(){
    for(int i=top;i>=0;--i){
        cout<<stack_arr[i];
    }
}
void Stack::pop(){
    if(top==-1){
        cout<<"Stack underoverflow";
    }else{
        top=top-1;
    }
}
int main(){
    Stack stack;
    int n,data;
    while(1){
    cout<<"1.push"<<endl;
    cout<<"2.print"<<endl;
    cout<<"3.pop"<<endl;
    cout<<"4.exit"<<endl;
    cin>>n;
    
    switch(n){
        case 1:{
            cout<<"enter the element";
            cin>>data;
            stack.push(data);
            }break;
            case 2:{
                stack.print();
            }break;
            case 3:{
                stack.pop();
            }break;
            case 4:{
                exit(1);
            }
        }
    }
}
