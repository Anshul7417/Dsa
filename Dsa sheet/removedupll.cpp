Node *removeDuplicates(Node *head)
{
 // your code goes here
    if(head==NULL) return NULL;
    if (head->next==NULL) return head;
    
    Node*curr=head;
    while(curr!=NULL){
        if(curr->next!=NULL and curr->data==curr->next->data){
            Node*next_next=curr->next->next;
            Node*todlt=curr->next;
            delete(todlt);
            curr->next=next_next;
        }else{
            curr=curr->next;
        }
    }
    
    return head;
    
}