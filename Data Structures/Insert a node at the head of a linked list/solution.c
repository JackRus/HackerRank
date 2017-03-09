/*
*   Author: Jack Rus
*
*   03/2017
*/ 


/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
    struct Node* buffer = (struct Node*) malloc ( sizeof(Node));
    buffer->data = data;
    buffer->next = head;
    head = buffer;
    return head;
}
