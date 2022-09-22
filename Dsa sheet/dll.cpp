#include<iostream>
using namespace std;


class node
{
public:
    int data;
    node *next;
    node* prev;

    node(int data)
    {
        this->data = data;
    }
    node()
    {
    }
};


    node* deletefront(node*head){
        node*ptr=head;
        head=head->next;
        head->prev=NULL;
        delete(ptr);
        return head;
    }


    node* deletelast(node*head){
        node*ptr=head;
        head=head->next;
        head->prev=NULL;
        delete(ptr);
        return head;
    }

    node* insertfront(node *&head,node*&ptr){
        ptr->next=head;
        head->prev=ptr;
        ptr->prev=NULL;
        head=ptr;
        return head;
    }

    void insertlast(node *&head,node *&n5){
        node*ptr=head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        n5->next=ptr->next;
        ptr->next=n5;
        n5->prev=ptr;
    }

    void print(node* head){
        node *ptr=head;
        while(ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
        cout<<endl;
    }

int main()
{
    node *n1 = new node(5);
    node *head = n1;
    node *n2 = new node(6);
    n1->next = n2;
    n1->prev=NULL;
    node *n3 = new node(7);
    n2->next = n3;
    n2->prev=n1;
    node *n4 = new node(8);
    n3->next = n4;
    n3->prev=n2;
    n4->next = NULL;
    n4->prev=n3;
    node *n5 = new node(9);
    print(head);
    // head=insertfront(head,n5);
    // insertlast(head,n5);
    head=deletefront(head);
    print(head);
    return 0;
}