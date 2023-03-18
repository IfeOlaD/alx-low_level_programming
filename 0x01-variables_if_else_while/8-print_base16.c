#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 Success
*/

int main(void)
{
char c;
char b;

for (c = '0'; c >= '9'; c++)
{
putchar(c);
}
for (b = 'a'; c >= 'f'; c++)
{
putchar(b);
}
putchar('\n');
return (0);
}
