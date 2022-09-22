#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
    }
    node()
    {
    }
};

node *insertAtEnd(node *head, int x)
{
    // Your code here
    node *p1 = new node(x);
    node *ptr = head;

    if (head == NULL)
    {
        head = p1;
        return head;
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    ptr->next = p1;

    return head;
}

node *inserthead(node *&ptr, node *&head)
{
    ptr->next = head;
    head = ptr;
    return head;
}

void insertany(node* &head,node*&ptr2,int x){
    int i=1;
    node*ptr=head;
    while(i!=x){
        ptr=ptr->next;
        i++;
    }

    
    ptr2->next=ptr->next;
    ptr->next=ptr2;
}

void print(node *&head)
{
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}


node* deletefront(node* head){
    node*ptr=head;
    head=head->next;
    delete(ptr);
    return head;
}

void deleteLast(node * head){
    node*ptr=head;
    node*ptr2=head->next;
    while(ptr2->next!=NULL){
        ptr2=ptr2->next;
        ptr=ptr->next;
    }
    ptr->next=NULL;
    delete(ptr2);
}

void deletepos(node *head,int pos){
    node *ptr=head;
    node*ptr2=head->next;
    int i=1;
    while(i!=pos-1){
        ptr=ptr->next;
        ptr2=ptr2->next;
        i++;
    }

    ptr->next=ptr2->next;
    delete(ptr2);
}


int main()
{
    node *n1 = new node(5);
    node *head = n1;
    node *n2 = new node(6);
    n1->next = n2;
    node *n3 = new node(7);
    n2->next = n3;
    node *n4 = new node(8);
    n3->next = n4;
    n4->next = NULL;
    node *n5 = new node(9);
    // cout<<n1->data<<" ";
    // cout<<n1->next;
    // head = inserthead(n5, head);
    print(head);
    cout<<endl;
    insertany(head,n5,2);
    print(head);
    cout<<endl;
    // head=deletefront(head);
    // deleteLast(head);
    deletepos(head,2);
    print(head);

    return 0;
}