#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
#include <stack>
#define N 110
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
struct roads
{
    int x;
    int y;
};
point start;
roads road[N][N];
char _map[N][N];
bool flag[N][N];
int n, m;
int dir[4][2] = {1, 0, -1, 0, 0, 1, 0, -1};
int bfs();
int main()
{
    int i, t, x, y;
    while (cin >> n >> m)
    {
        memset(flag, true, sizeof(flag));
        for (i = 0; i < n; ++ i)
            cin >> _map[i];
        start.x = start.y = start.time = 0;
        t = bfs();
        if (-1 == t)
            cout << "God please help our poor hero." << endl;
        else
        {
            cout << "It takes " << t << " seconds to reach the target position, let me show you the way." << endl;
            stack<point> st;
            point now;
            now.x = n - 1;
            now.y = m - 1;
            while (now.x != 0 || now.y != 0)
            {
                st.push(now);
                x = road[now.x][now.y].x;
                y = road[now.x][now.y].y;
                now.x = x;
                now.y = y;
            }
            t = 1;
            cout << t ++ << "s:(0,0)";
            while (!st.empty())
            {
                now = st.top();
                st.pop();
                cout << "->(" << now.x << "," << now.y << ")" << endl;
                if (isdigit(_map[now.x][now.y]))
                {
                    int num, i;
                    num = _map[now.x][now.y] - '0';
                    for (i = 0; i < num; ++ i)
                        cout << t ++ << "s:FIGHT AT (" << now.x << "," << now.y << ")" << endl;
                }
                if (now.x == n - 1 && now.y == m - 1)
                    continue;
                cout << t ++ << "s:(" << now.x << "," << now.y << ")";
            }
        }
        cout << "FINISH" << endl;
    }
    return 0;
}
int bfs()
{
    int i;
    priority_queue<point> que;
    point cur, next;
    _map[start.x][start.y] = 'X';
    que.push(start);
    while (!que.empty())
    {
        cur = que.top();
        que.pop();
        for (i = 0; i < 4; ++ i)
        {
            next.x = cur.x + dir[i][0];
            next.y = cur.y + dir[i][1];
            next.time = cur.time + 1;
            if (next.x >= 0 && next.x < n && next.y >= 0 && next.y < m && flag[next.x][next.y])
            {
                if ('.' == _map[next.x][next.y])
                {
                    road[next.x][next.y].x = cur.x;
                    road[next.x][next.y].y = cur.y;
                    flag[next.x][next.y] = false;
                    que.push(next);
                }
                else if (isdigit(_map[next.x][next.y]))
                {
                    next.time += _map[next.x][next.y] - '0';
                    flag[next.x][next.y] = false;
                    road[next.x][next.y].x = cur.x;
                    road[next.x][next.y].y = cur.y;
                    que.push(next);
                }
            }
            if (next.x == n - 1 && next.y == m - 1)
                return next.time;
        }
    }
    return -1;
}
