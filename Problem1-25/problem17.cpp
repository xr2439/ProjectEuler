#include <cstdio>
#include <algorithm>

int main()
{
    int a[1001];
    std::fill_n(a, 1001, 0);
    a[1] = a[2] = a[6] = a[10] = 3;
    a[4] = a[5] = a[9] = 4;
    a[3] = a[7] = a[8] = a[40] = a[50] = a[60]= 5;
    a[11] = a[12] = a[20] = a[30] = a[80] = a[90] = 6;
    a[15] = a[16] = a[70] = 7;
    a[13] = a[14] = a[18] = a[19] = 8;
    a[17] = 9;
    a[100] = 10;
    a[1000] = 11;
    for(int i = 2; i < 10; i++)
        for(int j = 1; j < 10; j++)
            a[i*10+j] = a[i*10] + a[j];
    for(int i = 1; i < 10; i++)
        a[i*100] = a[i] + 7;
    for(int i = 1; i < 10; i++)
        for(int j = 1; j < 100; j++)
            a[i*100+j] = a[i*100] + a[j] + 3;
    int ans = 0;
    for(int i = 1; i <= 1000; i++)
        ans += a[i];
    printf("%d\n", ans);
    return 0;
}
