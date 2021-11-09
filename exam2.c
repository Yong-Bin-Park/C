#include <stdio.h>
int main(void)
{
	int a, b, c;

	printf("세개의 정수를 입력하세요.: ");
	scanf("%d %d %d", &a, &b, &c);

	if(a>b)
	{
		if (a > c)
			printf("최대값은 %d 입니다.", a);
		else
			printf("최대값은 %d 입니다.", c);

	}
	else
	{
		if (b > c)
			printf("최대값은 %d 입니다.", b);
		else
			printf("최대값은 %d 입니다.", c);

	}

	return 0;
}