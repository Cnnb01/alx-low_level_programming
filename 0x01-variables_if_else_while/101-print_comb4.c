#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int n, n2, n3;
for (n = 0 ; n < 10 ; n++)
{
for (n2 = n + 1 ; n2 < 10 ; n2++)
{
for (n3 = n2 + 1 ; n3 < 10 ; n3++)
{
putchar(n + '0');
putchar(n2 + '0');
putchar(n3 + '0');
if (n != 7 || n2 != 8 || n3 != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
