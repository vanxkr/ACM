#include <iostream>
#include <cstring>
#include <cstdio>

#define N 11

using namespace std;

bool flage;///记录 重复 路径
int m, n;///棋盘长宽
int st[N][N];///棋盘 地图
int k;///记录路径条数

bool bfs(int x, int y, int num);///8个方向搜索
bool cmp(int x, int y);///判断出界
void _cout();///输出

int main()
{
///    freopen("data1009.in", "r", stdin);
   //freopen("out.txt", "w", stdout);
    int x, y;
    while (cin >> m >> n >> x >> y)
    {
        k = 0;
        flage = true;
        memset(st, 0, sizeof(st));
        bfs(x, y, 1);
    }
    return 0;
}

bool cmp(int x, int y)
{
    if (x < 0 || x >= m)
        return false;
    if (y < 0|| y >= n)
        return false;
    return true;
}

void _cout()
{
    cout << ++ k << ": " << endl;
    for (int i = 0; i < m; ++ i)
        for (int j = 0; j < n; ++ j)
            printf("%3d%s", st[i][j], ((j + 1) == n ? "\n" : ""));
    cout << endl;
}

bool bfs(int x, int y, int num)
{
    if (m*n == num - 1)
    {
        if (flage)
        {
            _cout();
            flage = false;
        }
        return false;
    }
    if (cmp(x, y) && 0 == st[x][y])
    {
        st[x][y] = num;

        if (bfs(x - 1, y - 2, num + 1))///左上上 1
            return true;
        else if (cmp(x - 1, y - 2) && st[x - 1][y - 2] > num)
            st[x - 1][y - 2] = 0, flage = true;

        if (bfs(x + 1, y - 2, num + 1))///右上上 2
            return true;
        else if (cmp(x + 1, y - 2) && st[x + 1][y - 2] > num)
            st[x + 1][y - 2] = 0, flage = true;

        if (bfs(x + 2, y - 1, num + 1))///右右上 3
            return true;
        else if (cmp(x + 2, y - 1) && st[x + 2][y - 1] > num)
            st[x + 2][y - 1] = 0, flage = true;

        if (bfs(x + 2, y + 1, num + 1))///右右下 4
            return true;
        else if (cmp(x + 2, y + 1) && st[x + 2][y + 1] > num)
            st[x + 2][y + 1] = 0, flage = true;

        if (bfs(x + 1, y + 2, num + 1))///右下下 5
            return true;
        else if (cmp(x + 1, y + 2) && st[x + 1][y + 2] > num)
            st[x + 1][y + 2] = 0, flage = true;

        if (bfs(x - 1, y + 2, num + 1))///左下下 6
            return true;
        else if (cmp(x - 1, y + 2) && st[x - 1][y + 2] > num)
            st[x - 1][y + 2] = 0, flage = true;

        if (bfs(x - 2, y + 1, num + 1))///左左下 7
            return true;
        else if (cmp(x - 2, y + 1) && st[x - 2][y + 1] > num)
            st[x - 2][y + 1] = 0, flage = true;

        if (bfs(x - 2, y - 1, num + 1))///左左上 8
            return true;
        else if (cmp(x - 2, y - 1) && st[x - 2][y - 1] > num)
        {
            st[x - 2][y - 1] = 0;
            flage = true;
        }
        return false;
    }
    else
        return false;
}

