#include "main.h"
#include <stdio.h>

/**
 * _strchr - locate a string character
 * @s: the string
 * @c: the character
 * Return: c
 */

char *_strchr(char *s, char c)
{
for (; *s != '\0'; s++)
{
if (*s == c)
return (s);
}
return (NULL);
}
