#include <stdio.h>

/**
 * main - Prints 3 combination of numbers
 *
 * Return: Always (Success)
 */
int main(void)
{
	int d, i, k, j;

	for (d = 48; d <= 57; d++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (j = 48; j <= 57; j++)
				{
					if (((k + j) > (d + i) && k >= d) || d < k)
					{
						putchar(d);
						putchar(i);
						putchar(' ');
						putchar(k);
						putchar(j);

						if (d + i + k + j == 227 && d == 57)
						{
							break;
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
