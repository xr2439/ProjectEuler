#include <cstdio>
#include <algorithm>

int main()
{
    int a[500];
    std::fill_n(a, 500, 0);
    a[0] = 1;
    for(int i = 0; i < 1000; i++)
    {
        for(int j = 0; j < 500; j++)
            a[j] *= 2;
        for(int j = 0; j < 500 - 1; j++)
        {
            if(a[j] > 9)
            {
                a[j+1] += a[j]/10;
                a[j] %= 10;
            }
        }
    }
    int sum = 0;
    for(int i = 500-1; i >= 0; i--)
        sum += a[i];
    printf("%d\n", sum);
}