#include"main.h"
#include <stdio.h>

/**
 * main - print numbers 1 - 100 followed by a new line
 * 
 * Description: numbers that are multiples of 3 = Fizz
 * numbers that are multiples of 5 = Buzz
 * numbers that are multiples of 3 n 5 = FizzBuzz
 * each number and word to be separated by space
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && !(n % 5 == 0))
			printf("Fizz");
		else if (n % 5 == 0 && !(n % 3 == 0))
			printf("Buzz");
		else if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", n);

		if (n != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
