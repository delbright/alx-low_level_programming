#include "main.h"
/**
 * puts_half - print the second half of the string
 * @str: pointer that stores the string
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int i, j;

	i = j = 0;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i + 1) / 2;
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
