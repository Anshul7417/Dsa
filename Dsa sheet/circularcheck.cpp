bool isCircular(Node *head)
{
   // Your code here
   if(head==NULL) return 1;
    
    Node*ptr=head;
    
    do{
        ptr=ptr->next;
        if(ptr==NULL) return 0;
    }while(ptr!=head);
    
    return 1;
}