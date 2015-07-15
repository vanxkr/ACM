#include <iostream>
#include <cstring>
#include <queue>
#define N 50
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
struct point2
{
    int x, y;
    int time;
};
point start;
int n, m;
char _map[N][N];
char temp[N][N];
int dir[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
int bfs();
int main()
{
    int i, t;
    char *p;
    cin >> t;
    while (t --)
    {
        cin >> n >> m;
        for (i = 0; i < m; ++ i)
        {
            cin >> _map[i];
            if (p = strchr(_map[i], 'S'))
            {
                start.x = i;
                start.y = p - _map[i];
                start.time = 1;
            }
        }

            memcpy(temp, _map, );
        cout << lbfs() << endl;
        for (i = 0; i < m; ++ i)
            strcpy(temp[i], _map[i]);
        cout << rbfs() << endl;
        for (i = 0; i < m; ++ i)
            strcpy(temp[i], _map[i]);
        cout << bfs() << endl;
    }
    return 0;
}
int lbfs()
{
    queue<point> que;
    point cur, next;
    int i;
    point2 start2 = start;
    temp[start2.x][start2.y] = '#';
    que.push(start2);
    while (!que.empty())
    {
        cur = que.top();
        que.pop();
        next.x = cur.x + dir[i][0];
        next.y = cur.y + dir[i][1];
        next.time = cur.time + 1;
        if (next.x >= 0 && next.x < m && next.y >=0 && next.y < n && temp[next.x][next.y] != '#')
        {
            if ('E' == temp[next.x][next.y])
                return next.time;
            else if ('.' == temp[next.x][next.y])
            {
                temp[next.x][next.y] = '#';
                que.push(next);
            }
        }
    }
    return -1;
}
int rbfs()
{
    queue<point> que;
    point cur, next;
    int i;
    temp[start.x][start.y] = '#';
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
            if (next.x >= 0 && next.x < m && next.y >=0 && next.y < n && temp[next.x][next.y] != '#')
            {
                if ('E' == temp[next.x][next.y])
                    return next.time;
                else if ('.' == temp[next.x][next.y])
                {
                    temp[next.x][next.y] = '#';
                    que.push(next);
                }
            }
        }
    }
    return -1;
}
int bfs()
{
    priority_queue<point> que;
    point cur, next;
    int i;
    temp[start.x][start.y] = '#';
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
            if (next.x >= 0 && next.x < m && next.y >=0 && next.y < n && temp[next.x][next.y] != '#')
            {
                if ('E' == temp[next.x][next.y])
                    return next.time;
                else if ('.' == temp[next.x][next.y])
                {
                    temp[next.x][next.y] = '#';
                    que.push(next);
                }
            }
        }
    }
    return -1;
}
