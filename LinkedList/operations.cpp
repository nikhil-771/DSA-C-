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

void insert(node* &head, int val)
{
    node* n = new node(val);
    
    if(head==nullptr)
    {
        head = n;
        return;
    }

    node* curr = head;
    while(curr->next!=nullptr)
    {
        curr = curr->next;
    }
    curr->next = n;
}

void display(node* head)
{
    node* curr = head;
    while(curr!=nullptr)
    {
        cout<<curr->data<<"->";
        curr = curr->next;
    }
    cout<<endl;
}

void deletion(node* &head, int val)
{
    if(head==nullptr)
        return;
    if(head->next==NULL)
    {
        delete head;
        return;
    }
    if(head->data==val)
    {
        node*temp = head;
        head = head->next;
        delete(temp);
        return;
    }
    node* curr = head;
    while(curr->next->data!=val)
    {
        curr = curr->next;
    }
    node *temp=curr->next;
    curr->next=curr->next->next;
    delete(temp);
}
int main()
{
    node *head = nullptr;
    insert(head,1);
    insert(head,2); 
    insert(head,3);
    insert(head,4);
    insert(head,5);
    display(head);
    deletion(head, 1);
    display(head);
}