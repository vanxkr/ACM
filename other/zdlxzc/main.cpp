#include <iostream>

using namespace std;

int main()
{
    int st[105];
    int len, i, sum, _max;
    while (cin >> len)
    {
        for (i = 0; i < len; ++ i)
            cin >> st[i];
        sum = _max = st[0];
        for (i = 1; i < len; ++ i)
        {
            if (sum > 0)
                sum += st[i];
            else
                sum = st[i];
            if (sum > _max)
                _max = sum;
        }
        cout << _max << endl;
    }
    return 0;
}
