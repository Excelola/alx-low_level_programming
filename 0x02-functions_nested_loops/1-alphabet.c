#include "main.h"

/**
 * print_alphabet - check description
 * Description: it prints the alphabet, in lowercase, followed by a new line
 * Return: 0
 */

void print_alphabet(void)
{
	char alpha = 'a';
	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
