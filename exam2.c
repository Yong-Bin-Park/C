#include <stdio.h>
int main(void)
{
	int a, b, c;

	printf("������ ������ �Է��ϼ���.: ");
	scanf("%d %d %d", &a, &b, &c);

	if(a>b)
	{
		if (a > c)
			printf("�ִ밪�� %d �Դϴ�.", a);
		else
			printf("�ִ밪�� %d �Դϴ�.", c);

	}
	else
	{
		if (b > c)
			printf("�ִ밪�� %d �Դϴ�.", b);
		else
			printf("�ִ밪�� %d �Դϴ�.", c);

	}

	return 0;
}