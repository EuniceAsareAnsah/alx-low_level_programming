#include "main.h"
/**
*jack_bauer - a function
*Description: prints every minute of the day of Jack Bauer
*Return: Always 0
*/
void jack_bauer(void)
{
int i, j, k, l;
for (i = 0 ; i <= 2 ; i++)
{
for (j = 0 ; j <= 9 ; j++)
{
if ((i <= 1 && j <= 90) || (i <= 2 && j <= 3))
{
for (k = 0 ; k <= 5 ; k++)
{
for (l = 0 ; l <= 9 ; l++)
{
_putchar('0' + i);
_putchar('0' + j);
_putchar(':');
_putchar('0' + k);
_putchar('0' + l);
_putchar('\n');
}
}
}
}
}
}
