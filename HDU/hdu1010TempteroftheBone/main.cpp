#include <iostream>
#include <cstring>
#include <cstdio>
#define N 10
using namespace std;
bool flag;
int n, m, time;
int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
char _map[N][N];
void dfs(int x, int y, int time);
int main(void)
{
    freopen("out.txt", "w", stdout);
    char *p;
    int x, y, t;
    int i;
    while (cin >> n >> m >> time, n + m + time)
    {
        flag = false;
        for (i = 0; i < n; ++ i)
        {
            cin >> _map[i];
            if (p = strchr(_map[i], 'S'))
            {
                x = i;
                y = p - _map[i];
                t = 0;
                _map[x][y] = 'X';
            }
        }
        dfs(x, y, t);
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
void dfs(int x, int y, int t)
{
    int i;
    if (_map[x][y] == 'D' && t == time)
    {
        flag = true;
        return;
    }
    else if (x < 0 || x >= n || y < 0 || y >= m || _map[x][y] == 'X')
        return;
    else
    {
        for (i = 0; i < 4; ++ i)
        {
            x += dir[i][0];
            y += dir[i][1];
            if (x >= 0 && x < n && y >=0 && y < m)
            {
                _map[x][y]='X';
                dfs(x, y, time + 1);
                _map[x][y]='.';
            }
        }
    }
}
