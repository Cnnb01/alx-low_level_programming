#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int n, n2;
for (n = 0 ; n < 10 ; n++)
{
for (n2 = n + 1 ; n2 < 10 ; n2++)
{
putchar(n + '0');
putchar(n2 + '0');
if (n != 8 || n2 != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
