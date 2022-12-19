#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 *
 * @s: This is the input string
 *
 * Return: Length of a string
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' ; index++)
		;
	return (index);
}
