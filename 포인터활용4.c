#include <stdio.h>

void set_max_ptr(int m[], int size, int **pmax)
{
	int i;
	*pmax = m;
	for (i = 1; i < size; i++)
	{
		if (**pmax <= *(m + i))
			**pmax = *(m + i);
	}
	
}

int main()
{
	int m[6] = { 5, 6, 1, 3, 7, 9 };
	int *pmax;

	set_max_ptr(m, 6, &pmax);
	printf("배열 원소 중 가장 큰 값:%d\n", *pmax);

	return 0;
}