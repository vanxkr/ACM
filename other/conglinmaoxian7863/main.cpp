#include <iostream>
#include <cstdio>
#include <cstlib>
#include <cstring>

using namespace std;

struct TU
{
    int x;
    int y;
    int c;
    int d;
};

TU tu[40001];

int main()
{
    int n, m;
    int i, j;
    while (scanf("%d%d", &n, &m) != EOF && (n + m))
    {
        for (i = 0; i < m; ++ m)
        {
            scanf("%d%d%d%d", &tu[i].x, &tu[i].y, &tu[i].c, &tu[i].d);
        }
    }
    return 0;
}
