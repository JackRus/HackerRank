/*
*   Author: Jack Rus 
*
*   03/2017
*/


void Print(Node *head)
{
   while (head != NULL)
    {
        printf("%i\n", head->data);
        head = head->next;
    }
}
