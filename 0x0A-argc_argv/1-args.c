#include <stdio.h>

/**
 * main - print passed arguments
 * @argc: the argument count
 * @argv: the argumnet vector/value
 * Return: 0
 */

int main(int argc __attribute__((unused)), char **argv)
{
int a;
if (argc == 1)
printf("%d\n", argc - 1);
else
{
for (a = 0; *argv; a++, argv++)
;
printf("%d\n", a - 1);
}
return (0);
}
