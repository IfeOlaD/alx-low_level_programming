#include "main.h"

/**
* _isalpha - Checks if character is upper case or lower or lower case
*
* @c: The character to check
*
* Return: 0 or 1
*/

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z') /*|| (c >= 'A' && >= 'Z'))*/
{
return (1);
}
else
{
return (0);
}
}
