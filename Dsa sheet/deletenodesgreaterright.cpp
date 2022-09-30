class Solution
{
    public:
    Node *reverse(Node *head){
        Node*t1=NULL,*t2=NULL;
        while(head!=NULL){
            t2=head->next;
            head->next=t1;
            t1=head;
            head=t2;
            
        }
        
        return t1;
    }
    Node *compute(Node *head)
    {
        // your code goes here
        head=reverse(head);
        //store head node address in the temp node
        Node *temp = head;
        //run a loop till temp next is null
        while(temp!=NULL && temp->next!=NULL){
        //if temp data is greater than temp next data then delete temp next node
            if(temp->data>temp->next->data){
                temp->next = temp->next->next;
            }
            else temp = temp->next;
        }
        head = reverse(head);
        return head;
    }
    
};