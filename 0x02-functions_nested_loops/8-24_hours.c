#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints all minutes of 24 hours
 * 
 *
 * Return: Always 0
 */

void jack_bauer(void)
{
int h;
int m;
for (h = 00; h < 24; h++)
{
for (m = 00; m < 60; m++)
{
printf("%02d:%02d\n", h, m);
}
}
}
