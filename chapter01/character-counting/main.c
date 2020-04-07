#include <stdio.h>
#include <stdlib.h>

int main()
{

	printf("Hello World\n");

	int c, nl, nt, nc;
	c = 0;
	nl = 0;
	nt = 0;
	nc = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
			++nl;
		else if (c == '\t')
			++nt;
		else
			++nc;
	}

	printf("\n\n");

	printf("Characters: %d\n", nc);
	printf("New Tabs: %d\n", nt);
	printf("New Lines: %d\n", nl);
}
