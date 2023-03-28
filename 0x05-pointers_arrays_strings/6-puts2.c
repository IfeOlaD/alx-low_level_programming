#include "main.h"

/**
 * puts2 - Print all string character
 * @str: string
 * Return: 0
 */

void puts2(char *str)
{
int a;
for (a = 0; str[a] != '\0'; a += 2)
{
_putchar(str[a]);
}
_putchar('\n');
}
