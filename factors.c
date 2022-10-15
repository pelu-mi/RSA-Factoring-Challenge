#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/**
 * is_prime - Check if a number is a prime number
 * @n: number to check
 * Return: True or False
 *
bool is_prime(int n)
{
	return (true);
}
*/
//---------------------------------------------------------------
/**
 * lowest_factor - Find the lowest factor of a number
 * @n: number to check
 * Return: lowest factor of a number or the number itself
 */

long double lowest_factor(long double n)
{
	long double i;

	for (i = 2; i <= n; i++)
	{
		if (fmodl(n, i) == 0.00)
			return i;
	}
}

/**
 * main - Entry point
 * @argv - Array of input
 * @argc - number of input
 * Return - Always 0
 */
int main(int argc, char *argv[])
{
	FILE *f;
	char *filename;
	long double num[100], factor1 = 0.0, factor2 = 0.0;
	int n = 0, i = 0, j = 0;

	filename = argv[1];
	if (f = fopen(filename, "r"))
	{
		// Store data from file into array
		while (fscanf(f, "%Lf", &num[i]) != EOF)
			i++;
		fclose(f);

		// Mark end of array
		num[i] = '\0';

		//Print out all elements in array
		for (i = 0; num[i] != '\0'; i++)
		{
			factor1 = lowest_factor(num[i]);
			factor2 = num[i] / factor1;
			printf("%.0Lf=%.0Lf*%.0Lf\n", num[i], factor2, factor1);
		}

	}

	return (0);
}
