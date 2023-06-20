#include <unistd.h>

/**
 * _putchar - writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * Return: On success 1. On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * print_alphabet - print all alphabets in lowercase
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();
	return 0;
}
