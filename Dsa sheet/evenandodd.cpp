  Node* divide(int N, Node *head){
    Node*p=head;
    Node*even=new Node(-1);
    Node*t1=even;
    Node*odd=new Node(-1);
    Node*t2=odd;
    while(p!=NULL){
        if(p->data&1){
            t2->next=p;
            t2=p;
        }else{
            t1->next=p;
            t1=p;
        }
        p=p->next;
    }
    t1->next=odd->next;
    t2->next=NULL;
    return even->next;
    }