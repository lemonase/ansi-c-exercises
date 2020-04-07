#include <stdio.h>

int power(int n, int m);

int main()
{
	printf("%s %s %s\n", "i", "pow2", "pow3");
	for (int i = 0; i < 100; i++)
		printf("%1d %3d %3d\n", i, power(2, i), power(-3, i));

	return 0;
}

int power(int base, int n)
{
	int result;
	result = 1;

	for (int i = 1; i <= n; i++)
		result = result * base;

	return result;
}

