#include <iostream>
#include <cstring>
#include <cstdio>
#define eps 1e-8
#define MAXN 6000

struct POINTE
{
    double x,y;
    POINTE(double _x=0,double _y=0):x(_x),y(_y){}
};
double det(double x1,double y1,double x2,double y2){return x1*y2-x2*y1;}
double cross(double x,double y,double x1,double y1,double x2,double y2)
{
    return det(x1-x,y1-y,x2-x,y2-y);
}
int n,m,X1,Y1,X2,Y2,X,Y,U[MAXN],L[MAXN],u,l;

int findToy(double X,double Y)
{
    double ans1,ans2;
    int front=0,end=n+1,i;
    do
    {
        i=(front+end)/2;
        ans1=cross(X,Y,1.0*U[i],1.0*Y1,1.0*L[i],1.0*Y2);
        ans2=cross(X,Y,1.0*U[i+1],1.0*Y1,1.0*L[i+1],1.0*Y2);
        if(ans1*ans2<=0) return i;
        else if(ans1>0) front=i;
        else end=i;
    }
    while(1);
}

int main()
{
    while(scanf("%d",&n), n)
    {
        scanf("%d %d %d %d %d",&m,&X1,&Y1,&X2,&Y2);
        U[0]=X1;
        L[0]=X1;
        U[n+1]=X2;
        L[n+1]=X2;
        for(int i = 1; i <= n; i ++)
            scanf("%d %d",&U[i],&L[i]);
        int num[n+1];
        memset(num, 0, sizeof(num));
        for(int i = 0; i < m; i ++) {
            scanf("%d %d",&X,&Y);
            num[findToy(1.0*X,1.0*Y)]++;
        }
        for(int i = 0; i <= n; i ++)
            printf("%d: %d\n",i,num[i]);
        printf("\n");
    }
    return 0;
}
