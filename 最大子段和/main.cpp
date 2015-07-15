#include <iostream>

using namespace std;

int maxSum(int a[], int n);

int main()
{
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
    int sum = 0;
    int b = 0;
    for(int i = 0; i < n; i ++)
    {
        if(b > 0)
            b += a[i];
        else
            b = a[i];
        if(b > sum)
            sum = b;
    }
    return sum;

}
