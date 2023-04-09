#include "main.h"

/**
 * *_strchr - locate a string character
 * @s: thr string
 * @c: the character
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
for (; *s != '\0'; s++)
{
if (*s == c)
return (s);
}
return (0);
}
