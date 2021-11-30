#include <stdio.h>
#include <string.h>

int counter(char *str)
{
	char *token;
	int count = 1;

	token = strtok(str, " ");
	if (token)
	{
		while (token = strtok(NULL, " "))
			count++;
	}
	return count;
}

int main()
{
	char str[100];

	printf("문자열을 입력하시오:");
	gets(str);

	printf("단어의 수는 :%d", counter(str));

	return 0;
}