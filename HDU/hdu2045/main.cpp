#include <iostream>

using namespace std;

int main()
{
    int n;
    int i;
    __int64 stn[55] = {3, 6, 6};
    for (i = 3; i < 51; ++ i)
        stn[i] = stn[i - 1] + stn[i - 2]*2;
    while (cin >> n)
        cout << stn[n - 1] << endl;
    return 0;
}
