#include "main.h"

/**
 * puts_half - Prints string's half
 * @str: string
 * Return: 0
 */

void puts_half(char *str)
{
int len = 0;
int start;
int a;
while (str[len] != '\0')
{
len++;
}
start = (len % 2 == 0) ? len / 2 : (len - 1) / 2 + 1;
for (a = start; a < len; a++)
{
_putchar(str[a]);
}
_putchar('\n');
}
