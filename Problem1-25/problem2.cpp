#include <cstdio>

int main()
{
	int item[2] = {1, 2};
	int new_item = item[0] + item[1];
	int ans = 2;
	while (new_item <= 4000000)
	{
		if(new_item % 2 == 0)
			ans += new_item;
		item[0] = item[1];
		item[1] = new_item;
		new_item = item[0] + item[1];
	}
	printf("%d\n", ans);
}