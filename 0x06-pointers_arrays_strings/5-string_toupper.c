#include "main.h"

/**
 * *string_toupper - Changes alphabet to uppercase
 * @a: the object
 * Return: 0
 */

char *string_toupper(char *a)
{
int b;
for (b = 0; a[b] != '\0'; b++)
{
if (a[b] >= 'a' && a[b] <= 'z')
{
a[b] = a[b] - 'a' + 'A';
}
}
return (a);
}
