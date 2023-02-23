#include "main.h"
/**
*times_table - a custom function
*Description: prints the 9 times table, starting with 0
*Return: always 0
*/
void times_table(void)
{
int a, b;
for (a = 0 ; a < 10 ; a++)
{
for (b = 0 ; b <= 9 ; b++)
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
