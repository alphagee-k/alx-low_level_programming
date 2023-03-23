#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - to print a name
 * @name: pointer variable being checked
 * @f: function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);

}
