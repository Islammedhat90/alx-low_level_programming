#include <stdio.h>
/*
 * main - program that prints exactly and that piece of art is useful
 *
 * Return: 0 (success)
 */
int main(void)
{
	char sentence[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int size = sizeof(sentence);

	for (int i = 0; i < size; i++)
	{
		putchar(str[i]);
	}
	putchar('\n);
	return (0);
}
