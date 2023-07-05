#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    n = _strlen_recursion("redder");
    printf("%d\n", n);
    n = _strlen_recursion("level");
    printf("%d\n", n);
    return (0);
}
