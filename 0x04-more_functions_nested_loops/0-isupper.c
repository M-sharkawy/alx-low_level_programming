#include "main.h"

/**
 * _isupper - show the upper cae letters
 *
 * @c: input integer
 *
 * Return: 1 if its uppercase and 0 is not
*/

int _isupper(int c)
{
	if ( c >= 65 && c <= 90 )
		return (1);
	else
		return(0);
}
