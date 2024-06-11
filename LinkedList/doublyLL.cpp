#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node*prv;
    node*next;
    node(int val)
    {
        data = val;
        prv = nullptr;
        next = nullptr;
    }
};

void insertAtHead(node*&head, int val)
{
    if(head == nullptr)
    {
        node* temp = new node(val);
        head = temp;  
        return; 
    }
    node*temp = new node(val);
    head->prv = temp;
    temp->next = head;
    head = temp;
    return;
}
void insertAtTail(node* & head, int val)
{
    
    node * temp = new node(val);
    if(head == nullptr)
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
    temp->prv = curr;
}


void display(node*head)
{
    node * curr = head;
    while(curr!=nullptr)
    {
        cout<<curr->data<<"->";
        curr = curr->next;
    }

    cout<<"NULL"<<endl;
}

void deleteNode(node* &head, int val)
{
    if(head == nullptr)
    {
        cout<<"EMPTY LIST\n";
        return;
    }
    
    node* curr = head;
    while(curr!=nullptr &&curr->data!= val)
    {
        curr=curr->next;
    }
    if(curr == nullptr)
    {
        cout<<"Value not found\n";
        return;
    }
    if(curr == head)
    {
        if(curr->next == nullptr) // only one element
        {
            
            delete(curr);
            head = nullptr;
            return;
        }
        else
        {
            head->next->prv=nullptr;
            node*temp=head->next;
            delete(curr);
            head=temp;
            return;
        }
    }
    node* temp = curr;
    curr->next->prv = curr->prv;
    curr->prv->next = curr->next;
    delete(temp);
    return;

}
int main()
{
    
    node * head = nullptr;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    insertAtTail(head,8);
    insertAtTail(head,9);
    insertAtTail(head,10);
    display(head);
    insertAtHead(head,0);
    display(head);
    deleteNode(head, 2);
    
    display(head);
}