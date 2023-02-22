#include "main.h"
/**
*_islower - checks if put is lowercase
*@c: it is an integer
*
*description: checks if parameter c is lowercase and returns 0 or 1
*Return: 0
*/
int _islower(int c)
{
char b;
for (a = 'a' ; b <= 'z' ; b++)
{
if (b == c)
{
return (1);
}
}
return (0);
}
