#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    char name[1000];
    freopen("p022_names.txt", "r", stdin);
    unsigned long long sum = 0;
    vector<string> value;
    string tmp;
    while(scanf("\"%[^\"]\",", name) != EOF)
    {
        tmp.assign(name);
        value.push_back(tmp);
    }
    std::sort(value.begin(), value.end());
    for(int i = 0; i < value.size(); i++)
    {
        unsigned long long score = 0;
        for(int j = 0; j < value[i].size(); j++)
            score += value[i][j] - 'A' + 1;
        sum += score * (i+1);
    }
    printf("%d\n", sum);
    return 0;
}
