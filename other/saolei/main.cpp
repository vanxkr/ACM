#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define MAX 110
using namespace std;
bool decide(int x, int y, int m, int n, char Map[MAX][MAX])
{
    if (x >= 0 && x < m && y >= 0 && y < n && '*' == Map[x][y])
        return true;
    else
        return false;
}
int main()
{ _
    int dir[8][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
    char Map[MAX][MAX], num[MAX][MAX];
    int m, n, i, j, k;
    while (cin >> m >> n && m + n)
    {
        for (i = 0; i < m; ++ i)
            for (j = 0; j < n; ++ j)
                num[i][j] = '0';
        for (i = 0; i < m; ++ i)
                cin >> Map[i];
        for (i = 0; i < m; ++ i)
        {
            for (j = 0; j < n; ++ j)
            {
                if ('*' == Map[i][j])
                    num[i][j] = '*';
                else
                    for (k = 0; k < 8; ++ k)
                        if (decide(i + dir[k][0], j + dir[k][1], m, n, Map))
                            ++ num[i][j];
            }
        }
        for (i = 0; i < m; ++ i)
            cout << num[i] << endl;
    }
    return 0;
}
