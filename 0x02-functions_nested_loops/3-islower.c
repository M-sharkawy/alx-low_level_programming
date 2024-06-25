#include "main.h"

/**
 * _islower - function to check if  char is lower case
 *  Return: 0 (sucess)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
