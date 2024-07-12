#include "main.h"

/**
 * _strlen - returns the string lenght
 *
 * @s: string input
 *
 * Return: lenght
*/

int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; ++s)
		++n;

	return (n);
}
