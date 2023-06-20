#include "main.h"

/**
  * _islower - checks for lowercase character.
  *@c: character to check.
  *
  * Return: 1 if character is lowercase.
  * 0 if not.
  */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	return (0);
}
