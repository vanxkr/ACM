#include <iostream>
#include <cstring>
#include <queue>
#define N 210
using namespace std;
struct point
{
    int x, y;
    int time;
    bool operator < (const point &a)const
    {
        return time > a.time;
    }
};
point start;
int n, m;
char _map[N][N];
int dir[][2] = {1, 0, -1, 0, 0, 1, 0, -1};
int bfs();
int main()
{
    int i, ans;
    char *p;
    while (cin >> n >> m)
    {
        for (i = 0; i < n; ++ i)
        {
            cin >> _map[i];
            if (p = strchr(_map[i], 'a'))
            {
                start.x = i;
                start.y = p - _map[i];
                start.time = 0;
            }
        }
        ans = bfs();
        if (-1 == ans)
            cout << "Poor ANGEL has to stay in the prison all his life." << endl;
        else
            cout << ans << endl;
    }
    return 0;
}
int bfs()
{
    priority_queue<point> que;
    point cur, next;
    int i;
    _map[start.x][start.y] = '#';
    que.push(start);
    while (!que.empty())
    {
        cur = que.top(); ///由优先队列自动完成出队时间最少的元素
        que.pop();///删除该元素
        for (i = 0; i < 4; ++ i)
        {
            next.x = cur.x + dir[i][0];
            next.y = cur.y + dir[i][1];
            next.time = cur.time + 1;
            if (next.x >= 0 && next.x < n && next.y >=0 && next.y < m)
            {
                if ('r' == _map[next.x][next.y])
                    return next.time;
                else if ('.' == _map[next.x][next.y])
                {
                    _map[next.x][next.y] = '#';
                    que.push(next);
                }
                else if ('x' == _map[next.x][next.y])
                {
                    _map[next.x][next.y] = '#';
                    ++ next.time;
                    que.push(next);
                }
            }
        }
    }
    return -1;
}



























