#include "main.h"
/**
 * print_alphabet_x10 - Print alphabet x10
 * Return: void
 */
void print_alphabet_x10(void)
{
	char l = 0, c;


	while (l < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		l++;
	}
}
