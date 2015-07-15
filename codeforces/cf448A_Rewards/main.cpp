#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main()
{ _
    int a1, a2, a3, b1, b2, b3, n, n1, n2;
    while (cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n)
    {
        ceil(a1 + a2 + a3/5) + ceil(b1 + b2 + b3/10) > n ? cout << "NO" << endl : cout << "YES" << endl;
    }
    return 0;
}
