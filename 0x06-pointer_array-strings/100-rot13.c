#include"main.h"
/**
 * rot13 - encodes a string using rot13
 * @n: pointer that stores a string
 *
 * Return: a string or a character
 */
char *rot13(char *n)
{
	char arr1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arr2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int j;

	while (n[i] != '\0')
	{
		for (j = 0; j <= 51; j++)
		{
			if (n[i] == arr1[j])
			{
				n[i] = arr2[j];
				break;
			}
		}
		i++;
	}
	return (n);
}
