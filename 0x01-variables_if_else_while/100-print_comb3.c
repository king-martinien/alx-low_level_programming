#include <stdio.h>

/**
 * main - print 00 to 99, but only unique combinations
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int start_number = 0;

	for (i = '0'; i <= '8'; i++)
	{
		for (j = '1' + start_number; j <= '9'; j++)
		{
			if (i == j)
				continue;

			putchar(i);
			putchar(j);
			if (!(i == '8' && j == '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
		start_number++;
	}
	putchar('\n');
	return (0);
}
