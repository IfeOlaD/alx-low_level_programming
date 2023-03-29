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
int a = 0;
int b = 0;

while (dest[a] != '\0')
{
a++;
}
while (src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}

int main(void)
{
char a[100] = "Hello";
char b[100] = "World";

strcat(a, b);

printf("%s\n", a);

return (0);
}
