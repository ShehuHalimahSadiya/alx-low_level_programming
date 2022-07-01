#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - chrck if a random number is positive or negative
 *
 * Return: 0 if error
 */
int main(void)
{
	int n;
	int nLast;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	nLast = n % 10;

	if (nLast > 5
