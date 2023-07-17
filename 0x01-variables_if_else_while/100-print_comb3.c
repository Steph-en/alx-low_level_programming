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

	for (b = '0'; b < '9'; b++)
	{
		for (c = b + 1; c <= '9'; c++)
		{
			if (c != b)
			{
				putchar(b);
				putchar(c);
				if (b == '8' && c == '9')
				continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
