#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenates 2 strings
 *
 * @s1: 1st string
 * @s2: 2nd string
 * @n: characters number taken from the 2nd string
 *
 * Return: pointer shall point to a newly allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int count, count1;
	int sign = n;
	char *ptr;
	int lens1, lens2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (lens1 = 0; s1[lens1] != '\0'; lens1++)
		;
	for (lens2 = 0; s2[lens2] != '\0'; lens2++)
		;

	if (sign >= lens2)
	{
		sign = lens2;
		ptr = malloc(sizeof(char) * (lens1 + lens2 + 1));
	}
	else
		ptr = malloc(sizeof(char) * (lens1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (count = 0; count < lens1; count++)
	{
		ptr[count] = s1[count];
	}
	for (count1 = 0; count1 < sign; count1++)
	{
		ptr[count++] = s2[count1];
	}
	ptr[count++] = '\0';
	return (ptr);

}
