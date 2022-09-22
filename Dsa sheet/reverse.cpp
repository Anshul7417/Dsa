LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int>*t1, *t2;
    t1 = t2 = NULL;
    if (head == NULL)
    {
        return head;
    }
    else
    {
        while (head != NULL)
        {
            t2 = head->next;
            head->next = t1;
            t1 = head;
            head = t2;
        }

        head=t1;
    }

    return head;
}