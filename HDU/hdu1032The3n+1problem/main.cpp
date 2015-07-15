#include <cstdio>
using namespace std;
int main()
{
    int i, j, t;
    int maxx, num;
    while (scanf("%d%d", &i, &j) != EOF)
    {
        printf("%d %d ", i, j);
        maxx = 0;
        if (i > j)
            i ^= j ^= i ^= j;
        while (i <= j)
        {
            num = 1;
            t = i;
            while (t != 1)
            {
                t = t & 1 ? t*3 + 1 : t >> 1;
                ++ num;
            }
            maxx = maxx > num ? maxx : num;
            ++ i;
        }
        printf("%d\n", maxx);
    }
    return 0;
}
