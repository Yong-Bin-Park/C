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
		printf("1.예약하기 2.취소하기 3.예약변경 4.회원가입 5.종료하기 :");
		scanf("%d", &menu);

		if (menu == 1)
		{
			printf("예약할 인원은 몇명입니까?:");
			scanf("%d", &ans);

			if (ans < size*size&&ans > 0)
				reservationseat(ans, seat);

			else
				printf("좌석의 수에 맞게 입력하여 주세요.\n");
		}
		if (menu == 2)
		{
			printf("취소할 인원은 몇명입니까?:");
			scanf("%d", &ans);

			if (ans < size*size&&ans > 0)
				cancelseat(ans, seat);
			else
				printf("예약인원수에 맞게 입력하여주세요.\n");
		}
		if (menu == 3)
		{
			printf("몇명의 좌석을 변경하겠습니까?:");
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
				printf("예약된 좌석의수가 변경하려는 좌석의 수보다 적습니다.\n");
		}
		if (menu == 4)
		{
			printf("회원가입 하시겠습니까?(1 or 0):");
			scanf("%d", &ok);

			if (ok == 1)
			{
				join;
			}
			else if (ok == 0)
			{
				printf("회원가입을 종료합니다.\n");
				return main();
			}
		}
		if (menu == 5)
			break;

		if (menu < 1 || menu>5)
			printf("번호에 맞게 입력하여 주세요.\n");
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
			printf("행을 입력하여 주세요:");
			scanf_s("%d", &line);

			if (line > 0 && line <= size)
			{
				printf("예약할 번호를 입력하여 주세요:");
				scanf("%d", &seatnum);

				if (seatnum <= size&&seatnum > 0)
				{
					if (a[line - 1][seatnum - 1] == 0)
					{
						a[line - 1][seatnum - 1] = 1;
						printf("예약 완료.\n");
					}
					else if (a[line - 1][seatnum - 1] == 1)
					{
						printf("이미 예약된 좌석입니다.\n");
						i--;
					}
				}
				else
				{
					printf("좌석의 번호에 맞게 입력하여 주세요.\n");
					i--;
				}
			}
			else
			{
				printf("행에 맞게 입력하여 주세요.\n");
				i--;
			}
		}
		seats(a);
	}
	else
	{
		printf("예약인원 초과.\n");
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
			printf("취소할 행을 입력하여 주세요:");
			scanf("%d", &line);
			if (line > 0 && line <= size)
			{
				printf("취소할 번호를 입력하여 주세요:");
				scanf("%d", &seatnum);
				if (seatnum <= size&&seatnum > 0)
				{
					if (a[line - 1][seatnum - 1] == 1)
					{
						a[line - 1][seatnum - 1] = 0;
						printf("취소 완료.\n");
					}
					else if (a[line - 1][seatnum - 1] == 0)
					{
						printf("이미 취소된 좌석입니다.\n");
						i--;
					}
				}
				else
				{
					printf("좌석의 번호에 맞게 입력하여 주세요.\n");
					i--;
				}
			}
			else
			{
				printf("범위안의 행을 입력하여주세요.\n");
				i--;
			}
		}
		seats(a);
	}
	else
	{
		printf("예약좌석수가 부족합니다.\n");
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
	printf("회원가입 하시겠습니까?(1 or 0)");
	scanf("%d", &ok);

	if (ok == 1)
	{
		printf("이름을 입력하세요:");
		scanf("%s", s.name);

		printf("아이디를 입력하세요:");
		scanf("%s", s.id);

		printf("비밀번호를 입력하세요:");
		scanf("%d", &s.pw);
	}
	else if (ok == 0)
	{
		printf("회원가입을 종료합니다.\n");
		return main();
	}
}



