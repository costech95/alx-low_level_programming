#include <stdio.h>

/**
  * main - Prints the numbers from 1 to 100
  * for multiples of three print Fizz instead of the number
  * for the multiples of five print Buzz.
  * return: Always 0.
  */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
		{
			if (i == 100)
			{
				printf("Buzz");
			}
			else
				printf("Buzz ");
		}
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}
