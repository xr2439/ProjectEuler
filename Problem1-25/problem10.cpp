#include <cstdio>
#include <vector>
#define LIMIT 2000000

int a[200000];
int j;

int main()
{
    int index = 1;
    a[0] = 2, a[1] = 3;
    unsigned long long sum = 5;
    for(int i = 5; i < LIMIT; i+=2)
    {
        bool is_prime = true;
        for(j = 0; a[j]*a[j] <= i && j <= index; j++)
        {
            if(i % a[j] == 0)
            {
                is_prime = false;
                break;
            }
        }
        if(is_prime)
        {
            a[++index] = i;
            sum += i;
        }
    } 
    printf("%d\n", a[index]);
    printf("%llu\n", sum);
    return 0;
}