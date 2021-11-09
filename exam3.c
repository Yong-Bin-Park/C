#include <stdio.h>

int main(void)
{
	int a, i;
	
	for (a = 1; a <= 7; a++)
	{
		for (i = a; i <= 7; i++)
			printf("*");
		printf("\n");
	}

	
	return 0;
}