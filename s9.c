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
		printf("ȸ���Դϴ�.");
	else
		printf("ȸ���� �ƴմϴ�.");

	return 0;
}
int tolower(char *str)
{
	str = tolower(str);
}

int main()
{
	char str[30];

	printf("���ڿ��� �Է����ּ���: ");
	gets(str);
	tolower(str);
	pali(str);

	return 0;
}
