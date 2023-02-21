#include "main.h"
/**
 * print_alphabet_x10 - Print alphabet x10
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c = 'a', l;


	while (c <= 'z')
	{
		l = 0;
		while (l < 10)
		{
			_putchar('\n');
		}
		_putchar(c);
	}
}
