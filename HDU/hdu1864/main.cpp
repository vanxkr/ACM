#include <cstdio>
#include <cstring>
#define max(a,b) (a)>(b)?(a):(b)
int main()
{
    bool flag;
    double Max;
    double A, B, C;
    char ch;
    double temp;
    double invoice[35];
    double dp[35];
    int line_n;
    int i, j;
    int N, n;
    double Q;
    while (scanf("%lf%d", &Q, &N), N)
    {
        memset(invoice, 0, sizeof(invoice));
        memset(dp, 0, sizeof(dp));
        n = N + 1;
        for (i = 1; i < n; ++ i)
        {
            flag = true;
            A = B = C = 0;
            scanf("%d", &line_n);
            for (j = 0; j < line_n; ++ j)
            {
                scanf("\n%c:%lf", &ch, &temp);
                if ('A' == ch)
                    A += temp;
                else if ('B' == ch)
                    B += temp;
                else if ('C' == ch)
                    C += temp;
                if (A > 600 || B > 600 || C > 600 || A + B + C > 1000 || ('A' != ch && 'B' != ch && 'C' != ch))
                {
                    flag = false;
                    -- n;
                    -- i;
                    break;
                }
            }
            if (flag)
                invoice[i] = A + B + C;
        }
        for(i=1;i<n;i++)
		{
			for(j=i-1;j>=0;j--)
			if(dp[j]+invoice[i]<=Q )
			 dp[i] = max(dp[i],dp[j]+invoice[i]);
		}
		Max = 0;
		for(i=1;i<n;i++)
		if(dp[i] > Max)Max = dp[i];
		printf("%.2f\n",Max);


    }
    return 0;
}
