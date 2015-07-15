#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int maxSum(int a[], int n);

int main()
{
//    freopen("D:\\Users\\xyx_0\\Desktop\\code\\in.txt", "r", stdin);
//    freopen("D:\\Users\\xyx_0\\Desktop\\code\\my.txt", "w", stdout);
    int st[1001], n, i;
    while (cin >> n, n)
    {
        for (i = 0; i < n; ++ i)
        {
            cin >> st[i];
        }
        cout << maxSum(st, n) << endl;
    }

    return 0;
}

int maxSum(int a[], int n)
{
    int i, j;
    int sum = 0;
    int b[1001] = {0};
    for(i = 0; i < n; i ++)
    {
        if (1 == n)
            sum = a[0];
        else
        {
            b[i] = a[i];
            for (j = 0; j < i; ++ j)
            {
                if(a[i] > a[j])
                    b[i] = max(b[i], b[j] + a[i]);
            }
        }
        if(b[i] > sum)
            sum = b[i];
    }
    return sum;
}
