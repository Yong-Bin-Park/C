#include <stdio.h>
#define SIZE 10

void printseat();
void reservationseat(int ans2);

int i,ans2;
int seats[SIZE] = { 0 };

int main()
{
	char ans1;
	
	
	while (1)
	{
		printf("�¼��� �����Ͻðڽ��ϱ�?(y�Ǵ�n)");
		scanf(" %c", &ans1);

		if (ans1 == 'y')
		{
			{
				printseat();
				printf("\n");
			}
		
				printf("���° �¼��� �����Ͻðڽ��ϱ�");
				scanf("%d", &ans2);
				reservationseat(ans2);
			
		}
		else if (ans1 == 'n')
			return 0;
	}
	return 0;
}


void printseat()
{
	
	printf("----------------------\n");
	printf("1 2 3 4 5 6 7 8 9 10\n");
	printf("----------------------\n");

	for (i = 0; i < SIZE; i++)
		printf("%d", seats[i]);
	
}

void reservationseat(int ans2)
{
	
	if (ans2 <= 0 || ans2 > SIZE)
	{
		printf("1���� 10������ ���ڸ� �Է��ϼ���.\n");
		main;
	}
	else if (seats[ans2 - 1] == 0)
	{
		seats[ans2 - 1] = 1;
		printf("����Ǿ����ϴ�.\n");
	}
	else 
		printf("�̹� ����� �ڸ��Դϴ�.\n");

	
}