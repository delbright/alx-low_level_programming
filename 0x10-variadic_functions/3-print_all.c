#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints all the given strings.
 * @format: the kind of format c for char s for string i for int f for
 * float.
 * Return: a string with tha arguments.
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str;
	va_list ap;

	va_start(ap, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%i", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			str = va_arg(ap, char *);
			if (str)
			{
				printf("%s", str);
				break;
			}
			printf("(nil)");
			break;
		default:
			i++;
			continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");

		i++;
	}
	va_end(ap);
	printf("\n");
}
