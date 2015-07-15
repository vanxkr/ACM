#include <iostream>
#include <cmath>
using namespace std;
int divisor_add(int n)
{
    int i;
    int sum = 1;
    for (i = 2; i <= sqrt(n); ++ i)
        if (0 == n%i)
            if (i == n/i)
                sum += i;
            else
                sum += i + n/i;
    return sum;
}
int main()
{
    int a, b;
    int t;
    cin >> t;
    while (t --)
    {
        cin >> a >> b;
        if (a == divisor_add(b) && b == divisor_add(a))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
