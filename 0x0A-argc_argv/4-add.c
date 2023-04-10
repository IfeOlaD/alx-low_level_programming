#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print the addition of positive numbers
 * @argc: the argument count
 * @argv: the argument vector/value
 * Return: 0 or 1
 */

int main(int argc, char **argv)
{
int a, b, sum = 0;
for (a = 1; a < argc; a++)
{
for (b = 0; argv[a][b]; b++)
if (!isdigit(argv[a][b]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[a]);
}
printf("%d\n", sum);
return (0);
}
