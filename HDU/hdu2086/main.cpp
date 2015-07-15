#include <cstdio>
double c[3010];
double fun(int n);
int main()
{
    int i;
    double a0, an1;
    int n;
    while (~scanf("%d", &n))
    {
        scanf("%lf%lf", &a0, &an1);
        for (i = 1; i <= n; ++ i)
            scanf("%lf", &c[i]);
        printf("%.2lf\n", (n*a0 + an1 - fun(n))/(n + 1));
    }
    return 0;
}

double fun(int n)
{
    int i;
    double sum = 0;
    for (i = 1; i <= n; ++ i)
        sum += c[i]*(n - i + 1);
    return 2.0*sum;
}
