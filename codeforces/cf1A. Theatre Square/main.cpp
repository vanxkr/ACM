#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{ _
    int n, m;
    double a;
    while (cin >> n >> m >> a)
    {
        __int64 num;
        num = (__int64)ceil(n/a)*ceil(m/a);
        cout << num << endl;
    }
    return 0;
}
