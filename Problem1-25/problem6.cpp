/*

1^2 + 2^2 + ... + n^2 = n*(2n+1)(n+1) / 6

1 + 2 + ... + n = n(n+1) / 2

*/

#include <cstdio>

int sum_of_square(int num);
int square_of_sum(int num);

int main()
{
	int num = sum_of_square(100) * sum_of_square(100) - square_of_sum(100);
	printf("%d\n", num);
	return 0;
}

int sum_of_square(int num)
{
	return num*(num+1)/2;
}
int square_of_sum(int num)
{
	return num*(2*num+1)*(num+1)/6;
}
