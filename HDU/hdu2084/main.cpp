#include <iostream>
#include <cstring>
#include <algorithm>
#define N 110
using namespace std;
int st[N][N];
bool samest[N][N];
int main(void)
{
    int n, i, j, t;
    cin >> t;
    while (t --)
    {
        cin >> n;
        memset(samest, false, sizeof(samest));
        for (i = 0; i < n; ++ i)
            for (j = 0; j <= i; ++ j)
                cin >> st[i][j];
        for(i = n - 1; i > 0; -- i)
        {
            for(j = 0; j <= i; ++ j)
            {
                if(st[i][j] >= st[i][j + 1])
                    st[i - 1][j] += st[i][j];
                else
                    st[i - 1][j] += st[i][j + 1];
            }
        }
        cout << st[0][0] << endl;
    }
}
