#include "main.h"

/**
 * *cap_string - Capilize all words of a string
 * @b: the string
 * Return: b
 */

char *cap_string(char *b)
{
int caps = 0;

for (caps = 0; b[caps] != '\0'; caps++)
{
if (b[0] >= 97 && b[0] <= 122)
{
b[0] = b[0] - 32;
}
if (b[caps] == ' ' || b[caps] == '\t' || b[caps] == '\n'
|| b[caps] == ',' || b[caps] == ';' || b[caps] == '.'
|| b[caps] == '!' || b[caps] == '?' || b[caps] == '"'
|| b[caps] == '(' || b[caps] == ')' || b[caps] == '{'
|| b[caps] == '}')
{
if (b[caps + 1] >= 97 && b[caps + 1] <= 122)
{
b[caps + 1] = b[caps + 1] - 32;
}
}
caps++;
}
return (b);
}
