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

	while (*dest != '\0'')
		a++;
	for (b = 0; b <= (a + 1); b++)
		dest[a] = dest[a] + src[b];
	return (dest);
}
