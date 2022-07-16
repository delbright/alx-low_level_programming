#include <stdio.h>
/**
 * main - print all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int decimal = 0;

while (decimal <= 9)
{
	printf("%d", decimal);
	decimal++;
}
putchar('\n');
return (0);
}
