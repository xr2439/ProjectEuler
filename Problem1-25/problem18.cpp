#include <cstdio>
#include <cstdlib>

#define LENGTH 15

int main()
{
    char data[1000] = " \
                        75 \
                        95 64 \
                        17 47 82 \
                        18 35 87 10 \
                        20 04 82 47 65 \
                        19 01 23 75 03 34 \
                        88 02 77 73 07 63 67 \
                        99 65 04 28 06 16 70 92 \
                        41 41 26 56 83 40 80 70 33 \
                        41 48 72 33 47 32 37 16 94 29 \
                        53 71 44 65 25 43 91 52 97 51 14 \
                        70 11 33 28 77 73 17 78 39 68 17 57 \
                        91 71 52 38 17 14 91 43 58 50 27 29 48 \
                        63 66 04 68 89 53 67 30 73 16 69 87 40 31 \
                        04 62 98 27 23 09 70 98 73 93 38 53 60 04 23";
    int **a;
    int **n;
    int len;
    char *p;
    p = data;
    a = new int*[LENGTH];
    for(int i = 0; i < LENGTH; i++)
        a[i] = new int[i+1];
    for(int i = 0; i < LENGTH; i++)
        for(int j = 0; j < i+1; j++, p+=len)
            sscanf(p, "%d%n", &a[i][j], &len);
    n = new int*[LENGTH];
    for(int i = 0; i < LENGTH; i++)
        n[i] = new int[i+1];
    for(int i = 0; i < LENGTH; i++)
        for(int j = 0; j < i+1; j++)
            n[i][j] = 0;
    for(int i = 0; i < LENGTH; i++)
        n[LENGTH-1][i] = a[LENGTH-1][i];
    for(int i = LENGTH-1; i > 0; i--)
    {
        for(int j = 0; j < i+1; j++)
        {
            if(j != i) // 0 ~ i-1
                n[i-1][j] = (n[i-1][j] > n[i][j] + a[i-1][j]) ? (n[i-1][j]) : (n[i][j] + a[i-1][j]);
            if(j != 0) // 1 ~ i
                n[i-1][j-1] = (n[i-1][j-1] > n[i][j] + a[i-1][j-1]) ? (n[i-1][j-1]) : (n[i][j] + a[i-1][j-1]);
        }
    }
    printf("%d\n", n[0][0]);



    return 0;
}
