#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random password generator for 101-crackme
 *
 * Return: always 0
 */
int main(void)
{
	int i, j, k, s;
	char arr1[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arr2[1000];

	srand(time(NULL));
	while (s != 2772)
	{
		i = k = s = 0;
		while ((2772 - 122) > s)
		{
			j = rand() % 62;
			arr2[i] = arr1[j];
			s += arr1[j];
			i++;
		}
		while (arr1[k])
		{
			if (arr1[k] == (2772 - s))
			{
				arr2[i] = arr1[k];
				s += arr1[k];
				i++;
				break;
			}
			k++;
		}
	}
	arr2[i] = '\0';
	printf("%s", arr2);
	return (0);
}
