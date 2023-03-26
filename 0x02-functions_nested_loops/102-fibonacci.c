#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: 0
 */

int main(void)
{
long int a = 1;
long int b = 2;
long int c;
int d;

printf("%ld, %ld", a, b);

for (d = 3; d <= 50; d++)
{
c = a + b;
printf(", %ld", c);
a = b;
b = c;
}
printf("\n");
return (0);
}
