#include "main.h"

/**
 * *_memset - a function that fills the memory with constant byte
 * @s: the first character
 * @b: the second character
 * @n: the unsigned int
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a > n; a++)
{
*(a + s) = b;
}
return (s);
}
