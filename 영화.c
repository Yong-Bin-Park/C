#include<stdio.h>
#define size 10 

struct member
{
	char name[100];
	char id[200];
	int pw;
};

int join(char n, char id, int pw);
void seats(int a[][size]);
void reservationseat(int n, int a[][size]);
void cancelseat(int n, int a[][size]);
void changeseat(int a[][size]);


int main(void)
{
	int seat[size][size] = { { 0 } };
	int menu, ans, i, j, ok, reserv = 0;
	struct member s;

	while (1)
	{
		printf("1.�����ϱ� 2.����ϱ� 3.���ຯ�� 4.ȸ������ 5.�����ϱ� :");
		scanf("%d", &menu);

		if (menu == 1)
		{
			printf("������ �ο��� ����Դϱ�?:");
			scanf("%d", &ans);

			if (ans < size*size&&ans > 0)
				reservationseat(ans, seat);

			else
				printf("�¼��� ���� �°� �Է��Ͽ� �ּ���.\n");
		}
		if (menu == 2)
		{
			printf("����� �ο��� ����Դϱ�?:");
			scanf("%d", &ans);

			if (ans < size*size&&ans > 0)
				cancelseat(ans, seat);
			else
				printf("�����ο����� �°� �Է��Ͽ��ּ���.\n");
		}
		if (menu == 3)
		{
			printf("����� �¼��� �����ϰڽ��ϱ�?:");
			scanf("%d", &ans);

			for (j = 0; j < size; j++)
			{
				for (i = 0; i < size; i++)
					if (seat[j][i] == 1)
						reserv++;
			}
			if (ans < reserv&&ans > 0)
			{
				for (i = 0; i < ans; i++)
					changeseat(seat);
			}
			else
				printf("����� �¼��Ǽ��� �����Ϸ��� �¼��� ������ �����ϴ�.\n");
		}
		if (menu == 4)
		{
			printf("ȸ������ �Ͻðڽ��ϱ�?(1 or 0):");
			scanf("%d", &ok);

			if (ok == 1)
			{
				join;
			}
			else if (ok == 0)
			{
				printf("ȸ�������� �����մϴ�.\n");
				return main();
			}
		}
		if (menu == 5)
			break;

		if (menu < 1 || menu>5)
			printf("��ȣ�� �°� �Է��Ͽ� �ּ���.\n");
	}
}



void seats(int a[size][size])
{
	int i, j;
	printf("   |   1  2  3  4  5  6  7  8  9  10\n");
	printf("--------------------------------------\n");

	for (j = 0; j < size; j++)
	{
		printf("%2d | ", j + 1);
		for (i = 0; i < size; i++)
		{
			printf(" %2d", a[j][i]);
		}
		printf("\n");
	}
	printf("\n");
}



void reservationseat(int n, int a[][size])
{
	int j, i, line, seatnum, reserv = 0;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
			if (a[j][i] == 1)
				reserv++;
	}

	if (size*size - reserv >= n)
	{
		for (i = 0; i < n; i++)
		{
			seats(a);
			printf("���� �Է��Ͽ� �ּ���:");
			scanf_s("%d", &line);

			if (line > 0 && line <= size)
			{
				printf("������ ��ȣ�� �Է��Ͽ� �ּ���:");
				scanf("%d", &seatnum);

				if (seatnum <= size&&seatnum > 0)
				{
					if (a[line - 1][seatnum - 1] == 0)
					{
						a[line - 1][seatnum - 1] = 1;
						printf("���� �Ϸ�.\n");
					}
					else if (a[line - 1][seatnum - 1] == 1)
					{
						printf("�̹� ����� �¼��Դϴ�.\n");
						i--;
					}
				}
				else
				{
					printf("�¼��� ��ȣ�� �°� �Է��Ͽ� �ּ���.\n");
					i--;
				}
			}
			else
			{
				printf("�࿡ �°� �Է��Ͽ� �ּ���.\n");
				i--;
			}
		}
		seats(a);
	}
	else
	{
		printf("�����ο� �ʰ�.\n");
	}
}



void cancelseat(int n, int a[][size])
{
	int i, j, line, seatnum, reserv = 0;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
			if (a[j][i] == 1)
				reserv++;
	}
	if (reserv >= n)
	{
		for (i = 0; i < n; i++)
		{
			seats(a);
			printf("����� ���� �Է��Ͽ� �ּ���:");
			scanf("%d", &line);
			if (line > 0 && line <= size)
			{
				printf("����� ��ȣ�� �Է��Ͽ� �ּ���:");
				scanf("%d", &seatnum);
				if (seatnum <= size&&seatnum > 0)
				{
					if (a[line - 1][seatnum - 1] == 1)
					{
						a[line - 1][seatnum - 1] = 0;
						printf("��� �Ϸ�.\n");
					}
					else if (a[line - 1][seatnum - 1] == 0)
					{
						printf("�̹� ��ҵ� �¼��Դϴ�.\n");
						i--;
					}
				}
				else
				{
					printf("�¼��� ��ȣ�� �°� �Է��Ͽ� �ּ���.\n");
					i--;
				}
			}
			else
			{
				printf("�������� ���� �Է��Ͽ��ּ���.\n");
				i--;
			}
		}
		seats(a);
	}
	else
	{
		printf("�����¼����� �����մϴ�.\n");
	}
}

void changeseat(int a[][size])
{
	int n = 1;
	cancelseat(n, a);
	reservationseat(n, a);
}

int join(char n, char id, int pw)
{
	int ok;
	struct member s;
	printf("ȸ������ �Ͻðڽ��ϱ�?(1 or 0)");
	scanf("%d", &ok);

	if (ok == 1)
	{
		printf("�̸��� �Է��ϼ���:");
		scanf("%s", s.name);

		printf("���̵� �Է��ϼ���:");
		scanf("%s", s.id);

		printf("��й�ȣ�� �Է��ϼ���:");
		scanf("%d", &s.pw);
	}
	else if (ok == 0)
	{
		printf("ȸ�������� �����մϴ�.\n");
		return main();
	}
}



