#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    _
    char st[110][110];
    int dir[4][2] = {{1, 0},{-1, 0},{0, 1},{0, -1}};
    int n, num;
    bool flag;
    int i, j, k;
    while (cin >> n)
    {
        flag = true;
        for (i = 0; i < n; ++ i)
            cin >> st[i];
        for (i = 0; i < n && flag; ++ i)
            for (j = 0; j < n; ++ j)
            {
                for (k = 0; k < 4; ++ k)
                    if (i+dir[k][0]>=0&&i+dir[k][0]<n&&j+dir[k][1]>=0&&j+dir[k][1]<n&&'o'==st[i+dir[k][0]][j+dir[k][1]])
                        ++ num;
                if (num & 1)
                {
                    flag = false;
                    break;
                }
            }
        flag ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}
