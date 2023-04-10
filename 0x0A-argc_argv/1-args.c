#include <stdio.h>

/**
 * main - print passed arguments
 * @argc: the argument count
 * @argv: the argumnet vector/value
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
int a;
for (a = 1; a < argc; a++)
{
printf("%s\n", argv[1]);
}
return (0);
}
