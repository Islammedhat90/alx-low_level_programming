#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that locates a character in a string
 *@s: string
 *@c: second value - char
 *
 * Return: char with result
 */
char *_strchr(char *s, char c)
{
	char *t = s;

	if (*s == '\0' || c == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	t = NULL;
	return (t);
}
