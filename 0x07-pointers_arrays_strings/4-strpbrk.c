#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of characters(bytes)
 *
 * @s: string to be scanned.
 * @accept: string containing the characters to match.
 *
 * Return: pointer to the byte in (s) that matches one of the bytes in accept
 * or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int index, jndex;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (jndex = 0; accept[jndex] != '\0'; jndex++)
		{
			if (s[index] == accept[jndex])
			{
				return (s + index);
			}
		}
		s++;
	}

	return (NULL);
}
