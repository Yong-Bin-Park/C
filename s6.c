#include <stdio.h>
#include<string.h>
#include<ctype.h>
int get_response(char *prompt);


int main()
{
	char str[20];

	printf("게임을 하시겠습니까? ");
	gets(str);

	if (get_response(str))
		puts("긍정적인 답변");
	else
		puts("부정적인 답변");

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