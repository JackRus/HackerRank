

/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

// Short solution 1

void ReversePrint(Node *head)
{
    if (!head) return;
    ReversePrint(head->next);
    printf("%i\n", head->data);   
}


// Long solution 2

void ReversePrint(Node *head)
{
    struct Node* buffer = head;
    int count = 0;
    while (buffer != NULL)
    {
        buffer = buffer->next;
        count++;
    }
    for (int i = count; i > 0; i--)
    {
        buffer = head;
        for (int j = 1; j < i; j++)
            buffer = buffer->next;
        printf("%i\n", buffer->data);    
    }
}
