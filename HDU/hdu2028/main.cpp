#include <iostream>
#define N 10010
using namespace std;
__int64 num;
int st[N];
int n;
int gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a%b);
}
void gcd2(int k)
{
    if (k == n)
        cout << num << endl;
    else
    {
        int temp = num*st[k]/gcd(num, st[k]);
        num = temp;
        gcd2(k + 1);
    }
}
int main()
{
    int i;
    while (cin >> n)
    {
        for (i = 0; i < n; ++ i)
            cin >> st[i];
        num = st[0]*st[1]/gcd(st[0], st[1]);
        gcd2(2);
    }
    return 0;
}
