#include <stdio.h>

int main(void)
{
	int x, y, z;

	printf("������ ������ �Է��ϼ���: ");
	scanf("%d %d %d", &x, &y, &z);

	if (x > y)
	{
		if (x > z)
			printf("�ִ밪�� %d �Դϴ�.", x);
		else
			if(y > z)
			printf("�ִ밪�� %d�Դϴ�.", y);

	}
	else
	{
		if (y > z)
			printf("�ִ밪�� %d�Դϴ�.", y);
		else
			if(z > x)
		printf("�ִ밪�� %d�Դϴ�.", z);
	}
	
	return 0;

}