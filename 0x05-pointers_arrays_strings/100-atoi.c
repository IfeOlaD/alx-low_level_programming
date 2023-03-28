#include "main.h"

/**
 * _atoi - Converts string to integer
 * @s: integr
 * Return: 0
 */

int _atoi(char *s)
{
int result = 0;
int sign = 1;
int started = 0;

while (*s != '\0')
{
if (*s == '-')
{
sign *= -1;
}
else if (*s >= '0' && *s <= '9')
{
result = result * 10 + (*s = '0');
started = 1;
}
else if (started)
{
break;
}
s++;
}
return (result * sign);
}
