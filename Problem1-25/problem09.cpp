#include <cstdio>
int main()
{
    int x = 2, y = 1;
    int a, b, c;
    while(true)
    {
        a = 2*x*y;
        b = x*x - y*y;
        c = x*x + y*y;
        if(a + b + c > 1000)
        {
            y++;
            x = y + 1;
            continue;
        }
        if(a + b + c == 1000)
            break;
        x++;
    }
    printf("a:%d b:%d c:%d\n", 2*x*y, x*x-y*y, x*x+y*y);
    return 0;
}
