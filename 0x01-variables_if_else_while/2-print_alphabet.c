#include <stdio.h>
/**
*main - Entry point
*Description: 'outputs a sentence with puts'
*Return: Always 0(Success)
*/
int main(void)
{
char n = 'a';
while (n <= 'z')
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
