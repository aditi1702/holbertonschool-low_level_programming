#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: input string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int x, y;
	char l;

	for (x = 0; s[x] != 0; x++)
	{

	}
	y = x;
	for (; s[x] >= 0; x--)
	{
		l = s[x];
		if (x != y)
		{
			_putchar(l);
		}
	}
	_putchar('\n');
}
