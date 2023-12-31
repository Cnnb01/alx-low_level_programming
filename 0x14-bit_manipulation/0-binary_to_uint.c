#include "main.h"
#include <math.h>
/**
*binary_to_uint - Convert a binary string to an unsigned integer.
*@b: A pointer to a string containing a binary number.
* Return: The converted unsigned integer.
*/
unsigned int binary_to_uint(const char *b)
{
int len, i, n;
unsigned int d = 0;
if (b == NULL)
{
return (0);
}
len = strlen(b);
for (i = 0; i < len; i++)
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
n = 1 << (len - 1 - i);
d = d + (b[i] - '0') * n;/*conversion of char to digit by sub the ascii val*/
}
return (d);
}
