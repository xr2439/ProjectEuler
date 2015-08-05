#include <cstdio>
#include <set>

int main()
{
    std::set<int> divisor;
    unsigned long long ans = 1;
    int num = 40;
    while(num != 20)
    {
        int hold = num;
        for(int i = 20; i >= 2; i--)
        {
            if(!divisor.count(i) && hold % i == 0)
            {
                divisor.insert(i);
                hold /= i;
            }
        }
        for(int i = 20; i >= 2; i--)
        {
            if(!divisor.count(i) && ans % i == 0)
            {
                divisor.insert(i);
                ans /= i;
            }
        }
        ans *= hold;
        for(int i = 20; i >= 2; i--)
        {
            if(!divisor.count(i) && ans % i == 0)
            {
                divisor.insert(i);
                ans /= i;
            }
        }
        num--;
    }
    printf("%llu\n", ans);

    return 0;
}
