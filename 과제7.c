#include <stdio.h>


int main()
{
	char str[20];
	int i = 0;
	int count = 0;

	printf("텍스트를 입력하시오:");
	gets(str);

	while (str[i] != NULL)
	{
		i++;
		if (str[i] == ',' || str[i] == '.')
			count++;
	}
	printf("구두점의 개수는 %d입니다.\n", count);

	return 0;
}