#include "variadic_functions.h"

/**
  * print_all - function that prints anything.
  *@format: list of types of arguments passed.
  *
  * Return: print nothing.
  */

void print_all(const char * const format, ...)
{
	va_list all;
	int i = 0;
	int check;
	char *s;

	va_start(all, format);
	while (format[i] != '\0')
	{
		check = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(all, int));
				break;
			case 'i':
				printf("%i", va_arg(all, int));
				break;
			case 'f':
				printf("%f", va_arg(all, double));
				break;
			case 's':
				s = va_arg(all, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			default:
				check++;
				break;
		}
		if (format[i + 1] != '\0' && check == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(all);
}
