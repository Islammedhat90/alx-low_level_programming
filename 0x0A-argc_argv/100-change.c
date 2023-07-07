#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * coincalc - calcualtes remaining coins.
  *@pay: amount to be paid.
  *
  * Return: coins.
  */

int coincalc(int pay)
{


/**
  * main - prints the minimum number of coins to make change.
  *@argc: argument counter.
  *@argv: argument strings.
  * Return: 0 if successful.
  */

int main(__attribute__((unused))int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int pay = atoi(argv[1]);
		int coins = 0;

		while (pay != 0)
		{
			if (pay >= 25) 
			{
				pay = pay - 25;
				continue;
			}
			else if (pay >= 10)
			{
				pay = pay - 10;
				continue;
			}
			else if (pay >= 5)
			{
				pay = pay - 5;
				continue;
			}
			else if (pay >= 2)
			{

				pay = pay - 2;
				continue;
			}
			else
			{
				pay = pay - 1;
				continue;
			}
			coins++;
		}
		printf("%i\n", coins);
	}
	return (0);
}
