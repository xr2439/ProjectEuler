#include <cstdio>

#define TARGET 0

bool is_leap(int num);

int main()
{
    int index = 0;
    int count = 0;
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for(int year = 1900; year <= 2000; year++)
    {
        for(int i = 0; i < 12; i++)
        {
            int days = month[i];
            if(i == 1 && is_leap(year))
                days++;
            for(int j = 0; j < days; j++)
                if((++index % 7 == TARGET) && j == 0 && year > 1900) // notice ++index % 7 == TARGET must place in front of others
                    count++;
        }
    }
    printf("%d\n", count);
    return 0;
}

bool is_leap(int num)
{
    return (((num%4 == 0) && (num%100 != 0)) || (num % 400 == 0)) ? true : false;
}
