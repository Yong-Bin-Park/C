#include <stdio.h>

void primenuber();

int main()
{
	int i;

	printf("���ڸ� �Է��ϼ���.:");
	scanf("%d", &i);

	primenuber();

	return 0;
}

void primenumber()
{
	int i,num,prime;

	if (i%num == 0)
		prime = 0;
	if (i%num == 1)
	{
		printf("%d�� �Ҽ��Դϴ�.", i);
	}
	else
	{
		printf("%d�� �Ҽ��� �ƴմϴ�.", i);
	}
	primenumver();

}