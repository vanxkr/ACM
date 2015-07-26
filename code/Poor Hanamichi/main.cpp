#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    _
    int t, r, l, i;
    cin >> t;
    while (t --)
    {
        cin >> l >> r;
        for (i = l; i <= r; ++ i)
        {
            if (i%11 == 3 && (i - l + 1)%11 == 0)
            {
                cout << i << endl;
                break;
            }
        }
        if (i > r)
            cout << "-1" << endl;
    }
    return 0;
}
