#include <stdio.h>

struct complex {
	double real;
	double imag;
};
struct complex complex_add(struct complex c1, struct complex c2) 
{
	struct complex result;

	result.real = c1.real + c2.real;
	result.imag = c1.imag + c2.imag;

	printf("���Ҽ��� ���� �Ǽ�(%f) ���(%f) �Դϴ�.\n", result.real, result.imag);
}

int main()
{
	struct complex c1, c2;

	printf("���Ҽ��� �Ǽ��� �Է��Ͻÿ�.:");
	scanf("%lf %lf", &c1.real, &c2.real);
	printf("���Ҽ��� ����� �Է��Ͻÿ�.:");
	scanf("%lf %lf", &c1.imag, &c2.imag);
	complex_add(c1, c2);

	return 0;
}
