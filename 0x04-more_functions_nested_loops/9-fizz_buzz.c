#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: 'print a sentence with printf'
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
for (a = 1; a <= 100; a++)
{
if (a % 3 == 0 && a % 5 == 0)
{
printf("FizzBuzz");
}
else if (a % 5 == 0)
{
printf("Buzz");
}
else if (a % 3 == 0)
{
printf("Fizz");
}
else
{
printf("%d", a);
}
if (a < 100)
printf(" ");
}
printf("\n");
return (0);
}
