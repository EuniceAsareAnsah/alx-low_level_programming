#include <stdio.h>
/**
*main - Entry point
*Description: 'outputs a sentence with puts'
*Return: Always 0(Success)
*/
int main(void)
{
char n = 'z';
while (n >= 'a')
{
putchar(n);
n--;
}
putchar('\n');
return (0);
}
