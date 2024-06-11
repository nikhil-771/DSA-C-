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



void insert(node*&head,int val);
void display(node* head);
void merge(node*link1, node*link2, node*&link3);

int main()
{
    node*list1=nullptr;
    node*list2=nullptr;
    node*list3=nullptr;
    
    
    insert(list1, 1);
    insert(list1, 4);
    insert(list1, 6);
    insert(list1, 12);
    insert(list1, 19);
    insert(list1, 20);
    insert(list1, 25);
    insert(list1, 34);

                 
    insert(list2, 2);
    insert(list2, 3);
    insert(list2, 21);
    insert(list2, 26);
    insert(list2, 26);
    cout<<"__________________________________________________\n";
    merge(list1, list2, list3);
    display(list3);
    

}

void merge(node* lin1, node*lin2, node*&link3)
{
    node* curr = link3;
    
    node * temp = nullptr;
    
    while(lin1!=nullptr && lin2!=nullptr)
    {
        if(lin1->data < lin2->data)
        {
            if(curr== nullptr)
            {
                link3 =curr = new node(lin1->data);
            }
            else
            {
                curr->next = new node(lin1->data);
                
                curr = curr->next; 
            }
            
            lin1=lin1->next;

        }
        else
        {
            if(curr == nullptr)
            {
                link3 = curr = new node(lin2->data);
            }
            else
            {
                curr->next = new node(lin2->data);
                curr = curr->next; 
            }
            
                lin2=lin2->next;
        }
        
    }

    
    while(lin1!=nullptr)
    {
        curr->next = new node(lin1->data);
        lin1 = lin1->next;
        curr = curr->next;
    }

    
    while(lin2!=nullptr)
    {
        curr->next = new node(lin2->data);
        lin2 = lin2->next;
        curr = curr->next;
    }

    if(curr!=nullptr) // ensures last node  points to null
    {
        curr->next = nullptr;
    }
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

void insert(node*&head,int val)
{
    node * n = new node(val);
    if(head == nullptr)
    {
        head = n;
        return;
    }
    node * curr = head;
    while(curr->next!= nullptr)
    {
        curr=curr->next;
    }
    curr->next = n;
}

