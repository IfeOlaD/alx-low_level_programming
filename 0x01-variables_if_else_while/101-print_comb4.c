#include <stdio.h>

/**
* main - entry point
*
* Return: Always 0 Success
*/

int main(void)
{
int b;
int c;
int a;
for (b = '0'; b <= '9'; b++)
{
for (c = '0'; c <= '9'; c++)
{
for (a = '0'; a <= '9'; a++)
{
putchar(b + '0');
putchar(c + '0');
putchar(a + '0');
if (b != 7 || c != 8 || a != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
return (0);
}
