#include "main.h"

/**
 * _strcmp - Compares strings
 * @s1: the first string
 * @s2: the second string
 * Return: s2 - s1
 */

int _strcmp(char *s1, char *s2)
{
int a;
for (; *s1 != '\0' && *s2 != '\0' && *s1 == *s2; s1++, s2++)
;
return (*s1 - *s2);
}
