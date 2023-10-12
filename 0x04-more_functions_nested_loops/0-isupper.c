#include <main.h>

/**
 * _isupper - printing uppercase letters
 * 
 * Return 0 or 1
 */

int _isupper(int c)
{
	if(c >= 'A' && c <= 'Z')
	{
		return (1);
	else
		return (0);
	}


/**
 * main - Function that checks for uppercase character.
 *
 * Return: Always 0.
 */

int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
