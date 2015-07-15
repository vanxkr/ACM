#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main()
{
    _
    int n, k;
    long long sum;
    char ch;
    int st[27];
    while (cin >> n >> k)
    {
        sum = 0;
        memset(st, 0, sizeof(st));
        for (int i = 0; i < n; ++ i)
        {
            cin >> ch;
            ++st[ch-'A'];
        }
        sort(st, st+26);
        reverse(st, st+26);
        for (int i = 0; i < 26; ++ i)
        {
            if (k > st[i])
            {
                sum += (long long)st[i]*st[i];
                k -= st[i];
            }
            else
            {
                sum += (long long)k*k;
                break;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
