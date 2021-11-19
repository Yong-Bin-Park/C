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
	printf("1.���̰�� 2.�ѷ���� 3.���簢���˻� ");
	scanf("%d", &i);

	if (i == 1)
	{
		printf("������ ����� ���� �Է����ּ���: ");
		scanf("%d %d", &r.a.x, &r.a.y);
		printf("���� �ϴ��� ���� �Է����ּ���: ");
		scanf("%d %d", &r.b.x, &r.b.y);
		printf("�簢���� ���̴� %d �Դϴ�.\n",area(r));
	}
	else if (i == 2)
	{
		printf("������ ����� ���� �Է����ּ���: ");
		scanf("%d %d", &r.a.x, &r.a.y);
		printf("���� �ϴ��� ���� �Է����ּ���: ");
		scanf("%d %d", &r.b.x, &r.b.y);
		printf("�簢���� �ѷ��� %d �Դϴ�.\n", perimeter(r));
	}
	else if (i == 3)
	{
		printf("������ ����� ���� �Է����ּ���: ");
		scanf("%d %d", &r.a.x, &r.a.y);
		printf("���� �ϴ��� ���� �Է����ּ���: ");
		scanf("%d %d", &r.b.x, &r.b.y);
		
		if (is_square(r) == 1)
			printf("���簢���� �½��ϴ�.\n");
		else
			printf("���簢���� �ƴմϴ�.\n");
	}

	return 0;
}