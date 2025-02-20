#include "main.h"
/**
 * _islower - lowercase character
 * @c: variable given
 * Return: 1 if character is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	return (0);
}
