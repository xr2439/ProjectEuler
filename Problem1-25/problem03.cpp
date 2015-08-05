#include <cstdio>
#include <cmath>

#define NUMBER 600851475143

bool is_prime(long num);

int main()
{

	int num = sqrt(NUMBER);
	while(num != 0)
	{
		if(is_prime(num) && (NUMBER % num == 0))
			break;
		num--;
	}
	if(num == 1)
		printf("%d\n", NUMBER);
	else
		printf("%d\n", num);

}

bool is_prime(long num)
{
	long a = sqrt(num);
	if (num == 1) 
		return true;
	while(a != 1)
	{

		if(num % a == 0)
			return false;
		a--;
	}
	return true;
}


