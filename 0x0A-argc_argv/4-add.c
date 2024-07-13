#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Entry point
 *
 * @argc: count argument
 * @argv: vector argument (array)
 *
 * Return: 0;
*/
int main(int argc, char *argv[])
{
	int sum = 0, index;

	if (argc > 1)
	{
		for (index = 1; index < argc; index++)
		{
			int jndex;
			char *str;

			str = argv[index];
			for (jndex = 0; str[jndex] != '\0'; jndex++)
			{
				if (str[jndex] < 48 || str[jndex] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (index = 1; index < argc; index++)
	{
		sum += atoi(argv[index]);
	}
	printf("%d\n", sum);
	return (0);
}
