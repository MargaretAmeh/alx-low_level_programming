#include "main.h"

/**
 * _strcpy -Copiar el contenido de uno o otra  variable
 * @dest: This is destiny
 * @src: This is copiar
 *
 * Return:  This return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
