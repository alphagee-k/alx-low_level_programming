#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 'a'; i != 'q' && i != 'e'; i < 'z'; i++)
	{
		putchar(i);
	}
	purchar('\n');
	return (0);
}
