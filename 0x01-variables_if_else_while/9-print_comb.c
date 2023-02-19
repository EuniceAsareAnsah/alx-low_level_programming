#include <stdio.h>
/**
*main - prints all combination of single digits
*Description: 'outputs a sentence with puts'
*Return: Always 0
*/
int main(void)
{
int n;
for (n = 48; n < 58; n++)
{
putchar(n);
if (n != 57)
{
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
