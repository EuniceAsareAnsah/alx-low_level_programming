#include "main.h"
/**
*print_alphabet_x10 - prints 10x the alphabets
*description: 'prints alphabets'
*Return: void
*/
void print_alphabet_x10(void)
{
int i;
char a = 'a';
for (i = 0 ; i < 10 ; i++)
{
for (a = 'a' ; a <= 'z' ; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
