#include <iostream>
#include <cstring>
#include <cstdio>

#define N 11

using namespace std;

bool flage;///��¼ �ظ� ·��
int m, n;///���̳���
int st[N][N];///���� ��ͼ
int k;///��¼·������

bool bfs(int x, int y, int num);///8����������
bool cmp(int x, int y);///�жϳ���
void _cout();///���

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

        if (bfs(x - 1, y - 2, num + 1))///������ 1
            return true;
        else if (cmp(x - 1, y - 2) && st[x - 1][y - 2] > num)
            st[x - 1][y - 2] = 0, flage = true;

        if (bfs(x + 1, y - 2, num + 1))///������ 2
            return true;
        else if (cmp(x + 1, y - 2) && st[x + 1][y - 2] > num)
            st[x + 1][y - 2] = 0, flage = true;

        if (bfs(x + 2, y - 1, num + 1))///������ 3
            return true;
        else if (cmp(x + 2, y - 1) && st[x + 2][y - 1] > num)
            st[x + 2][y - 1] = 0, flage = true;

        if (bfs(x + 2, y + 1, num + 1))///������ 4
            return true;
        else if (cmp(x + 2, y + 1) && st[x + 2][y + 1] > num)
            st[x + 2][y + 1] = 0, flage = true;

        if (bfs(x + 1, y + 2, num + 1))///������ 5
            return true;
        else if (cmp(x + 1, y + 2) && st[x + 1][y + 2] > num)
            st[x + 1][y + 2] = 0, flage = true;

        if (bfs(x - 1, y + 2, num + 1))///������ 6
            return true;
        else if (cmp(x - 1, y + 2) && st[x - 1][y + 2] > num)
            st[x - 1][y + 2] = 0, flage = true;

        if (bfs(x - 2, y + 1, num + 1))///������ 7
            return true;
        else if (cmp(x - 2, y + 1) && st[x - 2][y + 1] > num)
            st[x - 2][y + 1] = 0, flage = true;

        if (bfs(x - 2, y - 1, num + 1))///������ 8
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

