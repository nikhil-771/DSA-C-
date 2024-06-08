#include <iostream>
using namespace std;


struct node
{

    int data;
    node* next;
};

struct node* head = nullptr;
struct node* curr = nullptr;


struct node* create(int data)
{
    struct node *newNode = new node;
    newNode->next = nullptr;
    newNode->data=data;
    return newNode;
}
void print(node* curr)
{
    if(curr==nullptr)
        return;
    cout<<curr->data<<endl;
    print(curr->next);

}
int main()
{
    for(int i = 1; i<=5; i++)
    {
        if(head==nullptr)
        {
            head=create(i);
            curr = head;
        }
        else
        {
            curr->next=create(i);
            curr=curr->next;
        }
    }
    print(head);
}