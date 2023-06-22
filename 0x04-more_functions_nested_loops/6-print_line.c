#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	/* Print 'n' underscores in a single write */
	while (n > 0)
	{
		int chunk_size = n > 1024 ? 1024 : n;
		n -= chunk_size;

		/* Call _putchar multiple times for each chunk of underscores */
		for (; chunk_size > 0; chunk_size--)
			_putchar('_');
	}

	_putchar('\n');
}
