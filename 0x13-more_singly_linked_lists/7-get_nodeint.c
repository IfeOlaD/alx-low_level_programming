#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth number of a linked list
 * @head: the pointer to the head of the list
 * @index: index of the node to return
 * Return: the nth node of the list, or NULL if it doesn't exits
 */

listint_t get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int a;

for (a = 0; a < index; && head != NULL; a++)
head = head->next;

return (head);
}
