#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - prints buffer
 * @b: the dereferenced in
 * @size: the int size
 * Returns: 0
 */

void print_buffer(char *b, int size)
{
int a, c;
for (a = 0; a < size; a += 10)
{
printf("%08x: ", a);
for (c = 0; c < 10; c++)
{
if (a + c < size)
printf("%02x", b[a + c]);
else
printf("   ");
}
for (c = 0; c < 10; c++)
{
if (a + c < size)
putchar(isprint(b[a + c]) ? b[a + c] : '.');
else
break;
}
putchar('\n');
}
if (size <= 0)
putchar('\n');
}
