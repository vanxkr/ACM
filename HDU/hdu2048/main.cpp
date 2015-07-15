#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,j, num;
    double a[21],t;
    a[1]=0;a[2]=1;
    for(i=3;i<=20;i++)
        a[i]=(i-1)*(a[i-1]+a[i-2]);
    scanf("%d", &num);
    while(num --)
    {
        scanf("%d",&j);
        t=1;
        for(i=1;i<=j;i++) t*=i;
        printf("%.2lf%%\n",100*a[j]/t);
    }
}
