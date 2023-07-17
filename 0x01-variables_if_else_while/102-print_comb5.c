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
	int b, c;

	for (b = 0; b < 98; b++)
	{
		for (c = b + 1; c <= 99; c++)
		{
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			putchar(' ');
			putchar((c / 10) + '0');
			putchar((c % 10) + '0');
			if (b == 98 && c == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
