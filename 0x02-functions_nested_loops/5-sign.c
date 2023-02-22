#include "main.h"
/**
*print_sign - check whether input is positive or negative or zero
*@n: it is an integer
*Description: check whether input is positive or negative or zero
*Return: 0
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar(0 + '0');
return (0);
}
return (0);
}
