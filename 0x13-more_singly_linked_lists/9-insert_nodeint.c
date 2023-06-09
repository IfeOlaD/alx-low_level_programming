#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node int at a given position
 * @head: pointer to the head of the list
 * @idx: index where the node will be added
 * @n: data for the new node
 * Return: the address of the node, or NULL if if fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp;
unsigned int a;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

temp = *head;
for (a = 0; a < idx - 1 && temp != NULL; a++)
temp = temp->next;

if (temp == NULL)
{
free(new_node);
return (NULL);
}

new_node->next = temp->next;
temp->next = new_node;

return (new_node);
}
