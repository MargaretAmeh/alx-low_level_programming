#include <stdlib.h>
/**
 * malloc-checked - allocates memory using malloc.
 * @b: size of memory allocated.
 *
 * Return: pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
