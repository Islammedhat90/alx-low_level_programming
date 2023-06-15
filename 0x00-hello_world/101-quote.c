#include <stdio.h>
/**
 * main - program that prints exactly and that piece of art is useful
 *
 * Description: print a quote using a for loop and function putchar
 * Return: 1 (success)
 */
int main(void)
{
	char sentence[] =
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int size = sizeof(sentence);
	int i;
for (i = 0; i < size - 1; i++)
{
	putchar(sentence[i]);
}
putchar('\n');
return (1);
}
