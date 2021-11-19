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

	printf("복소수의 합은 실수(%f) 허수(%f) 입니다.\n", result.real, result.imag);
}

int main()
{
	struct complex c1, c2;

	printf("복소수의 실수를 입력하시오.:");
	scanf("%lf %lf", &c1.real, &c2.real);
	printf("복소수의 허수를 입력하시오.:");
	scanf("%lf %lf", &c1.imag, &c2.imag);
	complex_add(c1, c2);

	return 0;
}
