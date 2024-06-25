#include "main.h"

/**
 * _islower - function to check if  char is lower or upper case
 *
 * @c: check input of a function
 *
 * Return: 1 if c is lower or upper case otherwise 0 (sucess)
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c = 122)
		return (1);
	return (0);
}
