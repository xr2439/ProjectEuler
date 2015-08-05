#include <cstdio>
#include <cstring>

bool is_palindrome(int);

int main()
{
	int max = 0;
	for(int i = 999; i >= 100; i--)
		for(int j = 999; j >= 100; j--)
			if(is_palindrome(i * j))
				max = (i * j > max) ? i*j : max;
	printf("%d\n", max);
}

bool is_palindrome(int num)
{
	char data[1024];
	sprintf(data ,"%d", num);
	int len = strlen(data) - 1;
	for(int i = 0; i < len; i++, len--)
		if(data[i] != data[len])
			return false;
	return true;
}
