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

	printf("���ڿ��� �Է��Ͻÿ�:");
	gets(str);

	printf("�ܾ��� ���� :%d", counter(str));

	return 0;
}