#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 *print_dog - prints a struct dog.
 *@d: pointer to struct.
 *
 *Return: void.
 */
void print_do(struct dog *d)
{
	if (d == 0)
	{
		return;
	}
	else
	{
		if (d->name == NULL)
			printf("NAME: (nil)\n");
		else
			printf("NAME: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("owner: (nil\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
