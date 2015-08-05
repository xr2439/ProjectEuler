#include <cstdio>
#define TARGET 500

int main()
{
    int num = 0;
    int i = 1;
    int count;
    int ans = 0;
    int max_count = 0;
    int shield = (TARGET/2) * (TARGET/2);
    while(true)
    {
        count = 1;
        num += i;
        if(num > 100000000)
            break;
        if(num >= shield)
        {
            for(int i = 1; i*i <= num; i++)
            {
                if(num % i == 0)
                    count+=2;
                if(i * i == num)
                    count--;
            }
        }
        if(count > max_count)
            max_count = count, ans = num; 
        if(count > TARGET)
            break;
        i++;
    }
    printf("max:%d count:%d\n", ans, max_count);
    return 0;
}