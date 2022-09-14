#include <stdio.h>
/**
 * main - Entry point
 * while - Loop
 * putchar - Print character on the screen
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char u = 'a';

	while (u <= 'z')
	{
		if (u == 'e')
		{
			continue;
		}
		putchar(u);
		++u;
		
	}
	putchar('\n');
	return (0);
}
