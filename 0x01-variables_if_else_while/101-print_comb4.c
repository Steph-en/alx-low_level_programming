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
	int b, c, d;

	for (b = '0'; b < '9'; b++)
	{
		for (c = b + 1; c <= '9'; c++)
		{
			for (d = c + 1; d <= '9'; d++)
			{
				if ((c != b) != d)
				{
					putchar(b);
					putchar(c);
					putchar(d);
					if (b == '7' && c == '8')
					continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
