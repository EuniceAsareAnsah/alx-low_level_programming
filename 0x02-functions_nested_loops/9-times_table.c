#include "main.h"
/**
*times_tables - a custom function
*Description: prints the 9 times table, starting with 0
*Return: always 0
*/
void times_tables(void)
{
int c, d;
for (c = 0 ; c < 10 ; c++)
{
for (d = 0 ; d <= 9 ; d++)
{
int ans = c * d;
if (d > 0)
{
if (ans <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else
{
_putchar(',');
_putchar(' ');
}
}
if (ans / 10)
{
_putchar('0' + ans / 10);
_putchar('0' + ans % 10);
}
else
{
_putchar('0' + ans);
}

}
_putchar('\n');
}
}
