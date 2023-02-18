#include <stdio.h>
/**
*main - Entry point
*Description: 'outputs a sentence with puts'
*Return: Always 0 (Success)
*/
int main(void)
{
char n = 'a';
char c = 'A';
while (n <= 'z')
{
putchar(n);
n++;
}
while (c <= 'Z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
