///HDU4267
///方法一：树状数组
#include <iostream>
#include <cstring>
#define N 60000
#define K 11
using namespace std;
int n;
int st[N];
int ct[K][K][N];
int lowbit(int x)
{
    return x&(-x);
}
void modify(int k, int mod, int pos, int c)
{
    while (pos>0)
    {
        ct[pos][k][mod] += c;
        pos -= lowbit(pos);
    }
}
int getsum(int a)
{
    int i, j;
    int result = 0;
    for(i = a; i <= n; i += lowbit(i))
        for(j = 1; j <= 10; ++ j)
            result += ct[i][j][a%j];
    return result;
}
int main()
{
    int a, b, c, k;
    int i, sum;
    int m, num;
    ios::sync_with_stdio(false);
    while (cin >> n)
    {
        memset(st, 0, sizeof(st));
        memset(ct, 0, sizeof(ct));
        for (i = 1; i <= n; ++ i)
            cin >> st[i];
        cin >> m;
        while (m --)
        {
            cin >> num;
            if (1 == num)
            {
                cin >> a >> b >> k >> c;
                modify(k, a%k, b, c);
                modify(k, a%k, a - 1, (-1)*c);
            }
            else if (2 == num)
            {
                cin >> a;
                sum = st[a] + getsum(a);
                cout << sum << endl;
            }
        }
    }
    return 0;
}
