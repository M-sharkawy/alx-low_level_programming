#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string input
*/

void rev_string(char *s)
{
	int l, i;
	char c;

	for (l = 0; s[l] != '\0'; ++l)
		;

	for (i = 0; i < l / 2; ++i)
	{
		c = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = c;
	}

}
