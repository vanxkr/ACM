#include <iostream>
#include <cstdio>
#include <time.h>
using namespace std;
int st[100001];
int main()
{
    freopen("D:\\Users\\xyx_0\\Desktop\\code\\in.txt", "r", stdin);
    freopen("D:\\Users\\xyx_0\\Desktop\\code\\out.txt", "w", stdout);
    int num;
    int time, i;
    time = clock();
    while (cin >> num)
    {
        for (i = 0; i < num; ++ i)
            cin >> st[i];
        for (i = 0; i < num; ++ i)
            cout << st[i] << ((i + 1 == num) ? "\n" : " ");
            ///printf("%d%s", st[i], ((i + 1 == num) ? "\n" : " "));
    }
    time = clock() - time;
    cout << time << endl;
    return 0;
}
///10000 100000 1000000
///ios::sync_with_stdio(false);
///cin        + cout   : 200176ms
///cin        + cout   : 427488ms
///cin        + printf : 423428ms
///scanf!=EOF + cout   : 149192ms
///~scanf     + cout   : 154723ms
///~scanf     + printf : 145728ms
///scanf!=EOF + printf : 149429ms
