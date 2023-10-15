#include "main.h"

/**
 * get_endianness - checks the endiannes of the system
 * Return: 0 if big endian, 1 if littl endian
 */

int get_endianness(void)
{
unsigned int x = 1;
char *c =  (char *) &x;
return (*c);
}
