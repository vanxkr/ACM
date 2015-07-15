#include <iostream>

using namespace std;

int main()
{
    __int64 st[45] = {1, 3, 8};
    int n, i;
    for (i = 3; i < 42; ++ i)
        st[i] = (st[i - 1] + st[i - 2]) << 1;
    while (cin >> n)
        cout << st[n] << endl;
    return 0;
}
