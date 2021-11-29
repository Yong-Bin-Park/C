#include <stdio.h>
#include <string.h>

#define SIZE 100
void delstr(char s[])
{
	char tmp[SIZE];
	int i, k = 0;

	for (i = 0; i < (int)strlen(s); i++)
	{
		if (s[i] != ' ')
			tmp[k++] = s[i];
	}
	tmp[k] = 0;
	strcpy(s, tmp);
}

int main()
{
	char str[SIZE];

	printf("공백 문자가 있는 문자열을 입력하시오: ");
	gets(str);

	delstr(str);
	printf("%s", str);
	return 0;
}