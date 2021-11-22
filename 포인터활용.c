#include <stdio.h>

void pr_str_array(char **dp, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%s\n", dp[i]);
	}
	
	
}
int main()
{
	char *array[10] = { "A bad shearer never had a good sickle.",
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
	

	pr_str_array(&(*array), 10);

	return 0;
}