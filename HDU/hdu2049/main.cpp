///hdu2049
///N���»��,������M�������Ҵ�������,�����������һ���ж����ֿ���.
include<stdio.h>
int main()
{
    int c, i, n, m;
    __int64 a[21] = {0,0,1,2};
    for(i=4; i<21; i++)
        a[i]=(i-1)*(a[i-1]+a[i-2]);
    scanf("%d",&c);
    while(c--)
    {
        __int64 x = 1, y = 1;
        scanf("%d%d",&n,&m);
        for(i=n; i>n-m; i--)
            x*=i;
        for(i=2; i<=m; i++)
            y*=i;
        printf("%I64d\n",x/y*a[m]);
    }
    return 0;
}
