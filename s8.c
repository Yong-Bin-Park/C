#include <stdio.h>
#include <ctype.h>
#include <string.h>

int check(char *str)
{
	if (str[strlen(str) - 1] == '.')
	{
		if (islower(str[0]))
		{
			str[0] = toupper(str[0]);
		}
	}
	else if(str[strlen(str) - 1] != '.')
	{
		if (islower(str[0]))
		{
			str[0] = toupper(str[0]);
		}
		str[strlen(str) + 1] = NULL;
		str[strlen(str)] = '.';
		
	}
}
int main()
{
	char str[30];

	printf("텍스트를 입력하시오:");
	gets(str);
	check(str);
	printf("결과 텍스트 출력:");
	puts(str);


	return 0;
}
