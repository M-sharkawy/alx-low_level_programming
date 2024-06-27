#include "main.h"

/**
* _isdigit - write a function that check for a digit (0 through 9)
*
* @c: input
*
* Return:  0 if not upper case or 1 if upper case
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
