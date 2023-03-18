#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 Success
*/

int main(void)
{
int c;
int b;

for (c = 'o'; c <= '9'; c++)
{
for (b = '0'; b <= '9'; b++)
{
putchar(b);
if (b != 9 || c != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
