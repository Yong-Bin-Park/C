#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char str[20];

	printf("�ؽ�Ʈ�� �Է��Ͻÿ�:");
	gets(str);

	if (str[strlen(str)-1] == '.')
	{
		if (islower(str[0]))
		{
			str[0] = toupper(str[0]);
			printf("��� �ؽ�Ʈ ���:%s\n", str);
		}
	}
	else
	{
		if (islower(str[0]))
		{
			str[0] = toupper(str[0]);
			str[strlen(str)] = '.';
			printf("��� �ؽ�Ʈ ���:%s\n", str);
		}
	}

	return 0;
}