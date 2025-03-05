#include "main.h"
/**
 *_strlen_recursion - returns the lenght of a string
 *@s: string to calcute the lenghth of
 *Return: lenght of a string
 */
int _strlen_recursion(char *s)
{
	int counter = 0;

	if (*s == '\0')
	{
		counter = _strlen_recursion(s + 1);
		return (counter += 1);
	}
	return (0);
}
