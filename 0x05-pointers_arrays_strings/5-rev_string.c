#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer that stores a character
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int i, store;
	int j = 0;

	while (*(s + j) != '\0')
	{
		j++;
	}

	j--;
	i = 0;
	while (j > i)
	{
		store = s[i];
		s[i] = s[j];
		s[j] = store;
		i++;
		j--;
	}

}


