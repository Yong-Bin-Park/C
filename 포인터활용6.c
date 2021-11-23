#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define STUDENT 3
#define SUBJECT 3

double get_average(int list[], int n)
{
	int i;
	double sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += list[i];
	}
	return (sum / n);
}

void get_grade(int list[][SUBJECT], int stu, int sub) 
{
	int i, j = 0;

	for(i=0;i<stu;i++)
	{
		for(j=0;j<sub;j++)
		{
			list[i][j] = 1 + rand() % 100;
		}
	}
}

void print_arr(int list[][SUBJECT], int stu, int sub)
{
	int i, j;
	
	for(i=0;i<stu;i++)
	{
		for(j=0;j<sub;j++)
			printf(" %d ", list[i][j]);
		printf("\n");
	}
	printf("\n");
}
int main()
{
	int list[STUDENT][SUBJECT];
	int i, n;
	
	n = sizeof(list[i]) / sizeof(list[i][0]);
	get_grade(list, STUDENT, SUBJECT);
	printf("==국어 수학 영어==\n");
	print_arr(list, STUDENT, SUBJECT);
	for (i = 0; i<STUDENT; i++)
		printf(" 학생%d의 평균 : %.2f \n", i + 1, get_average(list[i], n));

	return 0;
}