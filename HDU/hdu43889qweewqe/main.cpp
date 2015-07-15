#include"cstdio"
#include"iostream"
#include"queue"
#include"algorithm"
#include"set"
#include"queue"
#include"cmath"
#include"string.h"
#include"vector"
using namespace std;

__int64 abs(__int64 x)
{
    return x>0?x:-x;
}

__int64 gcd(__int64 a,__int64 b)
{
    if(a>b)
        swap(a,b);
    while(a)
    {
        b%=a;
        swap(a,b);
    }
    return b;
}

int main()
{
    __int64 T, i, j;
    scanf("%I64d", &T);
    for(__int64 t = 1; t <= T; t++)
    {
        char a[1005], b[1005];
        scanf("%s %s", a, b);
        printf("Case #%I64d:\n", t);
        __int64 len = strlen(a);
        __int64 ga = 0, fa = 0, gb = 0, fb = 0;
        for (i = 1; i<=len; i++)
        {
            if (strncmp(a, a+len-i, i) == 0)
                ga |= (__int64)1 << i;
            if (strncmp(a, b+len-i, i) == 0)
                fa |= (__int64)1 << i;
            if (strncmp(b, a+len-i, i) == 0)
                gb |= (__int64)1 << i;
            if (strncmp(b, b+len-i, i) == 0)
                fb |= (__int64)1 << i;
        }
        __int64 dou1 = abs(ga - gb);
        __int64 dou2 = abs(fb - fa);

        if (dou1 == dou2)
        {
            puts("1/2");
            continue;
        }
        if (dou1 == 0)
        {
            puts("1");
            continue;
        }
        if (dou2 == 0)
        {
            puts("0");
            continue;
        }
        __int64 GCD = gcd(dou1, dou2);
        dou1 /= GCD;
        dou2 /= GCD;
        printf("%I64d/%I64d\n", dou2, dou1+dou2);
    }
    return 0;
}
