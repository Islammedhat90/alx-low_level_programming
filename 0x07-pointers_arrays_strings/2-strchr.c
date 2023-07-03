#include "main.h"
#include "strlen.c"
/**
 * _strchr - function that locates a character in a string
 *@s: string
 *@c: second value - char
 *
 * Return: char with result
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == '\0' || c == '\0')
		return (s);
	return ('\0');
}
