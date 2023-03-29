#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generates password
 * Return: 0
 */

int main(void)
{
int a;
char password[100];
int sum = 0;
int target_sum = 2772;

srand(time(NULL));

for (a = 0; a < 100; a++)
{
password[a] = rand() % 94 + 33;
sum += password[a];
if (sum >= target_sum)
break;
}
if (sum != target_sum)
{
password[a - 1] -= (sum - target_sum);
a++;
}
password[a] = '\0';

printf("%s\n", password);

return (0);
}
