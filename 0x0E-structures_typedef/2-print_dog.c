#include "dog.h"
#include <stdio.h>
/**
*print_dog - a function that prints a struct dog
*@d: pointer to the structure
*/
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
if (d->name == NULL)
{
printf(d->name, ": nil");
}
else if (d->owner == NULL)
{
printf(d->owner, ": nil");
}
else if (d->age < 0)
{
printf("Age: nil\n");
}
else
{
printf("Name: %s\n", d->name);
printf("Age: %.1f\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
