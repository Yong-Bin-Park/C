#include <stdio.h>
#include <string.h>

void sort_strings(char *[], int size);


int main()
{
	char* arr[5] = { "A",
	"H",
	"D",
	"W",
	"B" };
	int i;
	
	printf("==정렬 전==\n");
	for (i = 0; i < 5; i++)
	{
		puts(arr[i]);
	}
	sort_strings(arr, 5);
	printf("==정렬 후==\n");
	for (i = 0; i < 5; i++)
	{
		puts(arr[i]);
	}
	return 0;
}
void sort_strings(char *arr[5], int size)
{
	char *str;
	int m, i = 0;
	int j ;

	while (i < size)
	{
		i++;
		m = i;
		str = *(arr + i);
		for (j = i + 1; j<size; j++)
		{
			if (strcmp(*(arr + m), *(arr + j)) > 0)
			{
				str = *(arr + j);
				m = j;
			}
		}
		*(arr + m) = *(arr + i);
		*(arr + i) = str;
	}
}