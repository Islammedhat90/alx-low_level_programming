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
	int i = 0;
	for (i; i < size; i++)
	{
		putchar(sentence[i]);
	}
	putchar('\n);
	return (0);
}
