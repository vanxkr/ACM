#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	double stnm[101][11];
	double stnavg[101];
	double stmavg[11];
	int n, m, i, j, sum;
	while (cin >> n >> m)
	{
		memset(stnavg, 0, sizeof(stnavg));
		memset(stmavg, 0, sizeof(stmavg));
		memset(stnm, 0, sizeof(stnm));
		sum = 0;
		for (i = 0; i < n; ++ i)
		{
			for (j = 0; j < m; ++ j)
			{
				cin >> stnm[i][j];
			}
		}
		for (i = 0; i < m; ++ i)
		{
			for (j = 0; j < n; ++ j)
			{
				stmavg[i] += stnm[j][i];
			}
			stmavg[i] /= n;
		}
		for (i = 0; i < n; ++ i)
		{
			for (j = 0; j < m; ++ j)
			{
				stnavg[i] += stnm[i][j];
			}
			stnavg[i] /= m;
		}
		for (i = 0; i < n; ++ i)
		{
			printf("%.2lf%s", stnavg[i], ((i+1) == n ? "\n" : " "));
		}
		for (i = 0; i < m; ++ i)
		{
			printf("%.2lf%s", stmavg[i], ((i+1) == m ? "\n" : " "));
		}
		for (i = 0; i < n; ++ i)
		{
			for (j = 0; j < m; ++ j)
            {
                if (stnm[i][j] < stmavg[j])
                    break;
            }
            if (j == m)
                ++ sum;
		}
		printf("%d\n\n", sum);
	}
	return 0;
}
