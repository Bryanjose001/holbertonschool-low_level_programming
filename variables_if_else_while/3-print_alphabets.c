#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low;
	char i;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}


putchar('\n');
return (0);
}
