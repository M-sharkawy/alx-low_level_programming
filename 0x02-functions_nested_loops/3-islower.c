#include "main.h"

/**
 * _islower - function to check if  char is lower case
 *
 * Description: c check input of a function
 *
 * Return: 1 if c is lower case otherwise 0 (sucess)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
