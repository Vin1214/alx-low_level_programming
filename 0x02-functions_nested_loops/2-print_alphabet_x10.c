#include "main.h"

/**
 * print_alphabet_x10 - Make alphabet x10 times
 * Return void
 */

void print_alphabet_x10(void)

{
	int n, l;

	l = 0;

	while (l < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
		_putchar(n);
		}
		l++;
		_putchar('\n');
	}
}
