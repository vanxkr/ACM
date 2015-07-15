#include <iostream>
#include <cstdio>

using namespace std;

int st[100001];

int main()
{
    int num, number, i, sum1, sum2, t;
    int _begin, _end;
    int k = 0;
    cin >> num;
    while (num --)
    {
        ++ k;
        t = _begin = _end = 1;
        scanf("%d", &number);
        for (i = 0; i < number; ++ i) scanf("%d", &st[i]);
        sum1 = sum2 = st[0];
        for (i = 1; i < number; ++ i)
        {
            if (sum1 >= 0) sum1 += st[i];
            if (sum1 < st[i]) sum1 = st[i], t = i + 1;
            if (sum1 > sum2) sum2 = sum1, _begin = t, _end = i + 1;
        }
        printf("Case %d:\n%d %d %d\n", k, sum2, _begin, _end);
        if(num)
            printf("\n");
    }
    return 0;
}
