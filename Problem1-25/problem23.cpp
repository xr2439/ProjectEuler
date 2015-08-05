#include <cstdio>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    bool sum_of_two_abundant[30000];
    fill_n(sum_of_two_abundant, 30000, false);
    vector<int> abundant;
    for(int i = 1; i <= 28123; i++)
    {
        int value = 1;
        for(int j = 2; j <= sqrt(i); j++)
        {
            if(i % j == 0)
            {
                value += j;
                if(i/j != j)
                    value += i/j;
            }
            if(value > i)
            {
                abundant.push_back(i);
                break;
            }
        }
    }
    unsigned long long sum = 0;
    for(int i = 0; i < abundant.size(); i++)
    {
        for(int j = 0; j < abundant.size(); j++)
        {
            int index = abundant[i] + abundant[j];
            if(index < 30000)
                sum_of_two_abundant[index] = true;
        } 
    }
    for(int i = 1; i <= 28123; i++)
        if(!sum_of_two_abundant[i])
            sum += i;
    printf("%llu\n", sum);

}