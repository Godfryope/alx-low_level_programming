#include "main.h"



/**
 * _isupper - A function that checks for uppercase character.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */

int _isupper(int c)

{
	char uppercase = 65;

	int isupper = 0;


	for (; uppercase <= 90; uppercase++)

	{

		if (c == uppercase)

		{

			isupper = 1;

		}	

	}

	return (isupper);

}