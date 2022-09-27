//   Node* segregate(Node *head) {
//   int zero=0,one=0,two=0;
//         Node* temp=head;
//         while(temp!=NULL){
//             if(temp->data==0){
//                 zero++;
//             }

//             else if(temp->data==1){
//                 one++;
//             }

//             else if(temp->data==2){
//                 two++;
//             }

//             temp=temp->next;
//         }
//         temp=head;
//         while(zero!=0){
//             temp->data=0;
//             temp=temp->next;
//             zero--;
//         }
        
//         while(one!=0){
//             temp->data=1;
//             temp=temp->next;
//             one--;
//         }

//         while(two!=0){
//             temp->data=2;
//             temp=temp->next;
//             two--;
//         }

//         return head;
//     }
// };


void insertAtTail(Node* &temp,Node* curr){
        temp->next=curr;
        temp=curr;
    }

Node* sortList(Node *head)
{
    // Write your code here.
    if(head==NULL) return head;
        
        // Add code here
        Node* zerohead=new Node(-1);
        Node* zerotail=zerohead;
        
        Node* onehead=new Node(-1);
        Node* onetail=onehead;
        
        Node* twohead=new Node(-1);
        Node* twotail=twohead;
        
        Node* curr=head;
        while(curr!=NULL){
            int value=curr->data;
            
            if(value==0){
                insertAtTail(zerotail,curr);
            }else if(value==1){
                insertAtTail(onetail,curr);
            }else{
                insertAtTail(twotail,curr);
            }
            
            curr=curr->next;
        }
        
        // merging 
        
        if(onehead->next!=NULL){
            zerotail->next=onehead->next;
            
        }else{
            zerotail->next=twohead->next;
        }
        
        onetail->next=twohead->next;
        twotail->next=NULL;
        
        head=zerohead->next;
        
        delete(zerohead);
        delete(onehead);
        delete(twohead);
        
        return head;
        

}
