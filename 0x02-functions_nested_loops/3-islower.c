#include "holberton.h"

/**
 * _islower - checks if character is lower case
 *
 * Return: 1 (Sucess)
 */
int _islower(int c)
{
	int c;

	if (c > 96 && c < 123)
	{
		return (1);
	}
	return (0);
}
