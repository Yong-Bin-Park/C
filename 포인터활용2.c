#include <stdio.h>

int get_sum(int m[], int size)
{
	int i;
	int sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += m[i];
	}

	return sum1;
}

int main()
{
	int m[3][6] = { {"10,10,10,10,10,10"},
	{"10,10,10,10,10,10"},
	{"10,10,10,10,10,10"} };
	int i, total=0;
	int sum[3];

	for (i = 0; i < 3; i++)
	{
		sum[i] = get_sum(m[i], 6);
		total += sum[i];
		printf("array[%d][6]의 저장된 정수들의 합:%d\n", i + 1, sum[i]);
	}
		 
	printf("배열에 저장된 정수들의 총합:%d\n", total);

	return 0;
}