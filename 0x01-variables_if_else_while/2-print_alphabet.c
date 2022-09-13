#include <stdio.h>
/**
 * main -Entry point
 * putchar - Prints a character on the screen
 * while - loop
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		putchar(c[i]);
		++i;
	}
	putchar('\n');
	return (0);
}
