#include "main.h"
/**
 * _isalpha - checks for lowercase and uppercase character
 * @c: character to test
 * Return: 1 if intended outcome
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
