#include <cstdio>
#include <algorithm>
#include <vector>

#define N 10 // 0~9
#define TARGET 1000000

using namespace std;

int ary[N];
bool v[N];
vector<int> vec;
int index;


void permutations(int start);

int main()
{
    index = 0;
    for(int i = 0; i < N; i++)
        ary[i] = i;
    for(int i = 0; i < N; i++)
    {
        fill_n(v, N, false);
        vec.clear();
        permutations(i);
    }

    return 0;
}

void permutations(int start)
{
    v[start] = true;
    vec.push_back(start);
    if(vec.size() == N)
    {
        index++;
        if(index == TARGET)
        {    
            for(int i = 0; i < vec.size(); i++)
                printf("%d", vec[i]);
            printf("\n");   
        }
        return;
    }
    for(int i = 0; i < N; i++)
    {
        if(!v[i])
        {
            permutations(i);
            vec.pop_back();
            v[i] = false;
        }
    }
}