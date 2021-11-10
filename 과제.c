#include <stdio.h>

int main()
{
	char ascii;

	printf("문자를 입력하세요: ");
	scanf("%c", &ascii);

	printf("아스키 코드값=%d\n", ascii);

	return 0;
}