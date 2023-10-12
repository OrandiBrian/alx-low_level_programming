#include <main.h>

/**
 * _isdigit - checks if a digit is between 0 and 9
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
