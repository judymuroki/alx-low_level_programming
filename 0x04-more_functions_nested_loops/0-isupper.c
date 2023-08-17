#include "main.h"

/**
 * _isupper - uppercase letters
 * @j: char to check
 *
 * Return: 0 or 1
 */

int _isupper(int j)
{
	if (j >= 'A' && j <= 'Z')
		return (1);
	else
		return (0);
}
