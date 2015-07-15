#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n, a, b, i;
    while (cin >> n, n)
    {
        a = 0;
        for (i = 0; i < n; ++ i)
        {
            cin >> b;
            a ^= b;
        }
        cout << a << endl;
    }
    return 0;
}
