#include <stdio.h>
#include <ctype.h>

void upper(char *s)
{
	int i;
	for (i = 0; s[i] != NULL; i++) {
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 'a' - 'A';
	}
}
int main()
{
	char i[20];

	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets(i);
	upper(i);
	
	printf("��ȯ�� ���ڿ�: ");
	puts(i);
	
	return 0;
}