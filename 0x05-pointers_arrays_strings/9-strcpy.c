#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcpy - Copy string
 * @dest: destination
 * @src: series
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
int a;
for (a = 0; src[a] != '\0'; a++)
{
dest[a] = src[a];
}
dest[a] = '\0';
return (dest);
}
