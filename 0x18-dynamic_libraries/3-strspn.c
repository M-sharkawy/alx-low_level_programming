#include <stdio.h>
#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 *
 * @s: The string that will be searched .
 * @accept: The prefix to be measured.
 *
 * Return: The number of bytes in s which
 * consist only of bytes from accept.
*/

unsigned int _strspn(char *s, char *accept)
{
	int index, jndex, mark;

	for (index = 0; s[index] != '\0'; index++)
	{
		mark = 1; /*flag status*/
		for (jndex = 0; accept[jndex] != '\0'; jndex++)
		{
			if (s[index] == accept[jndex])
			{
				mark = 0; /*success*/
				break;
			}
		}
		if (mark == 1)
			break;
	}
	return (index);
}
