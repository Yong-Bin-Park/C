#include <stdio.h>
#include <string.h>
int str_chr(char *s, int c)
{
	int i, count = 0;

	for (i = 0; i<(int)strlen(s); i++);
	{
		if (s[i] == c)
			count++;
	}
	return count;
}

int main()
{
	char str[20];
	char ctr;

	printf("문자열을 입력하시오: ");
	gets(str);

	printf("개수를 셀 문자를 입력하시오:");
	scanf("%c", &ctr);

	printf("%c의 개수: %d", ctr, str_chr(str, ctr));

	return 0;
}

