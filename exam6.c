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
		printf(" 1.예약하기,2.취소하기 ,3.종료");
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
	
	printf("몇명 예약하시겠습니까?");
	scanf("%d", &people);

	for (i = 0; i<SIZE; i++)
	{
		if (seats[i] == 1)
			seat++;
	}
	if (people>SIZE || people<0)
	{
		printf("1명부터10명까지 예약이 가능합니다.\n");
		reservationseat();
	}
	else if (people >10 - seat)
	{
		printf("예약할 사람이 빈좌석보다 초과하였습니다.");
		reservationseat();
	}

	while (people != 0)
	{
		printf("몇번째 좌석을 예약하시겠습니까");
		scanf("%d", &ans2);
		if (ans2 <= 0 || ans2>SIZE)
		{
			printf("1부터 10사이의 숫자를 입력하세요.\n");
			main;
		}
		else if (seats[ans2 - 1] == 0)
		{
			seats[ans2 - 1] = 1;
			printf("예약되었습니다.\n");
			people--;
			printseat();

		}
		else
		{
			printf("이미 예약된 자리입니다.\n");

		}

	}
}

void cancel()
{
	int ans2, seat = 0;
	
	printf("몇명 취소하시겠습니까?");
	scanf("%d", &people);

	for (i = 0; i<SIZE; i++)
	{
		if (seats[i] == 1)
			seat++;
	}
	if (people>SIZE || people<0)
	{
		printf("1명부터10명까지 취소가 가능합니다.\n");
		cancel();
	}
	else if (people >seat)
	{
		printf("취소할 사람이 예약된좌석보다 수가 많습니다.");
		cancel();
	}

	while (people != 0)
	{
		printf("몇번째 좌석을 취소하시겠습니까");
		scanf("%d", &ans2);
		if (ans2 <= 0 || ans2>SIZE)
		{
			printf("1부터 10사이의 숫자를 입력하세요.\n");
			main;
		}
		else if (seats[ans2 - 1] == 1)
		{
			seats[ans2 - 1] = 0;
			printf("취소되었습니다.\n");
			people--;
			printseat();

		}
		else
		{
			printf("이미 취소된 자리입니다.\n");

		}

	}
}
