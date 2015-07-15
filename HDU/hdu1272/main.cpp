#include <iostream>
#include <algorithm>
#include <cstring>
#define MAX 100010
using namespace std;
int father[MAX];
int edge[MAX];
bool flag[MAX];
bool flagring;
void init(void);
int findset(int x);
void unionf(int x, int y);
int main(void)
{
    int a, b, i, k, n;
    n = 0;
    ios::sync_with_stdio(false);
    while (cin >> a >> b)
    {
        if (a < 0 && b < 0)
            break;
        k = 0;
        flagring = false;
        init();
        memset(flag, false, sizeof(flag));
        memset(edge, 0, sizeof(edge));
        if (0 == a && 0 == b)
        {
            cout << "Case " << ++ n << " is a tree." << endl;
            continue;
        }
        flag[a] = true;
        flag[b] = true;
        unionf(a, b);
        ++ edge[b];
        while (cin >> a >> b && a + b)
        {
            flag[a] = true;
            flag[b] = true;
            unionf(a, b);
            ++ edge[b];
        }
        sort(edge, edge + MAX);
            if (edge[MAX - 1] > 1)
                flagring = true;
        for (i = 0; i < MAX; ++ i)
                if (flag[i] && i == father[i])
                {
                    ++ k;
                    if(k > 1)
                    {
                        flagring = true;
                        break;
                    }
                }
        if (flagring)
            cout << "Case " << ++ n << " is not a tree." << endl;
        else
            cout << "Case " << ++ n << " is a tree." << endl;
    }
    return 0;;
}
void init(void)
{
    int i;
    for (i = 0; i < MAX; ++ i)
        father[i] = i;
}
int findset(int x)
{
    while (x != father[x])
        x = father[x];
    return x;
}
void unionf(int x, int y)
{
    x = findset(x);
    y = findset(y);
    if (x != y)
        father[x] = y;
    else
        flagring = true;
}
