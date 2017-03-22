/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
    if(head == NULL || head -> next == NULL)
        return head;
    Node *current = head , *temp = NULL;
    Node *ahead = head -> next;
    while(head!=NULL)
    {
        head -> next = temp;
        head -> prev = ahead;
        temp = head;
        head = ahead;
        if(head == NULL)
            break;
        ahead = ahead -> next;
    }
    return temp;
}
