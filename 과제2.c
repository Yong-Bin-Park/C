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

	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets(str);
	
	printf("������ �� ���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &chr);

	printf("%c�� ����: %d", chr, str_chr(str, chr));

	return 0;
}