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

	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets(str);

	printf("������ �� ���ڸ� �Է��Ͻÿ�:");
	scanf("%c", &ctr);

	printf("%c�� ����: %d", ctr, str_chr(str, ctr));

	return 0;
}

