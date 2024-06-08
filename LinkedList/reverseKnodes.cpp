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

node* reverseK(node* &head, int k)
{
    node*prv = NULL;
    node*curr = head;
    node*next = NULL;

    int count =1;
    while(count<=k && curr!=NULL)
    {
        next=curr->next;
        curr->next =prv;
        prv = curr;
        curr = next;
        count++;
    }
    if(next!=nullptr)
    {
        head->next=reverseK(next, k);
    }
    return prv;
}

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
    
    head = reverseK(head,2);
    display(head);
}