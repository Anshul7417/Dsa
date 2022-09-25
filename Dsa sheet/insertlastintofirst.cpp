LinkedListNode<int>* moveToFront(LinkedListNode<int> *head) {

    /*
     Don't write main().
     Don't read input, it is passed as function argument.
     Write your code here.
    */
    if(head==NULL || head->next==NULL) return head;
    LinkedListNode<int>* temp=head;
    
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    
    LinkedListNode<int>* last=temp->next;
    temp->next=NULL;
    
    last->next=head;
    head=last;
    return head;
    
}