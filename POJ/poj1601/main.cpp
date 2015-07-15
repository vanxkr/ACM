#include <iostream>
#include <cstdio>

using namespace std;

__int64 gcd(__int64 x, __int64 y)
{
    if(0 == y)
    {
        return x;
    }
    return gcd(y, x%y);
}

void exgcd(__int64 a, __int64 b, __int64 &x, __int64 &y)
{
    if (!b)
    {
        x = 1;
        y = 0;
    }
    else
    {
        exgcd(b, a%b, y, x);
        y -= x*(a/b);
    }
}

int main()
{
    __int64 x, y, m, n, L;
    while (scanf("%I64d%I64d%I64d%I64d%I64d", &x, &y, &m, &n, &L) != EOF)
    {
        __int64 a = n - m, b = L, c = x - y, p, q;
        __int64 d = gcd(a, b);
        if(c%d)
        {
            printf("Impossible\n");
            continue;
        }
        a /= d, b /= d, c /= d;
        exgcd(a, b, p, q);
        p *= c;
        __int64 t= p%b;
        while(t < 0)
        {
            t += b;
        }
        printf("%I64d\n", t);
    }
    return 0;
}
