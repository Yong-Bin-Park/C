#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char str[30];
	int i;
	int count = 0;
	char *token;
	char *s[30];

	printf("���ڿ��� �Է��Ͻÿ�:");
	scanf("%s", str);
	
	token = strtok(str, " ");

	for (i = 0; token != NULL; i++)
	{
		s[i] = token;
		token = strtok(NULL, " ");
		count++;
	}
	printf("��� ���ڿ�:");
	for (i = count; i >=0; i--)
		printf("%s ", s[i]);
	printf("\n");
	
	return 0;
}