#include "holberton.h"
/**
 * _memset - function that fills memory with a constant byte
 *@s: address to start
 *@b: character to be inserted
 *@n: n bytes
 *
 * Return: char with result of memset
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
