#include <stdio.h>

/**
 * before - print before main
 * Return: no return.
 */

void __attribute__((constructor)) before()
{
	printf
	("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
