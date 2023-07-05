#include "main.h"
#include "2-strlen_recursion.c"

/**
  * pali_checker - function to check each letter of palindrome.
  *@s: string to check
  *@i: first letter to check
  *@j: second letter to check
  *
  * Return: 1 if palindrome, 0 if not.
  */

int pali_checker(char *s, int i, int j)
{
	if (i == 0 && s[0] == s[j])
		return (1);
	if (s[i] == s[j])
		return (pali_checker(s, i - 1, j + 1));
	else
		return (0);
}

/**
  * is_palindrome -  function that returns if a string is a palindrome.
  *@s: string to check
  *
  * Return: 1 if palindrome, 0 if not.
  */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len % 2 == 0)
		return (pali_checker(s, (len / 2) - 1, (len / 2)));
	else
		return (pali_checker(s, (len / 2) - 1, (len / 2) + 1));
}
