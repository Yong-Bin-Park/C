#include <stdio.h>

typedef struct {
	int x, y;
}point;

typedef struct {
	point a, b;
}rectangle;


int area(rectangle r)
{
	int result;

	result = (r.a.x - r.b.x) * (r.a.y - r.b.y);
	return result;
}

int perimeter(rectangle r)
{
	int result2;

	result2 = ((r.a.x - r.b.x) + (r.a.y - r.b.y)) * 2;
	return result2;
}

int is_square(rectangle r)
{
	int result3;

	if (result3 = ((r.a.x - r.b.x) == (r.a.y - r.b.y)))
		return result3;
	else
		return 0;

}
int main()
{
	rectangle r;

	int i;
	printf("1.넓이계산 2.둘레계산 3.정사각형검사 ");
	scanf("%d", &i);

	if (i == 1)
	{
		printf("오른쪽 상단의 점을 입력해주세요: ");
		scanf("%d %d", &r.a.x, &r.a.y);
		printf("왼쪽 하단의 점을 입력해주세요: ");
		scanf("%d %d", &r.b.x, &r.b.y);
		printf("사각형의 넓이는 %d 입니다.\n",area(r));
	}
	else if (i == 2)
	{
		printf("오른쪽 상단의 점을 입력해주세요: ");
		scanf("%d %d", &r.a.x, &r.a.y);
		printf("왼쪽 하단의 점을 입력해주세요: ");
		scanf("%d %d", &r.b.x, &r.b.y);
		printf("사각형의 둘레는 %d 입니다.\n", perimeter(r));
	}
	else if (i == 3)
	{
		printf("오른쪽 상단의 점을 입력해주세요: ");
		scanf("%d %d", &r.a.x, &r.a.y);
		printf("왼쪽 하단의 점을 입력해주세요: ");
		scanf("%d %d", &r.b.x, &r.b.y);
		
		if (is_square(r) == 1)
			printf("정사각형이 맞습니다.\n");
		else
			printf("정사각형이 아닙니다.\n");
	}

	return 0;
}