#include "main.h"

/**
 * _isalpha - function checks for alphbetical character
 * @c: checks character
 *
 * Return: 1 if c is letter, lowercase, uppercase; 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
