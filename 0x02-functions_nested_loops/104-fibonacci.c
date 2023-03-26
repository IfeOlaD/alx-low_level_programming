#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
unsigned long a = 1, b = 2;

printf("%lu,%lu", a, b);
for (int i = 0; i < 96; i++)
{
unsigned long temp = b;
b = a + b;
a = temp;
printf(", %lu", b);
}
printf("\n");
return (0);
}
