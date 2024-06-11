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

int length(node* curr)
{
    int i = 0;
    while(curr!=nullptr)
    {
        i++;
        curr = curr->next;
    }
    return i;
}

void addIntersection(node* &head1, node* & head2, int k)
{
    
    int l1 = length(head1);
    int l2 = length(head2);

    node* ptr1 = nullptr;
    node* ptr2 = nullptr;
    
    if(l1 > l2)
    {
        ptr1 = head1;
        ptr2 = head2;
    } 
    else 
    {
        ptr1 = head2;
        ptr2 = head1;
    }

    while(k--)
    {
        ptr1 = ptr1->next;
    }
    
    while(ptr2->next!=nullptr)
    {
        ptr2 = ptr2->next;
    }
    ptr2->next = ptr1;
    cout<<"Intersection complete\n";

}


node* findIntersection(node*&head1, node*&head2)
{
    int l1 = length(head1);
    int l2 = length(head2);

    node* ptr1 ;
    node* ptr2 ;

    int d = 0;
    if(l1 > l2)
    {
        d = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    } 
    else{
        d = l2-l1;
        ptr1 = head2;
        ptr2 = head1;
    }

    while(d-- && ptr1->next!= nullptr)
    {
        ptr1 = ptr1->next;
    }

    while(ptr1!=nullptr && ptr2!=nullptr)
    {
        if(ptr1 == ptr2)
        {
            return ptr1;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return nullptr;

}

int main()
{
    cout<<"--------------------------------\n";
    node*head1 = nullptr;
    node*head2 = nullptr;

    insert(head1,1);
    insert(head1, 2);
    insert(head1, 3);
    insert(head1, 4);
    insert(head1, 5);
    insert(head1, 6);
    insert(head1, 7);
    insert(head1, 8);

                 
    insert(head2, 10);
    insert(head2, 20);
    insert(head2, 30);
    insert(head2, 40);
    insert(head2, 50);
    
    display(head1);
    display(head2);

    addIntersection(head1, head2, 4);

    node* interNode = findIntersection(head1, head2);

    if(interNode != nullptr)
    {
        cout<<"Intersection node's data is "<<interNode->data<<endl;
    }
    else
    {
        cout<<"No intersection\n";
    }
    
    display(head2);
    return 0;
    
}