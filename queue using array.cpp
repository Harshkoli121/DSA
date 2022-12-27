#include<bits/stdc++.h>
using namespace std;
#define max 5
class Queue{
    private:
    int last=-1;
    int first=-1;
    int count =0;
    int arr_q[max];
    public:
    void insert(int data);
    void deletion();
    void print();
};
void Queue::insert(int data){
    if(last==max-1){
        cout<<"Queue overflow";
    }else{
        last=last+1;
        arr_q[last]=data;
        
    }
}
void Queue::deletion(){
    if(last==-1){
        cout<<"queue is empty";
    }else{
        for(int i=0;i<last;i--){
            arr_q[i]=arr_q[i+1];
        }
        count ++;
    }
}
void Queue::print(){
    for(int i=0;i<(last-count);i++){
        cout<<arr_q[i]<<" ";
    }
    
}

int main() {
	Queue object;
	int n,data;
	while(1)
	{
		cout<<"1. INSERT"<<endl;
		cout<<"2. DELETE"<<endl;
		cout<<"4. PRINT"<<endl;
		cout<<"5. EXIT"<<endl;
		cout<<"Enter your choice :";
		cin>>n;
		switch(n)
		{
			case 1: {
				cout<<"Enter your element :";
				cin>>data;
				object.insert(data);
			}
			break;
			case 2: {
				object.deletion();
				cout<<"Front element is removed !\n";
			}
			break;
			case 4: {
			    cout<<"Your Queue is :\n";
				object.print();
			}
			break;
			case 5: {
				exit(1);
			}
			break;
			default: {
				cout<<"ERROR";
			}
		}
		
	}
	return 0;
}
