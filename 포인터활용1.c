#include <stdio.h>

void set_proverb(char **q, int n)
{
	static char *array[10] = { "A bad shearer never had a good sickle.",
		"A bad workman (always) blames his tools.",
		"A bad workman quarrels with his tools.",
		"A bad thing never dies.",
		"A friend in need is a friend indeed.",
		"A good medicine tastes bitter.",
		"A leopard cannot change his spots.",
		"A journey of a thousand miles begins with a single step.",
		"A bird in the hand is worth two in the bush.",
		"A buddy from my old stomping grounds."
	};
	*q = array[n - 1];
}

int main()
{
	char *proverb;
	int ans;

	printf("몇 번째 속담을 선택하시겠습니까?");
	scanf("%d", &ans);

	set_proverb(&proverb, ans);
	printf("selected proverb = %s\n", proverb);

	return 0;
}
