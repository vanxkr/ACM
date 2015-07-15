#include <iostream>
#include <algorithm>
#include <string>
#define MAX 1010
using namespace std;
int main()
{
    int i;
    int n, m;
    int str[MAX];
    while (cin >> n >> m )
    {
        for (i = 0; i < n; ++ i)
            str[i] = i + 1;
        for (i = 0; i < m - 1; ++ i)
            next_permutation(str, str + n);
        for (i = 0; i < n; ++ i)
            cout << str[i] << ((i + 1 == n) ? "\n" : " ");
    }
    return 0;
}
