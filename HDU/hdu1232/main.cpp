#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;
struct map
{
    int a;
    int b;
};
int main()
{
    ios::sync_with_stdio(false);
    bool flag;
    int i;
    map _map[5100];
    int visits;
    int visit[110];
    int n, k, sum;
    while (cin >> n >> m, n)
    {
        sum = 0;
        memset(visit, 0, sizeof(visit));
        for (i = 0; i < m; ++ i)
            cin >> _map[i].a >> _map[i].b;
        visit[1] = 1;
        for (i = 1; i <= n; ++ i)
        {
            flag = false;
            for (j = 0; j < m; ++ j)
            {
                if (1 == visits)
                {
                    visit[_map[i].a] = visit[_map[i].b] = 1;
                    flag = true;
                    break;
                }
            }
            if (flag)
                ++ sum;
        }
    }
    cout << sum << endl;
}
return 0;
}
