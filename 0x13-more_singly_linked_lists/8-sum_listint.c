#include "lists.h"

/**
 * sum_listint - returns the sum of all data in a linked list
 * @head: pointer to the head of the list
 * Return: the sum of all data, or 0 if empty
 */

int sum_listint(listint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}
