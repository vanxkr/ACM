#include <iostream>
#include <cstring>
#define min(a,b) (a)>(b)?(b):(a)
#define INF 0x3f3f3f3f
using namespace std;
int _map[101][101];
int minload[101];
bool visit[101];
int main()
{
    int i;
    int n, m;
    int a, b, c;
    int start, next, _min;
    while (cin >> n >> m && m + n)
    {
        memset(visit, false, sizeof(visit));
        memset(minload, 0x3f, sizeof(minload));
        memset(_map, 0x3f, sizeof(_map));
        while (m --)
        {
            cin >> a >> b >> c;
            _map[a][b] = _map[b][a] = c;
        }
        start = 1;
        visit[1] = true;
        minload[1] = 0;
        while (start != n)
        {
            _min = INF;
            for (i = 1; i <= n; ++ i)
            {
                if (_map[start][i] != INF)
                    minload[i] = min(minload[i], minload[start] + _map[start][i]);
                if (!visit[i] && minload[i] < _min)
                {
                    next = i;
                    _min = minload[i];
                }
            }
            visit[next] = true;
            start = next;
        }
        cout << minload[n] << endl;
    }
}

/*
7 10
1 2 10
1 3 2
2 5 1
3 4 2
3 6 11
4 5 4
4 6 6
4 7 6
5 7 7
6 7 3

10

8 15
1 2 9
2 8 7
1 4 3
1 3 4
1 5 1
8 3 6
8 6 5
3 6 1
3 4 4
4 6 2
6 7 1
4 7 3
5 7 2
4 5 1
2 3 8

9
*/
