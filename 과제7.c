#include <stdio.h>


int main()
{
	char str[20];
	int i = 0;
	int count = 0;

	printf("�ؽ�Ʈ�� �Է��Ͻÿ�:");
	gets(str);

	while (str[i] != NULL)
	{
		i++;
		if (str[i] == ',' || str[i] == '.')
			count++;
	}
	printf("�������� ������ %d�Դϴ�.\n", count);

	return 0;
}