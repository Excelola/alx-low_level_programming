#include <stdio.h>
#include "_putchar.h"
/**
 * main - print putchar, followed by new line
 * Return: 0
 */

int main(void)
{
	char word[8] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');

	return (0);
}
