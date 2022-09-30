int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node*a=head1;
    Node*b=head2;
    while(a!=b){
        if(a==NULL) a=head2;
        else a=a->next;
        
        if(b==NULL) b=head1;
        else b=b->next;
    }
    
    return a->data;
    
}