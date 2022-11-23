#include <bits/stdc++.h>
#define MAX 6

using namespace std;

class Stack{
	private:
	    int top = -1;
	    int stack_arr[MAX];
	public:
	    void push(int data);
	    void pop();
	    void print();
	    void size();
};

void Stack::push(int data){
	if(top == MAX-1)
	{
		cout<<"warning : STACK OVERFLOW !";
	}
	top = top+1;
	stack_arr[top] = data;
}

void Stack::pop(){
	
	if(top == -1)
	{
		cout<<"warning : STACK UNDERFLOW !";
	}
	top = top-1;
}

void Stack::print(){
    cout<<"Here is the stack of elements :"<<endl;
	for(int i=top;i>=0;--i)
	{
		cout<<stack_arr[i]<<endl;
	}
}

void Stack::size(){
	int sizearr;
	sizearr = top+1;
	cout<<"The current size of stack is :"<<sizearr;
}

int main()
{
	Stack stack;
	int c,data;
	while(1)
    {
	cout<<"\n1. Push "<<endl;
	cout<<"2. Pop"<<endl;
	cout<<"3. Print "<<endl;
	cout<<"4. Size"<<endl;
	cout<<"5. Exit "<<endl;
	cin>>c;
	switch(c)
	{
		case 1:{
			cout<<" Enter the data you want to push :";
			cin>>data;
			stack.push(data);
		}
		break;
		
		case 2:{
			cout<<"\nTopmost element from the stack is popped out\n ";
			stack.pop();
		}
		break;
		
		case 3: {
			stack.print();
			cout<<"\n";
		}
		break;
		
		case 4: {
			stack.size();
			cout<<"\n";
		}
		break;
		case 5: {
			exit(1);
		}
		break;
		default : {
			cout<<"Error";
		}
		break;
	}
    }
	return 0;
}
