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

node* reverse(node* &head)
{
    if(head == nullptr || head->next==nullptr)
    {
        return head;
    }
    node* newHead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
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
    head = reverse(head);
    display(head);
}