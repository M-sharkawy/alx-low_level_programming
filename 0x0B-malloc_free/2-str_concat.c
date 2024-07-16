#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatonate 2 strings in new memory location
 *
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: pointer for 2 concatonated strings.
*/

char *str_concat(char *s1, char *s2)
{
	int n1, n2, lenght;
	int i;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}

	n1 = strlen(s1);
	n2 = strlen(s2);
	lenght = n1 + n2 + 1;

	ptr = (char *)malloc(lenght * sizeof(char));

	if (ptr == NULL)
	{
	return (NULL);
	}

	for (i = 0; i <= n1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i <= n2; i++)
	{
		ptr[n1 + i] = s2[i];
	}

	ptr[n1 + n2] = '\0';

	return (ptr);
}
