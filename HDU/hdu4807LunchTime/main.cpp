#include <iostream>
#include <cstdio>
#include <algorithm>
#define N 2510
#define M 5010
#define K 1000000000
using namespace std;

struct _map
{
    int a;
    int b;
    int c;
} tu[M];

void lu(int ii, int nn, cc)
{
    if (tu[ii].b == nn - 1)
    {
        if (0 == tu[mm].a)
            cout << min(tu[mm].c, cc) << endl;
        else
            lu(tu[mm].a, cc, min(tu[mm].c, cc));
    }
    lu(mm)
}

int main()
{
    int n, m, k;
    int i, j, u, v, w;
    while (scanf("%d%d%d", &n, &m, &k) != EOF)
    {
        for (i = 0; i < m; ++ i)
            scanf("%d%d%d", &tu[i].a, &tu[i].b, &tu[i].c);

    }
    return 0;
}
