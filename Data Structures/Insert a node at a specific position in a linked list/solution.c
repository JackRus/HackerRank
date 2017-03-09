/*
*   Author: Jack Rus  
*
*   03/2017
*/


/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{ 
    struct Node* buffer = (struct Node*)malloc(sizeof(Node));
    buffer->data = data;
    if (position == 0)
    {
        buffer->next = head;
        head = buffer;
        return buffer;
    }
    struct Node* answer = head;
    for (int i = 0; i < position - 1; i++)
        answer = answer->next;
    buffer->next = answer->next;
    answer->next = buffer;
    return head;
}
