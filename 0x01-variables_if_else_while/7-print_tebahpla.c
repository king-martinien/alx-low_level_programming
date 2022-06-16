#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char first_letter = 'z';

	while (first_letter >= 'a')
	{
		putchar(first_letter);
		first_letter--;
	}
	putchar('\n');
	return (0);
}
