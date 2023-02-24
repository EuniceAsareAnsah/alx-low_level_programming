#include "main.h"
/**
 * print_number - prints a number
 * @n: it is an integer
 *
 * Description: prints n number with putchar
 * Return: 0
 */
void print_number(int n)
{
unsigned int a = n;
if (n < 0)
{
_putchar('-');
a = -a;
}
if (a / 10)
print_number(a / 10);
_putchar('0' + a % 10);
}
