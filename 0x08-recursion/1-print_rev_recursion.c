#include "main.h"

/**
 * _print_rev_recursion - print reversed.
 * @s: store string.
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
