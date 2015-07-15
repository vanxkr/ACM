#include <iostream>
#include <cstdlib>
using namespace std;

struct time
{
    int start;
    int _end;
};

int cmp(const void *a, const void *b)
{
    time ta = *(time*)a;
    time tb = *(time*)b;
    if (ta._end == tb._end)
        return ta.start - tb.start;
    else
        return ta._end - tb._end;
}
int main()
{
    time ti[101];
    int n, i, num, temp;
    while (cin >> n, n)
    {
        for (i = 0; i < n; ++ i)
            cin >> ti[i].start >> ti[i]._end;
        qsort(ti, n, sizeof(time), cmp);
        for (i = num = temp = 0; i < n; ++ i)
            if (ti[i].start >= temp)
            {
                temp = ti[i]._end;
                ++ num;
            }
        cout << num << endl;

    }
    return 0;
}
