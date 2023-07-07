#include "main.h"

/**
  * _strstr - function that locates a substring.
  *@haystack: string to look in.
  *@needle: string to look for.
  *
  * Return: pointer to the beginning or null.
  */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int n = 0;
	int len = 9;
	char *t = haystack;

	if (len == 0)
		return (haystack);

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			int x = i + 1;
			int y = j + 1;

			if (needle[i] == haystack[j])
			{
				n++;

				t = &haystack[j];

				while (needle[x] != '\0' && haystack[y] != '\0')
				{
					if (needle[x] == haystack[y])
					{
						n++;
						x++;
						y++;
					}
					else
						break;
				}
				if (n == len)
					return (t);
				n = 0;
			}

		}
	}
	return ('\0');
}
