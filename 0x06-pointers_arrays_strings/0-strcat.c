#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcat - Contatenates 2 strings
 * @dest: the destination
 * @src: the source
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
char a[100] = "Hello";
char b[100] = "World";

strcat(a, b);

printf("%s\n", a);

return (0);
}
