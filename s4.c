#include <stdio.h>
#include <ctype.h>

int main()
{
	char i;

	printf("���ڸ� �Է��Ͻÿ�: ");
	

	while ((i = getchar()) != '.')
	{
		fflush(stdin);
		if (islower(i))
		{
			i = toupper(i);
			putchar(i);
			printf("\n");
		}
		else if (isupper(i))
		{
			i = tolower(i);
			putchar(i);
			printf("\n");
		}
	}
	return 0;
}