/*
*   Author: Jack Rus
*
*   03/2017
*/

/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

Node* Insert(Node *head,int data)
{
    struct Node* buffer = (struct Node*)malloc(sizeof(Node));
    buffer->data = data;
    buffer->next = NULL;
    if (!head)
        return buffer;
    struct Node* answer = head;
    while (answer)
    {
        if (answer->next  == NULL)
        {
            answer->next = buffer;
            return head;
        }
        answer = answer->next;
    }
    return head;
}
