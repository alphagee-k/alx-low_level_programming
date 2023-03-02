#include "main.h"
/**
 * char *_strcat - function that concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
