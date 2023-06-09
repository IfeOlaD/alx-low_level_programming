#include <stdlib.h>
#include "lists.h"

/**
 * *add_nodeint - adds a node in the beginning of a list
 * @head: the double pointer to the head of the list
 * @n: the integer to be included in the new node
 * Return: address of the new element or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = *head;
*head = new_node;

return (new_node);
}
