#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - converts arguments to string
 * @ac: count
 * @av: vector
 * Return: string
 */

char *argstostr(int ac, char **av)
{
char *d_str;
int len = 0;
int a, b;
int pos = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (a = 0; a < ac; a++)
len += strlen(av[a]) + 1;

d_str = malloc((len + 1) * sizeof(char));

if (d_str == NULL)
return (NULL);

for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b] != '\0'; b++)
d_str[pos++] = av[a][b];
d_str[pos++] = '\n';
}
d_str[pos] = '\0';

return (d_str);
}
