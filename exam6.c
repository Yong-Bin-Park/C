#include <stdio.h>
#define SIZE 10

void printseat();
void reservationseat();
void cancel();

int i, people;
int seats[SIZE] = { 0 };

int main()
{
	char ans1;
	int ans2, seat = 0;
	while (1)
	{
		printf(" 1.�����ϱ�,2.����ϱ� ,3.����");
		scanf(" %c", &ans1);

		if (ans1 == '1')
		{
			{
				printseat();
				printf("\n");
			}
			reservationseat();
		}
		else if (ans1 == '2')
		{
			cancel();
		}
		else if (ans1 == '3')
			return 0;
	}
	return 0;
}

void printseat()
{
	
	printf("--------------------\n");
	printf("1 2 3 4 5 6 7 8 9 10\n");
	printf("--------------------\n");

	for (i = 0; i<SIZE; i++)
		printf("%d", seats[i]);
	printf("\n");
}

void reservationseat()
{
	int ans2, seat = 0;
	
	printf("��� �����Ͻðڽ��ϱ�?");
	scanf("%d", &people);

	for (i = 0; i<SIZE; i++)
	{
		if (seats[i] == 1)
			seat++;
	}
	if (people>SIZE || people<0)
	{
		printf("1�����10����� ������ �����մϴ�.\n");
		reservationseat();
	}
	else if (people >10 - seat)
	{
		printf("������ ����� ���¼����� �ʰ��Ͽ����ϴ�.");
		reservationseat();
	}

	while (people != 0)
	{
		printf("���° �¼��� �����Ͻðڽ��ϱ�");
		scanf("%d", &ans2);
		if (ans2 <= 0 || ans2>SIZE)
		{
			printf("1���� 10������ ���ڸ� �Է��ϼ���.\n");
			main;
		}
		else if (seats[ans2 - 1] == 0)
		{
			seats[ans2 - 1] = 1;
			printf("����Ǿ����ϴ�.\n");
			people--;
			printseat();

		}
		else
		{
			printf("�̹� ����� �ڸ��Դϴ�.\n");

		}

	}
}

void cancel()
{
	int ans2, seat = 0;
	
	printf("��� ����Ͻðڽ��ϱ�?");
	scanf("%d", &people);

	for (i = 0; i<SIZE; i++)
	{
		if (seats[i] == 1)
			seat++;
	}
	if (people>SIZE || people<0)
	{
		printf("1�����10����� ��Ұ� �����մϴ�.\n");
		cancel();
	}
	else if (people >seat)
	{
		printf("����� ����� ������¼����� ���� �����ϴ�.");
		cancel();
	}

	while (people != 0)
	{
		printf("���° �¼��� ����Ͻðڽ��ϱ�");
		scanf("%d", &ans2);
		if (ans2 <= 0 || ans2>SIZE)
		{
			printf("1���� 10������ ���ڸ� �Է��ϼ���.\n");
			main;
		}
		else if (seats[ans2 - 1] == 1)
		{
			seats[ans2 - 1] = 0;
			printf("��ҵǾ����ϴ�.\n");
			people--;
			printseat();

		}
		else
		{
			printf("�̹� ��ҵ� �ڸ��Դϴ�.\n");

		}

	}
}
