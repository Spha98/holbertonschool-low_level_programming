#include "main.h"

/**
 * _puts_recursion - Print a string by a new line
 * @s: the string to project
 *
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_put_recursion(s);
}
