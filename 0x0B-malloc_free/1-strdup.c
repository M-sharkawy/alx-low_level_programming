#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - duplicate str and return its copy as a pointer
 *
 * @str: string
 *
 * Return: string pointer
*/

char *_strdup(char *str)
{
	int i;
	char length;
	char *str2;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str);

	str2 = (char *)malloc(length + 1 * sizeof(char));

	if (str2 == 0)
	{
		return (NULL);
	}


	for (i = 0; i <= length; i++)
	{
		str2[i] = str[i];
	}

	return (str2);
}
