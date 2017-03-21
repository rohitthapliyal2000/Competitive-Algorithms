/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as:
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head)
{
    Node * temp1=head, *temp2=head;
    while(temp1 != NULL && temp2 != NULL)
    {
        temp1 = temp1 -> next;
        temp2 = (temp2 -> next) -> next;
        if(temp1 == temp2)
            return true;
    }
    return false;
}
