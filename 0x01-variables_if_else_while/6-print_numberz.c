#include <stdio.h>
/**
*main - Entry point
*Description: 'outputs a sentence with puts'
*Return: Always 0(Success)
*/
int main(void)
{
int n;
for (n = 0 ; n < 10 ; n++)
{
putchar(48 + n);
}
putchar('\n');
return (0);
}
