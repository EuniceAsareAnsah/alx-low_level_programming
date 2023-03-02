#include "main.h"
/**
*_strncat - a function
*@dest: it is a pointer
*@src: it is a pointer
*@n: it is an integer
*Description: concatenates two strings
*Return: 0
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
{
continue;
}
for (j = 0; src[j] != '\0' && j < n; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
