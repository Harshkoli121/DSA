#include <bits/stdc++.h>
#define MAX 6 
using namespace std;

class Stack{
	private:
	    int top = -1;
            int stack_arr[MAX];
	public:
	    void push(int data);
	    void print();
	    void pop();
};

int main()
{
	Stack stack;
	stack.push(2);
	stack.push(4);
	stack.push(5);
	stack.push(4);
	stack.push(8);
	stack.push(9);
	stack.push(10);
	stack.print();
	
	return 0;
}

void Stack::push(int data)
{
	if(top == MAX-1)
	{
		cout<<"#warning : 'STACK OVERFLOW'"<<endl;
		return;
	}
	
	top = top+1;
	stack_arr[top] = data;
}


void Stack::print()
{
	for(int i=0;i<=top;i++)
	{
		cout<<stack_arr[i]<<" ";
	}
}
