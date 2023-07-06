#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 * @b: a binary number
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		num = (num << 1) + (*b - '0');
	}
	return (num);
}

