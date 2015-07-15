#include <cstdio>
int main()
{
    int a[122][122],n,i,j;
    for(i=0; i<121; i++)
    {
        a[i][0]=1;
        a[i][1]=1;
        a[0][i]=1;
        a[1][i]=1;
    }
    for(i=2; i<121; i++)
        for(j=2; j<121; j++)
            if(i>=j)
                a[i][j]=a[i][j-1]+a[i-j][j];
            else
                a[i][j]=a[i][i];
    while(scanf("%d",&n)==1)
        printf("%d\n",a[n][n]);
    return 0;
}

