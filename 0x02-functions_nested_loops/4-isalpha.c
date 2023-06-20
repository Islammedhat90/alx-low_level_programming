#include <main.h>

/**
  * _isalpha - checks for alphabetic character.
  *@c: character to check.
  *
  * Return: 1 if c is alpah.
  * 0 otherwise.
  */

int _isalpha(int c)
{
	if (_islower(c) == 1)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

