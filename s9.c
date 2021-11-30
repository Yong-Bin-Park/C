#include <stdio.h>
#include <string.h>
int pali(char *str)
{
	int i, length,equal = 0;

	length = strlen(str);
	for (i = 0;; i++)
	{
		if (i < length - i)
			if (str[i] != str[length - i - 1])
				equal++;
			else
				break;
	}
	if (equal == 0)
		printf("회문입니다.");
	else
		printf("회문이 아닙니다.");

	return 0;
}
int tolower(char *str)
{
	str = tolower(str);
}

int main()
{
	char str[30];

	printf("문자열을 입력해주세요: ");
	gets(str);
	tolower(str);
	pali(str);

	return 0;
}
