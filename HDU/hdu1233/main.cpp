#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;
struct map
{
    int a;
    int b;
    int len;
};
int cmp(const void *x ,const void *y)
{
    return ((map *)x)->len > ((map *)y)->len ? 1 : -1;
}
int main()
{
    ios::sync_with_stdio(false);
    int i;
    map _map[5100];
    int visits;
    int visit[110];
    int n, k, sum;
    while (cin >> n, n)
    {
        sum = 0;
        memset(visit, 0, sizeof(visit));
        k = n*(n - 1)/2;
        for (i = 0; i < k; ++ i)
            cin >> _map[i].a >> _map[i].b >> _map[i].len;
        qsort(_map, k, sizeof(_map[0]), cmp);
        visit[_map[0].a] = 1;
        for (i = 0; i < k; ++ i)
        {
            visits = visit[_map[i].a] + visit[_map[i].b];
            if (1 == visits)
            {
                sum += _map[i].len;
                visit[_map[i].a] = visit[_map[i].b] = 1;
                i = 0;
            }
        }
        cout << sum << endl;
    }
    return 0;
}




