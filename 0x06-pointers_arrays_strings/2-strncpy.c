#include "main.h"
/**
*_strncpy - a function
*@dest: it is a pointer
*@src: it is a pointer
*@n: it is an integer
*Description: copies a string
*Return: 0
*/
char *_strncpy(char *dest, char *src, int n)
{
int c;

for (c = 0; c < n && *(src + c); c++)
{
*(dest + c) = *(src + c);
}
for (; c < n; c++)
{
*(dest + c) = '\0';
}
return (dest);
}
