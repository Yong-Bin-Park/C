#include <stdio.h>
#include<string.h>
#include<ctype.h>
int get_response(char *prompt);


int main()
{
	char str[20];

	printf("������ �Ͻðڽ��ϱ�? ");
	gets(str);

	if (get_response(str))
		puts("�������� �亯");
	else
		puts("�������� �亯");

	return 0;
}
int get_response(char *prompt)
{
	char *positive[2] = { "yes", "ok" };
	char *negative = "no";
	int i;

	tolower(prompt);
	if (!strcmp(prompt, positive[0]))
		return 1;
	else if (!strcmp(prompt, positive[1]))
		return 1;
	else
		return 0;

}