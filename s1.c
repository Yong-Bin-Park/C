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

	printf("���� ���ڰ� �ִ� ���ڿ��� �Է��Ͻÿ�: ");
	gets(str);

	delstr(str);
	printf("%s", str);
	return 0;
}