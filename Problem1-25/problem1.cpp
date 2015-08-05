#include <cstdio>

#define NUM 1000

int main()
{
	int ans = 0;
	for(int i = 1; i < NUM; i++)
		if(i % 3 == 0 || i % 5 == 0)
			ans += i;
	printf("%d\n", ans);
	return 0;
}