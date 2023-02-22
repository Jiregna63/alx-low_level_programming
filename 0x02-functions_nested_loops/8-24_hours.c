#include "main.h"
/**
 * main - comment
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int i, j;

	i = o;
	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((0 / 10) + '0');
			_putchar((0 % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}

