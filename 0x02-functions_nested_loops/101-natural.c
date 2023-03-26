#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: 0
 */

int main(void)
{
int a;
int b = 0;
for (a = 0; a < 1024; a += 1)
{
if (a % 3 == 0 && a % 5 == 0)
b = b + a;
printf("%d", b);
}
printf("\n");
return (0);
}
