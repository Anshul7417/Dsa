Node *findMiddle(Node *head) {
    // Write your code here
    Node*ptr=head;
    Node*ptr2=head;
    int len=0;
    while(ptr!=NULL){
        len++;
        ptr=ptr->next;
    }
    int index=len/2;
    int i=0;
    while(i!=index){
        ptr2=ptr2->next;
        i++;
    }
    return ptr2;