#include "main.h"

/**
* _islower - Checks if character is lower case
*
* @c: the character to check
*
* Return: 1 if the character is lower case, else 0
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
