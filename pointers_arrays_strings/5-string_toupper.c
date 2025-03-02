#include "main.h"
/**
 *string_toupper - changes all uppercase letters
 *of a stirng to uppercase
 *@str: the string tobe changed
 *Return: a pointer to changed string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
		i++;
	}
	return (str);
}
