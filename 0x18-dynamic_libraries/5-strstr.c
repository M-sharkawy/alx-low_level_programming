
/**
 * _strstr - a function that locates a substring
 *
 * @haystack: main string to be scanned.
 * @needle: subtring to be searched for in haystack string.
 *
 * Return: a pointer to the beginning
 * of the located substring or
 * NULL if substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	int index, jndex = 0, k;

	for (index = 0; haystack[index] != 0; index++)
	{
		k = index;
		for (jndex = 0; needle[jndex] != 0; )
		{
			if (haystack[k++] == needle[jndex++])
			{
				continue;
			}
			break;
		}
		if (needle[jndex] == '\0')
			return ((haystack + index));
	}
	return (0);
}
