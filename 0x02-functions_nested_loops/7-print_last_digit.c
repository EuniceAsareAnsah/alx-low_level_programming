#include "main.h"
/**
*print_last_digit - prints the last digit of the number
*@b: it is an integer
*Description: returns the last digit of the input
*Return: 0
*/
int print_last_digit(int b)
{
if (b < 0)
{
int last = b & 10;
_putchar('0' + -last);
return (-last);
}
_putchar('0' + b & 10);
}
return (b & 10);
}
