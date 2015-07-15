#include <cstdio>
#include <cstring>
char st[27];
int stn[27];
int main()
{
    char ch;
    int t, i, n;
    scanf("%d", &t);
    getchar();
    while (t --)
    {
        n = -1;
        memset(st, '\0', sizeof(st));
        memset(stn, 0, sizeof(stn));
        while (scanf("%c", &ch) && '\n' != ch)
        {
            if (-1 == n || ch != st[n])
            {
                st[++ n] = ch;
                ++ stn[n];
            }
            else
                ++ stn[n];
        }
        for (i = 0; st[i]; ++ i)
        {
            if (1 == stn[i])
                printf("%c", st[i]);
            else
                printf("%d%c", stn[i], st[i]);
        }
        printf("\n");
    }
    return 0;
}
