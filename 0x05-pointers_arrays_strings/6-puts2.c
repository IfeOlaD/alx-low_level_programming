#include "main.h"
#include <stdio.h>

/**
 * puts2 - Print all string character
 * @str: string
 * Return: 0
 */

void puts2(char *str)
{
int len;
int a;
len = 0;
while (str[len] != '\0')
{
len++;
}
for (a = 0; a < len; a += 2)
{
putchar(str[a]);
}
putchar('\n');
}
