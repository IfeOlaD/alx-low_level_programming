#include "main.h"

/**
 * *leet - leet 3771
 * @a: the character
 * Return: 0
 */

char *leet(char *a)
{
int c, d;
char letters[] = "aAeEoOTlL";
char numbers[] = "4300711";

for (c = 0; a[c] != '\0'; c++)
{
for (d = 0; letters[d] != '\0'; d++)
{
if (a[c] == letters[d])
{
a[c] = numbers[d / 2];
}
}
}
return (a);
}
