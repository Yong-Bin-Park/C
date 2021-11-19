#include <stdio.h>

struct point {
	int x, y;
};

int equal(struct point p1, struct point p2)
{
	if ((p1.x == p2.x) && (p1.y == p2.y))
		printf("두 점의 좌표가 일치합니다.\n");
	else
		printf("두 점의 좌표가 일치하지 않습니다.\n");

	return 0;
}
int quadrant(struct point p)
{
	if (p.x > 0 && p.y > 0)
		printf("1사분면입니다.\n");
	else if (p.x < 0 && p.y>0)
		printf("2사분면입니다.\n");
	else if (p.x < 0 && p.y < 0)
		printf("3사분면입니다.\n");
	else if (p.x > 0 && p.y < 0)
		printf("4사분면입니다.\n");
	
	return 0;
}
int main()
{
	struct point p1, p2,p3;

	printf("첫번째 점의 좌표를 입력해주세요(x1,y1) :  ");
	scanf("%d %d", &p1.x, &p1.y);
	printf("두번째 점의 좌표를 입력해주세요(x2,y2) :  ");
	scanf("%d %d", &p2.x, &p2.y);
	equal(p1, p2);

	printf("점의 좌표를 입력하세요:");
	scanf("%d %d", &p3.x, &p3.y);
	quadrant(p3);

	return 0;
}