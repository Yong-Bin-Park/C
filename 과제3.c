#include <stdio.h>
#include <ctype.h>

int main()
{
	int word;

	printf("문자를 입력하세요: ");

	while((word = getchar()) != '.')
	{ 
		fflush(stdin);
		if (islower(word))
		{
			word = toupper(word);
			putchar(word);
		}
		else if(isupper(word))
		{
			word = tolower(word);
			putchar(word);
		}
	}

	return 0;
}