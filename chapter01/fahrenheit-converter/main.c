#include <stdio.h>

#define	LOWER	0
#define	UPPER	300
#define	STEP	10

double fahrtocelsius(int fahr);

int main()
{
	// double fahr, celsius;
	int fahr = 0;

	printf("%3s\t%2s\n", "f", "c");
	// for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
	{
		printf("%3d %6.1f\n", fahr, fahrtocelsius(fahr));
	}

	return 0;
}

double fahrtocelsius(int fahr)
{
	return ((5.0/9.0) * (fahr - 32));
}
