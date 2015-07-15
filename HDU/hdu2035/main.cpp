#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, i, n;
    while (cin >> a >> b && a + b)
    {
        n = 1;
        for (i = 0; i < b; ++ i)
        {
            n *= a;
            n %= 1000;
        }
        cout << n << endl;
    }
    return 0;
}
