#include "main.h"
/**
*print_times_table - a custom function
*@c: an integer
*Description: prints the input times table, starting with 0
*Return: Always 0
*/
void print_times_table(int c)
{
int b, d;
for (b = 0 ; b <= c ; b++)
{
for (d = 0 ; d <= c ; d++)
{
int ans = b * d;
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
