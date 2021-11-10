#include <stdio.h>
#include <string.h>
#include <ctype.h>

int get_response(char *prompt);

int main()
{
	char prompt[20];

	printf("게임을 하시겠습니까? ");
	gets(prompt);

	if (get_response(prompt)) 
		puts("긍정적인 답변");
	else 
		puts("부정적인 답변");
	
	return 0;
}

int get_response(char *prompt)
{
	char *positive[2] = { "yes","ok" };
	char *negative = "no" ;
	int i;

	tolower(*prompt);
	
	for(i=0;i<2;i++)
	{ 
		if (strcmp(prompt, positive[i]))
			return 0;
		else 
			return 1;
	}

	return 0;
}