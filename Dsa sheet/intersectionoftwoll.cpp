void insertAtTail(Node*&tail,int data1){
    Node*temp=new Node(data1);
    tail->next=temp;
    tail=temp;
}

Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    
    Node* tem=new Node(-1);
    Node* tail=tem;
    Node*a=head1;
    Node*b=head2;
   
    while(a!=NULL && b!=NULL){
        if(a->data<b->data){
            a=a->next;
        }else if(a->data>b->data){
             b=b->next;
        }else{
            insertAtTail(tail, a->data);
            a= a->next;
            b= b->next;
        }
        
        
       
    }
    
    tail->next=NULL;
    Node*p= tem->next; 
    delete(tem);
    return p;
}