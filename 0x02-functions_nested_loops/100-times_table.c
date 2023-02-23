#include "main.h"
/**
*print_times_table - a custom function
*@n: an integer
*Description: prints the input times table, starting with 0
*Return: Always 0
*/
void print_times_table(int n);
{
int a, b;
for (a = 0 ; a <= n ; a++)
{
for (b = 0 ; b <= n ; b++)
{
int ans = a * b;
if (b > 0)
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
