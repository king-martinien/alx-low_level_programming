#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char first_lower_letter = 'a';
	char first_upper_letter = 'A';

	while (first_lower_letter <= 'z')
	{
		putchar(first_lower_letter);
		first_lower_letter++;
	}
	while (first_upper_letter <= 'Z')
	{
		putchar(first_upper_letter);
		first_upper_letter++;
	}
	putchar('\n');
	return (0);
}
