#include <stdio.h>

void primenuber();

int main()
{
	int i;

	printf("숫자를 입력하세요.:");
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
		printf("%d는 소수입니다.", i);
	}
	else
	{
		printf("%d는 소수가 아닙니다.", i);
	}
	primenumver();

}