/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    Node *tempA , *tempB;
    int length1 = 0, length2 = 0;
    tempA = headA;
    while(tempA != NULL)
    {
        tempA = tempA->next;
        length1++;
    }
    tempB = headB;
    while(tempB != NULL)
    {
        tempB = tempB->next;
        length2++;
    }
    int diff;
    tempA = headA;
    tempB = headB;
    if(length1 > length2)
    {
        diff = length1 - length2;
        while(diff > 0)
        {
            tempA = tempA -> next;
            diff--;
        }
    }
    else
    {
        diff = length2 - length1;
        while(diff > 0)
        {
            tempB = tempB -> next;
            diff--;
        }
    }
    while(tempA->data != tempB->data)
    {
        tempA = tempA -> next;
        tempB = tempB -> next;
    }
    return (tempA->data);
}
