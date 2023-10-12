#include "main.h"

/**
 * print_most_numbers - print 0-9
 * Return: void
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c < 10; c++)
	{
		if(!(c == '2' || c == '4'))
			_putchar(c);
	}
	_putchar('\n');
}
