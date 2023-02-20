#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (j = 97 ; j <= 102 ; j++)
		putchar(j + '0');
	putchar('\n');
	return (0);
}
