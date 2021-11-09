#include <stdio.h>

int main(void)
{
	int x, y, z;

	printf("세개의 정수를 입력하세요: ");
	scanf("%d %d %d", &x, &y, &z);

	if (x > y)
	{
		if (x > z)
			printf("최대값은 %d 입니다.", x);
		else
			if(y > z)
			printf("최대값은 %d입니다.", y);

	}
	else
	{
		if (y > z)
			printf("최대값은 %d입니다.", y);
		else
			if(z > x)
		printf("최대값은 %d입니다.", z);
	}
	
	return 0;

}