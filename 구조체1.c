#include <stdio.h>

struct point {
	int x, y;
};

int equal(struct point p1, struct point p2)
{
	if ((p1.x == p2.x) && (p1.y == p2.y))
		printf("�� ���� ��ǥ�� ��ġ�մϴ�.\n");
	else
		printf("�� ���� ��ǥ�� ��ġ���� �ʽ��ϴ�.\n");

	return 0;
}
int quadrant(struct point p)
{
	if (p.x > 0 && p.y > 0)
		printf("1��и��Դϴ�.\n");
	else if (p.x < 0 && p.y>0)
		printf("2��и��Դϴ�.\n");
	else if (p.x < 0 && p.y < 0)
		printf("3��и��Դϴ�.\n");
	else if (p.x > 0 && p.y < 0)
		printf("4��и��Դϴ�.\n");
	
	return 0;
}
int main()
{
	struct point p1, p2,p3;

	printf("ù��° ���� ��ǥ�� �Է����ּ���(x1,y1) :  ");
	scanf("%d %d", &p1.x, &p1.y);
	printf("�ι�° ���� ��ǥ�� �Է����ּ���(x2,y2) :  ");
	scanf("%d %d", &p2.x, &p2.y);
	equal(p1, p2);

	printf("���� ��ǥ�� �Է��ϼ���:");
	scanf("%d %d", &p3.x, &p3.y);
	quadrant(p3);

	return 0;
}