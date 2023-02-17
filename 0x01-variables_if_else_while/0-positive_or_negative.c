#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("n is bigger than 0\n");
	}
	else if (n == 0)
	{
		printf("n is equal to 0\n");
	}
	else
	{
		printf("n is smaller than 0\n");
	}
	return (0);
}
