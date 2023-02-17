#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int n;

	char ch;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	for (ch = 'a'; ch < 'g'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
