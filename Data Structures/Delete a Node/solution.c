/*
*   Author: Jakc Rus
*
*   03/2017
*/ 


/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{ 
    if (position == 0)
    {
        head = head->next;
        return head;
    }
    struct Node* answer = head;
    struct Node* buffer;
    for (int i = 0; i < position-1; i++)
        answer = answer->next;
    buffer = answer->next;
    answer->next = buffer->next;
    return head;
}
