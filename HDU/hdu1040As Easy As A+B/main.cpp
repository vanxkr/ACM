#include <iostream>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main()
{ _
    int t, n, st[1010];
    cin >> t;
    while (t --)
    {
        cin >> n;
        for (int i = 0; i < n; ++ i)
            cin >> st[i];
        sort(st, st + n);
        for (int i = 0; i < n; ++ i)
            cout << st[i] << (i + 1 == n ? "\n" : " ");
    }
    return 0;
}
