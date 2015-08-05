#include <cstdio>
#include <cmath>
#define TARGET 10001


int main()
{
	int ary[20000];
	ary[1] = 2; ary[2] = 3;
	int index = 2;
	for(int i = ary[index] + 2; index != TARGET; i+=2)
	{
		bool check = true;
		for(int j = index; j >= 1; j--)
		{
			if(i % ary[j] == 0)
			{
				check = false;
				break;
			}
		}
		if(check)
			ary[++index] = i;
	}
	printf("%d\n", ary[index]);
}
