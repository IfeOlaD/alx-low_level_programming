#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts string to integer
 * @s: integr
 * Return: 0
 */

int _atoi(char *s)
{
int result = 0;
int sign = 1;
int a = 0;
int b = 0;

while (s[a] != '\0' && (s[a] < '0' || s[a] > '9'))
{
if (s[a] == '-')
sign *= -1;
a++;
}
b = a;
while (s[b] != '\0' && s[b] >= '0' && s[b] <= '9')
b++;
while (a < b)
{
if (result > INT_MAX / 10 || (result == INT_MAX / 10 && s[a] - '0' > 7))
{
if (sign == 1)
return (INT_MAX);
else
return (INT_MIN);
}
result = result * 10 + s[a] - '0';
a++;
}
return (result *sign);
}
