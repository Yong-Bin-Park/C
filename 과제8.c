#include <stdio.h>
#include <string.h>

int add(int n1, int n2)
{
	return (n1 + n2);
}
int sub(int n1, int n2)
{
	return (n1 - n2);
}
int mul(int n1, int n2)
{
	return (n1*n2);
}
int div(int n1, int n2)
{
	return (n1 / n2);
}
int main()
{
	char str[10];
	int result,N1,N2;

	printf("연산을 입력하시오: ");
	scanf("%s %d %d", str, &N1, &N2);

	if (!strcmp(str, "add"))
		result = add(N1, N2);
	else if (!strcmp(str, "sub"))
		result = sub(N1, N2);
	else if (!strcmp(str, "mul"))
		result = mul(N1, N2);
	else if (!strcmp(str, "div"))
		result = div(N1, N2);

	printf("연산의 결과: %d\n", result);

	return 0;
}