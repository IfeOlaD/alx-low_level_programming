#include "main.h"

/**
 * _strspn - returns byte
 * @s: the string
 * @accept: accept
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int c = 0;
char *p;
for (; *s; s++)
{
for (p = accept; *p; p++)
{
if (*s == *p)
break;
}
if (!*p)
break;
c++;
}
return (c);
}
