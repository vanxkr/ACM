#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main()
{
    _
    int m, n;
    while (cin >> m >> n)
    {
        for (int i = 0; i < n + 2; ++ i)
        {
            if (0 == i || i == n + 1)
            {
                cout << "+";
                for (int j = 0; j < m; ++ j)
                    cout << "-";
                cout << "+" << endl;
            }
            else
            {
                cout << "|";
                for (int j = 0; j < m; ++ j)
                    cout << " ";
                cout << "|" << endl;
            }
        }
        cout << endl;
    }
    return 0;
}
