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

	printf("문자열을 입력하시오: ");
	gets(i);
	upper(i);
	
	printf("변환된 문자열: ");
	puts(i);
	
	return 0;
}