#include "main.h"

/**
 * _isdigit - check if numbers are 0 - 9
 * @h: char to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int h)
{
	if (h >= '0' && h <= '9')
		return (1);
	else
		return (0);
}
