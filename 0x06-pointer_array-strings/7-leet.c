#include"main.h"
/**
 * leet - encodes a string into 1337
 * @n: pointer that stores characters
 *
 * Return: a character or a string
 */
char *leet(char *n)
{
	int i, j;
	char t[] = "aAeEoOtTlL";
	char k[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; t[j] != '\0'; j++)
		{
			if (n[i] == t[j])
			{
				n[i] = k[j];
			}
		}
	}

	return (n);
}
