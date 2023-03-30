#include "main.h"

/**
 * strcmp - Compares strings
 * @s1: the first string
 * @s2: second string
 * Return: s1 - s2
 */

int strcmp(char *s1, char *s2)
{
int a;
for (a = 0; s1[a] != '\0' && s2[a] != '\0' && s1[a] == s2[a]; a++)
;
return (s1[a] - s2[a]);
}
