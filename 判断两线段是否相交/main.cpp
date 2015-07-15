///求n条线段的交点个数   HDU1086
#include<iostream>
#include<cstdio>
#include<cstring>

#define N 110

using namespace std;

struct Point
{
    double x1,y1;
    double x2,y2;
} p[N];

bool fun(Point a,Point b)///判断他们的端点是在另一条的一侧 (a, b)&&(b, a)可判断相交
{
    double x=b.y1-(b.x1*(a.y1-a.y2)+(a.x1*a.y2-a.x2*a.y1))/(a.x1-a.x2);
    double y=b.y2-(b.x2*(a.y1-a.y2)+(a.x1*a.y2-a.x2*a.y1))/(a.x1-a.x2);
    if(x*y<=0)
        return true;
    return false;
}
int main()
{
    int n,i,j,cnt;
    while(cin>>n&&n)
    {
        for(i=0; i<n; i++)
            scanf("%lf%lf%lf%lf",&p[i].x1,&p[i].y1,&p[i].x2,&p[i].y2);
        cnt=0;
        for(i=0; i<n; i++)
            for(j=i+1; j<n; j++)
                if(fun(p[i],p[j])&&fun(p[j],p[i]))cnt++;
        printf("%d\n",cnt);
    }
    return 0;
}
