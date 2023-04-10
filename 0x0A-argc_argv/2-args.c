#include <stdio.h>

/**
 * main - prints allarguments passed into main
 * @argc: argument count
 * @argv: argument vector/value
 * Return: 0
 */

int main(int argc, char **argv)
{
int a;
for (a = 0; a < argc; a++)
printf("%s\n", argv[a]);
return (0);
}
