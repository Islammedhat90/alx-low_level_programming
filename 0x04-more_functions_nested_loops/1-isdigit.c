#include "main.h"

/**
* _isdigit - C function that checks for digits.
* @c: character to be checked
*
* Return: 1 if the character is uppercase, 0 otherwise.
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
