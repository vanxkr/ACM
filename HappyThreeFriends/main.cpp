#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int st[6];
    int t, i, sum_a, sum_b;
    cin >> t;
    while (t --)
    {
        for (i = 0; i < 6; ++ i)
            cin >> st[i];
        sort(st, st + 6);
        sum_a = st[5] + st[4];
        sum_b = st[3] + st[2] + st[1];
        if (sum_a <= sum_b)
            cout << "What a sad story!" << endl;
        else
            cout << "Grandpa Shawn is the Winner!" << endl;
    }
    return 0;
}
