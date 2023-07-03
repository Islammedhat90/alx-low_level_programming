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
	int i = 0;
	int len = _strlen(s);

	if (*s == '\0' || c == '\0')
		return (s);
	while (i < len)
	{
		if (*s == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
