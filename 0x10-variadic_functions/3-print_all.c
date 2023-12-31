#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_all - a function that prints anything.
*@format: A list of types of arguments passed to the function
*          c: char
*          i: integer
*          f: float
*          s: char * (if the string is NULL, print (nil) instead)
*          Any other char should be ignored
*/
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *separator = "";
char *arg;

va_start(args, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
break;
case 's':
{
arg = va_arg(args, char *);
if (arg == NULL)
{
printf("nil");
}
printf("%s%s", separator, arg);
break;
}
default:
i++;
continue;
}
separator = ", ";
i++;
}
printf("\n");
va_end(args);

}
