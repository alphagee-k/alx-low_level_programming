#include "main.h"
/**
 * char *_strncpy - function that copies a string
 * @dest: first string
 * @src: second string
 * @n: integer
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (src[a] != '\0' && (a < n))
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
