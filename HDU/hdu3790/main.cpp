///hdu3790dijkstra双重权重
#include <iostream>
#include <cstdio>
#include <cstring>
#define N 1010
#define INF 0x3f3f3f3f
#define Swap(a,b) a^=b^=a^=b
#define Max(a,b) (a)>(b)?(a):(b)
#define Min(a,b) (a)<(b)?(a):(b)
using namespace std;
struct node
{
    int d;
    int p;
} Map[N][N],minload[N];
bool visit[N];
node dijkstra(int s, int t, int n)//起点，终点，总点数(编号为1,2...n)
{
    int i, d_min, next, cnt;
    minload[s].d = minload[s].p = 0;
    for (cnt = 1; cnt <= n; ++ cnt)
    {
        d_min = INF;
        for (i = 1; i <= n; ++ i)
        {
            if (!visit[i] && minload[i].d < d_min)
            {
                next = i;
                d_min = minload[i].d;
            }
        }
        visit[next] = true;
        s = next;
        for (i = 1; i <= n; ++ i)
        {
            if (!visit[i] && minload[i].d > minload[s].d + Map[s][i].d)
            {
                minload[i].d = minload[s].d + Map[s][i].d;
                minload[i].p = minload[s].p + Map[s][i].p;
            }
            if (!visit[i] && minload[i].d == minload[s].d + Map[s][i].d && minload[i].p > minload[s].p + Map[s][i].p)
            {
                minload[i].p = minload[s].p + Map[s][i].p;
            }
        }
    }
    return minload[t];
}
int main()
{
    ios::sync_with_stdio(false);
    node resoult;
    int i;
    int n, m, s, t;
    int a, b, d, p;
    while (cin >> n >> m && n + m)
    {
        memset(visit, false, sizeof(visit));
        memset(minload, 0x3f, sizeof(struct node)*N);
        memset(Map,0x3f,sizeof(struct node)*N*N);
        for (i = 0; i < m; ++ i)
        {
            cin >> a >> b >> d >> p;
            if (Map[a][b].d > d)
            {
                Map[b][a].d = Map[a][b].d = d;
                Map[b][a].p = Map[a][b].p = p;
            }
            if (Map[a][b].d == d && Map[b][a].p > p)//这里的判断是关键
                Map[b][a].p = Map[a][b].p = p;
        }
        cin >> s >> t;
        resoult = dijkstra(s, t, n);
        cout << resoult.d << " " << resoult.p << endl;
    }
    return 0;
}

/*
7 12
1 2 1 10
1 4 1 8
1 5 2 2
2 3 3 3
2 5 1 4
2 6 2 20
3 4 3 10
3 5 2 2
3 6 1 7
3 7 1 9
4 5 1 7
6 7 1 10
1 3



*/

