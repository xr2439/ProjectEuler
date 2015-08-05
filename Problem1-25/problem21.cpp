#include <cstdio>
#include <algorithm>

int main()
{
    bool v[10000];
    std::fill_n(v, 10000, false);
    int ans = 0;


    for(int i = 1; i < 10000; i++)
    {
        int value1 = 0;
        int value2 = 0;
        if(!v[i])
        {
            for(int j = 1; j < i; j++)
            {
                if(i % j == 0)
                    value1 += j;
            }
            v[i] = true;
            for(int j = 1; j < value1; j++)
            {
                if(value1 % j == 0)
                    value2 += j;
            }
            if(i == value1)
                continue;
            if(value1 < 10000)
            {
                v[value1] = true;
                if(i == value2)    ans += value1 + value2;
            }
            else if(i == value2)   
                ans += value2;
        }
    }
    printf("%d\n", ans);
    return 0;
}