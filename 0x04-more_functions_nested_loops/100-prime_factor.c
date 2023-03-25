#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
long n = 612852475143;
long b = -1;
int a;

while (n % 2 == 0)
{
b = 2;
n /= 2;
}

for (a = 3; a <= sqrt(n); a += 2)
{

while (n % a == 0)
{
b = a;
n /= a;
}
}
if (n > 2)
b = n;
printf("%ld\n", b);

return (0);
}
