#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the node on the head of a linked list
 * @head: pointer to the head of the list
 * Return: the head node's data, or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int n;

if (head == NULL || *head == NULL)
return (0);

temp = *head;
n = temp->n;
*head = (*head)->next;
free(temp);

return (n);
}
