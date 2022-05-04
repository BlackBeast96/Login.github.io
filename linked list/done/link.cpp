#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insert(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;
    if (head == NULL)
    {
        head = n;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void traverse(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

node* reverse(node* head){
    node* prevp=NULL;
    node* cur=head;
    node* nextp;
    while(cur!=NULL){
        nextp=cur->next;
        cur->next=prevp;

        prevp=cur;
        cur=nextp;
    }
    return prevp;
}
void cycle(node* &head,int val){
    node* temp=head;
    node* start;
    while(temp->next!=NULL){
        if(temp->next)
        temp=temp->next;
    }
}
int main()
{
    node* head=NULL;
    insert(head,6);
    insert(head,6);
    insert(head,6);
    cycles(head,10);
    traverse(head);
    
}