#include "main.h"
#include <stdio.h>

/**
 * strcmp - Compares strings
 * @s1: the first string
 * @s2: second string
 * Return: s1 - s2
 */

int strcmp(char *s1, char *s2)
{
int a;
for (; *s1 != '\0' && *s2 != '\0' && *s1 == *s2; s1++, s2++)
;
return (*s1 - *s2);
}
