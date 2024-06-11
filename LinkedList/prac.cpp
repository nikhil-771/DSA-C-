#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node*next;
    node(int val)
    {
        data = val;
        next = nullptr;
    }
};

void insert(node*&head, int val)
{
    node* temp = new node(val);
    if(head==nullptr)
    {
        head = temp;
        return;
    }
    node*curr = head;
    while(curr->next!=nullptr)
    {
        curr = curr->next;
    }
    curr->next = temp;
}
void display (node *head)
{
    node *curr = head;
    while(curr!=nullptr)
    {
        cout<<curr->data<<"->";
        curr=curr->next;
    }
    cout<<"NULL"<<endl;
}

void addCycle(node*&head, int k)
{
    node*curr = head;
    node*temp = head;
    
    int i =0;
    while(curr->next!=nullptr)
    {
        if(i==k)
        {
            temp = curr;
        }
        i++;
    curr = curr->next;
    }
    if(temp!=nullptr)
        curr->next = temp;
    return;
}

void detectCycle(node*head)
{
    node*fast = head;
    node*slow = head;
    while(fast!=nullptr && fast->next!=nullptr)
    {
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow)
        {
            cout<<"CYCLE FOUND\n";
            return;
        }
    }
    cout<<"CYCLE NOT FOUND\n";
    return;
}

void removeCycle(node*&head)
{
    bool cycle = false;
    node*fast = head;
    node*slow = head;
    while(fast!=nullptr && fast->next!=nullptr)
    {
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow)
        {
            cycle = true;
            break;
        }
    }

    if(cycle)
    {
        cout<<"CYCLE FOUND\n";
    }
    else
    {
        cout<<"CYCLE NOT FOUND\n";
        return;
    }
    fast = head;
    while(fast->next != slow->next)
    {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = nullptr;
    cout<<"CYCLE REMOVED\n";
    return;
}

void revers(node* head)
{
    node*curr = head;
    node*next = nullptr;
    node*prv = nullptr;
    
    while(curr!=nullptr)
    {
        next = curr->next;
        curr->next= prv;
        prv = curr;
        curr = next;
    }
    cout<<"REVERSED LINKED LIST:\n";
    
    display(prv);
}
int main()
{
    node * head = nullptr;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);
    insert(head,7);
    insert(head,8);
    insert(head,9);
    insert(head,10);
    display(head);
    detectCycle(head);
    addCycle(head,4);
    detectCycle(head);
    removeCycle(head);

    display(head);
    revers(head);
    
    display(head);
}