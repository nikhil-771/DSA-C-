#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

Node*head=nullptr;
Node*curr=nullptr;
int main()
{
    Node a1,a2,a3,a4;
    a1.data= 1;
    a1.next= &a2;
    a2.data= 2;
    a2.next= &a3;
    a3.data= 3;
    a3.next= &a4;
    a4.data= 4;
    a4.next= nullptr;
    head = &a1;
    curr = head;

    while(curr!=NULL)
    {
        cout<<curr->data<<endl;
        curr=curr->next;
    }
    
}