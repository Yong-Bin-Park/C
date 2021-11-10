#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char str[20];

	printf("텍스트를 입력하시오:");
	gets(str);

	if (str[strlen(str)-1] == '.')
	{
		if (islower(str[0]))
		{
			str[0] = toupper(str[0]);
			printf("결과 텍스트 출력:%s\n", str);
		}
	}
	else
	{
		if (islower(str[0]))
		{
			str[0] = toupper(str[0]);
			str[strlen(str)] = '.';
			printf("결과 텍스트 출력:%s\n", str);
		}
	}

	return 0;
}