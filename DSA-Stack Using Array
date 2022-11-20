#include <iostream>
using namespace std;

//complete the functions
class Stack{
	int A[100000];
	int top=-1;
	
	public:
	//constructor is called whenever an object of the class is declared
	void push(int data);
	void pop();
	void print();
	void size();
	};
	
	//push the value at the back
	void push(int val){
		cout<<"pushing the val: "<<val<<" at the back of queue\n";
		if(top==-1){
		    cout<<"stackoverflow:)";
		}else{
		    end=top+1;
		    A[top]=data;
		}
	}
	
	int top(){
		cout<<"returning the value at top or last\n";
		cout<<A[top]=data;
		return 0;
	}
	
	void pop(){
		cout<<"removing the last element\n";
		if(top=-1){
		    cout<<"stack underflow";
		}top=top-1;
	}
	
	int size(){
		cout<<"return the size of the queue\n";
		int sizearr;
		sizearr=top+1;
		
		cout<<"size ="<<sizearr;
		return 0;
	}
	
	bool isEmpty(){
		cout<<"returning if the stack is empty\n";
		return true;
	}
};

int main() {
	Stack s; //constructor is called on this line
	s.push(4);
	cout<<"top: "<<s.top()<<"\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
	
	s.push(5);
	s.push(3);
	cout<<"front: "<<s.top()<<"\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
	
	cout<<"top: "<<s.top()<<"\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
	return 0;
}
