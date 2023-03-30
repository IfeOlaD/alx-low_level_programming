#include "main.h"
#include <stdio.h>

/**
 * *_strncat - contatenate two strings
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
int a;
int b;
for (a = 0; dest[a] != '\0'; a++)
;
for (b = 0; b < n && src[b] != '\0'; b++)
dest[a + b] = src[b];
dest[a + b] = '\0';
return (dest);
}
