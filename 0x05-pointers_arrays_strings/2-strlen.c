#include "main.h"

/**
 * _strlen - Entry point
 * @s: the integer
 * Return: 0
 */

int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
