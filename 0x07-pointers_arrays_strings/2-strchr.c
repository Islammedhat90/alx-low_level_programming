#include "main.h"
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
	return ('\0');
}
