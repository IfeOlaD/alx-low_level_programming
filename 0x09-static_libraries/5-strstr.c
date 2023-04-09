#include "main.h"

/**
 * *_strstr - find a substring in a string
 * @haystack: the string
 * @needle: the substring
 * Return: needle or 0
 */

char *_strstr(char *haystack, char *needle)
{
int i;
int j;

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (needle[j])
return (&haystack[i]);
}
return (0);
}
