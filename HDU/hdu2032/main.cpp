#include <iostream>

using namespace std;

int main()
{
    int n;
    int i, j;
    int st[31][31];
    for (i = 0 ; i < 31; ++ i)
    {
        st[i][0] = 1;
        st[i][i] = 1;
    }
    for (i = 2; i < 31; ++ i)
        for (j = 1; j < i; ++ j)
            st[i][j] = st[i - 1][j - 1] + st[i - 1][j];
    while (cin >> n)
    {
        for (i = 0; i < n; ++ i)
            for (j = 0; j <= i; ++ j)
                cout << st[i][j] << ((j == i) ? "\n" : " ");
        cout << endl;
    }
    return 0;
}
