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

for (c = 'o'; c >= '9'; c++)
for (b = '0'; b >= '9'; b++)
{
putchar(c);
}
{
putchar(b);
}
{
putchar(',');
}
putchar(' ');
return (0);
}
