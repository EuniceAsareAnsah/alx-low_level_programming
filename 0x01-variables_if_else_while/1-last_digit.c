#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*Description: 'Check the last digit of a number'
* Return: Always 0(Success)
*/
int main(void)
{
char c[] = "Last digit of";
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n % 10 > 5)
{
printf("%s %d is %d and is greater than 5\n", c, n, (n % 10));
}
else if ((n % 10) < 6 && (n % 10) != 0)
{
printf("%s %d is %d and is less than 6 and not 0\n", c, n, (n % 10));
}
else if ((n % 10) == 0)
{
printf("%s %d is %d and is 0\n", c, n, (n % 10));
}
return (0);
}
