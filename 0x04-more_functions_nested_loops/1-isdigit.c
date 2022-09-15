#include "main.h"

/* function that checks for a digit
 *
 */

int _isdigit(int c)
{
	char digit = 48;
	int isdigit = 0;

	for (; digit <= 57; digit++)
	{
		if (c == digit)
		{
			isdigit = 1;
			break;
		}
	}
	return(isdigit);
}
