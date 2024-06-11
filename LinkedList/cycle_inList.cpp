// Floyd's algorithm
// Tortorise and hare algorithm
// One slow and one fast pointer

#include <iostream>
using namespace std;


class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data = val;
        next = nullptr;
    }
};


void insert(node* &head, int data);
void display(node* head);
void makeCycle(node* head, int pos);
bool detectCycle(node* head);
void removeCycle(node*&head);

int main()
{
    node *head =nullptr;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);
    display(head);
    detectCycle(head);
    makeCycle(head,2);
    detectCycle(head);
    removeCycle(head);
    detectCycle(head);
    display(head);
    
}

void insert(node* &head, int data)
{
    node* temp = new node(data);
    if(head==nullptr)
    {
        head = temp;
        return;
    }
    node* curr = head;
    while(curr->next!=nullptr)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return;
}

void display(node* head)
{
    node*curr = head;
    while(curr!=nullptr)
    {
        cout<<curr->data<<"->";
        curr=curr->next;
    }
    cout<<"NULL"<<endl;
}


bool detectCycle(node* head)
{
    node* slow=head;
    node* fast=head;

    while(fast!=nullptr && fast->next!=nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(fast == slow)
        {
            cout<<"Cycle Present\n";
            return true;
        }
    }
    cout<<"Cycle not present\n";
    return false;
}

void makeCycle(node* head, int pos)
{
    node* temp = head;
    node*posNode;
    int count =1 ;
    while(temp->next!=nullptr)
    {
        if(count == pos)
        {
            posNode = temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next = posNode;
    cout<<"     ADDED CYCLE\n";
}

void removeCycle(node*&head)
{
    node*slow=head;
    node*fast=head;
    
    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while(slow!=fast);

    fast = head;

    while(slow->next!=fast->next)
    {
        slow=slow->next;
        fast = fast->next;
    }
    slow->next = nullptr;
    cout<<"     REMOVED CYCLE\n";
    
}