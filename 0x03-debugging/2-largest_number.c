#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest of 3 integers
 * Return: 0
 */

int main(void)
{
int a;
int b;
int c; 
int largest(a, b, c);
 a = 972;
 b = -98;
 c = 0;

if (a > b && a > c)
{
largest = a;
}
else if (b > a && b > c)
{
largest = b;
}
else
{
largest = c;
}
return (largest);
}
