#include <stdio.h>
/**
 * main - Entry point
 * while - loop
 * putchar -Print character on the screen
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l = 'a';
	char u = 'A';

	while (l <= 'z')
	{
		putchar(l);
		++l;
	}
	while (u <= 'Z')
	{
		putchar(u);
		++u;
	}
	putchar('\n');
	return (0);
}
