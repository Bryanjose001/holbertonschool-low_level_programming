#include "main.h"
/**
 * _strlen -return the lenght of a sting
 * @s: string to evaluate
 *
 *Return: thr length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
