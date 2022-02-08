#include "main.h"

/**
 *main - Prints the putchar
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i;
	char p[] = "_putchar";
	/*method*/
	for (i = 0; i < 8; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
	return (0);
}
