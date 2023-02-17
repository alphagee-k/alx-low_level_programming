#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';

		while (ch <= 'z')
		{
			if (ch != 'e' && ch != 'q')
			{
				putchar(ch);
			}
		}
	putchar('\n');
	return (0);
}
