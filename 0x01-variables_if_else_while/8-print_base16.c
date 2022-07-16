#include <stdio.h>
/**
 * main - Prints all the hexadecimal numbers in low case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num = 0;
char letter = 'a';

while (num <= 9)
{
	putchar((num % 10) + '0');
	num++;
}
while (letter <= 'f')
{
	putchar(letter);
	letter++;
}
putchar('\n');
return (0);
}
