#include "main.h"

/**
 * _strncpy - Copies strings
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int a;
for (a = 0; src[a] != '\0'; a++)
{
dest[a] = src[a];
}
dest[a] = '\0';
return (dest);
}
