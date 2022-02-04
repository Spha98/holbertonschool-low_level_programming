#include <stdio.h>

/**
 * main - Prints a serie of numbers with commas
 *
 * Return: Always (Success)
 */
int main(void)
{
	int b;

	for (b = '0'; b <= '9'; b++)
	{
		putchar(b);

		if (b != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
