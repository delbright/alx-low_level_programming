#include "main.h"
/**
 * print_rev - prints a string followed by a new line
 * @s: pointer that stores a string
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int count, num;

	num = 0;
	while (s[num] != 0)
		num++;
	for (count = num - 1; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
