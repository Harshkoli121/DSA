#include <iostream>

using namespace std;

class Queue{
    private:
        int data;
        Queue *next;
    
    public:
        void insert(int x);
        void deletion();
        void print();
};

Queue *head;

void Queue::insert(int x)
{
    Queue *temp = new Queue();
    temp->data = x;
    temp->next = NULL;
    
    if(head==NULL)
    {
        head = temp;
    }
    else
    {
        Queue *temp1 = head;
        while(temp1->next!=NULL)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
}

void Queue::deletion()
{
    Queue *temp = head;
    head = temp->next;
}

void Queue::print()
{
    Queue *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    Queue q;
    q.insert(5);
    q.insert(7);
    q.insert(8);
    q.insert(3);
    q.insert();
    cout<<"\n\n";
    q.deletion();
    q.deletion();
    q.print();
    return 0;
}
