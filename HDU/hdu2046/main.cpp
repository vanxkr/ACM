#include <iostream>

using namespace std;

int main()
{
    __int64 stn[55] = {0, 1, 2};
    int n, i;
    for (i = 3; i < 51; ++ i)
        stn[i] = stn[i - 1] + stn[i - 2];
    while (cin >> n)
        cout << stn[n] << endl;
    return 0;
}
