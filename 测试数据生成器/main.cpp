#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <time.h>

#define random(x) (rand()%x)

int main(void)
{
    freopen("in.txt", "w", stdout);

    int num;
    int border;
    int m, n;
    int i, j;
    int m1, n1;

    srand((unsigned)time(NULL));

    scanf("%d", &num);
    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &border);
    ///printf("%d\n", num);///num
    while (num --)
    {
        ///m1 = random(m - 1) + 1;
        ///n1 = random(n - 1) + 1;
        ///printf("%d %d\n", m1, n1);///m n
        ///printf("%d\n", m1);///m
        ///printf("%d\n", n1);///n
        for (i = 0; i < m; ++ i)
            ///for (i = 0; i < m1; ++ i)
        {
            ///n1 = random(n - 1) + 1;
            for (j = 0; j < n; ++ j)
            ///for (j = 0; j < n1; ++ j)
            {
                printf("%d%s", random(border), (j + 1) == n ? "\n" : " ");
                ///printf("%d%s", random(border), (j + 1) == n1 ? "\n" : " ");
//                        printf("%lf%s", (random(border)+///ÕûÊý
//                                    (rand()%border)/(border*1.0)+///.x
//                                    (rand()%border)/(border*10.0)+///.0x
//                                    (rand()%border)/(border*100.0)+///.00x
//                                    (rand()%border)/(border*1000.0)+///.000x
//                                    (rand()%border)/(border*10000.0)+///.0000x
//                                    (rand()%border)/(border*100000.0)),///.00000x
//                                    (j + 1) == n ? "\n" : " ");
//                                    ///(j + 1) == n1 ? "\n" : " ");
            }
        }
    }
    return 0;
}
