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
	char *t = format;
	int i = 0;

	va_start(all, format);
	while (t[i] != NULL)
		if (t[i] == 'c' || t[i] == 'i' || t[i] == 'f' || t[i] == 's')
			printf("%%%c", t[i], va_arg
