#include <stdio.h>

/**
 * main - prints to the standard error
 * Return: one
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful						\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
