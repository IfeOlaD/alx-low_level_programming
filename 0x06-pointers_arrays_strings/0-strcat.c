#include "main.h"
#include <stdio.h>

/**
 * *_strcat - Contatenates 2 strings
 * @dest: the destination
 * @src: the source
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
int a = 0;
int b = 0;

for (a = 0; dest[a] != '\0'; a++)
;
for (b = 0; src[b] != '\0'; b++)
dest[a + b] = src[b];
dest[a + b] = '\0';
return (dest);
}
