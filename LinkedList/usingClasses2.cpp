#include <iostream>
using namespace std;


class Node
{
    public:
    int data;
    Node* next;
};

Node*curr=nullptr;
Node*head=nullptr;

Node* create()
{
    Node* newNode= new Node();
    newNode->next= nullptr;
    return newNode;
}

void print()
{
    curr = head;
    while(curr!= nullptr)
    {
        cout<<curr->data<<endl;
        curr = curr->next;
    }


}
int main()
{
    for(int i=1; i<=5; i++)
    {
        if(head==nullptr)
        {
            head = create();
            head->data = i;
            curr = head;
        }
        else
        {
            curr->next=create();
            curr = curr->next;
            curr->data = i;
        }
    }
    print();
}