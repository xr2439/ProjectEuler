#include <cstdio>
#include <algorithm>

int main()
{
    int ary[500];
    std::fill_n(ary, 500, 0);
    ary[0] = 1;
    for(int i = 100; i > 0; i--)
    {
        for(int j = 500-1; j >= 0; j--)
            ary[j]*=i;
        for(int j = 0; j < 500-1; j++)
            if(ary[j] > 9)
                ary[j+1] += ary[j]/10, ary[j] %= 10;
    }
    int ans = 0;
    for(int i = 0; i < 500; i++)
        ans += ary[i];
    printf("%d\n", ans);
    return 0;
}
