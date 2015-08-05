#include <cstdio>
#include <algorithm>

#define TARGER 1000-1

int f1[2000];
int f2[2000];
int index;

int main()
{
    std::fill_n(f1, 2000, 0);
    std::fill_n(f2, 2000, 0);
    f1[0] = f2[0] = 1;
    index = 2;
    while(f1[TARGER] == 0 && f2[TARGER] == 0)
    {
        for(int i = 0; i < 2000; i++)
            f1[i] += f2[i];
        for(int i = 0; i < 1999; i++)
            if(f1[i] > 9)
                f1[i+1] += f1[i]/10, f1[i] %= 10;
        index++;
        if(f1[TARGER] != 0 || f2[TARGER] != 0)
            break;
        for(int i = 0; i < 2000; i++)
            f2[i] += f1[i];
        for(int i = 0; i < 1999; i++)
            if(f2[i] > 9)
                f2[i+1] += f2[i]/10, f2[i] %= 10;
        index++;
    }
    printf("%d\n", index);    
}
