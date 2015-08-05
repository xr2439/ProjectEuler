#include <cstdio>
#include <algorithm>


int main()
{
    bool v[1000000];
    std::fill_n(v, 1000000, false);
    int max_count = 0;
    int ans = 0;
    v[1] = true;
    for(int i = 1; i < 1000000; i++)
    {
        unsigned long long num = i;
        int count = 0;
        if(!v[i])
        {
            while(num != 1)
            {
                count++;
                if(num < 1000000)
                    v[num] = true;
                if(num % 2)
                    num = 3*num + 1;
                else
                    num = num/2;
            }
        }
        if(count > max_count)
        {
            max_count = count;
            ans = i;
        }

    }
    printf("%d\n", ans);
    return 0;
}
