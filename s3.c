#include <stdio.h>

int str_chr(char *s, int c)
{
	int i=0 , count = 0;

	while (s[i] != NULL)
	{
		i++;
		if (s[i] == c)
			count++;
	}
	return count;
}
void count_ctr(char *s)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		printf("%c : %d\n", i, str_chr(s, i));
	}
}
int main()
{
	char str[30];
	
	printf("문자열을 입력하시오: ");
	gets(str);
	count_ctr(str);

	return 0;
}