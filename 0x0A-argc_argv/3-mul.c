#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of first two integers
 * @argc: argument count
 * @argv: argument value/vector
 * Return: Error or 1
 */

int main(int argc, char **argv)
{
int a, b;

if (argc == 3 || argc == 2)
{
printf("Error\n");
return (1);
}
else
{
b = 1;
for (a = 1; a < 3; a++)
b *= atoi(argv[a]);
printf("%d\n", b);
}
return (0);
}
