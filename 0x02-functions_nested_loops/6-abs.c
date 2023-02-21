#include "main.h"
/**
 * _abs - computes the absolute value
 * @c: The number being checked
 * Return: Absolute value or 0
 */
int _abs(int c)
{
	if (c < 0)
	{
		int absv;

		absv = c * -1;
		return (absv);
	}
	return (c);
}
