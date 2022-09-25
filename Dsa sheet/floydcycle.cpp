Node* floydcycle(Node*head){

    if(head==NULL) return NULL;
    Node*slow=head;
    Node*first=head;
    while(slow!=NULL && fast!==NULL){
        fast=fast->next;
        if(fast!=NULL) {fast=fast->next;}
        slow=slow->next;


        if (slow==fast) {return slow;}
    }
 return NULL;
}




Node* getstartingnode(Node*head){

    if(head==NULL) {return NULL;}

    Node* intersection=floydcycle(head);

    if(intersection==NULL) {return NULL;}

    Node*slow=head;
    Node*intersection;

    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }

    return slow;

}


void removeloop(Node*head){
    if(head==NULL) {return NULL;}

    Node*startofloop=getstartingnode(head);

    if(startofloop==NULL) {return head;}
    Node*temp=startofloop;
    while(temp->next!=startofloop){
        temp=temp->next;
    }

    temp->next=NULL;

}

