#include <stdio.h>
int main(void)

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
{
printf("Size of a char: %lu byte(s)", sizeof(char));
printf("Size of an int: %lu  byte(s)", sizeof(int));
printf("Size of a long int: %lu byte(s)", sizeof(unsigned int));
printf("Size of a long long int: %lu  byte(s)", sizeof(long));
printf("Size of a float: %lu byte(s)", sizeof(float));
return(0);
}