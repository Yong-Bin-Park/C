#include <stdio.h>

int str_chr(char *s, int c)
{
	int x = 0;
	int count = 0;

	while (s[x] != '\0')
	{
		x++;
		if (s[x] == c)
		count++;
	}
	return count;
}

int main()
{
	char str[30];
	char chr;

	printf("문자열을 입력하시오: ");
	gets(str);
	
	printf("개수를 셀 문자를 입력하시오: ");
	scanf("%c", &chr);

	printf("%c의 개수: %d", chr, str_chr(str, chr));

	return 0;
}