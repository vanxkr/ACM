#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <map>
#define INF 0x3f3f3f3f
#define PI acos(-1.0)
#define EPS 1e-8
#define MAXN 1010
using namespace std;
double cross(double x,double y,double x1,double y1,double x2,double y2){
    return ((x1-x)*(y2-y)-(x2-x)*(y1-y));
}
struct vane {
    int U;
    int L;
};
map <int,int> Map;
int n,m,x1,y1,x2,y2;
int num[MAXN];
vane UL[MAXN];
int findToy(double x,double y)
{
    double ans1,ans2;
    int front=0,end=n+1,i;
    do
    {
        i=(front+end)/2;
        ans1=cross(x,y,1.0*UL[i].U,  1.0*y1,1.0*UL[i].L,  1.0*y2);
        ans2=cross(x,y,1.0*UL[i+1].U,1.0*y1,1.0*UL[i+1].L,1.0*y2);
        if((ans1*ans2<0)) return i;
        else if(ans1>0) front=i;
        else end=i;
    }
    while(true);
}
bool cmp(const vane a,const vane b) {
    return a.U<b.U;
}
int main()
{
    int x,y;
    while(scanf("%d",&n),n)
    {
        scanf("%d%d%d%d%d",&m,&x1,&y1,&x2,&y2);
        Map.clear();
        UL[0].U=UL[0].L=x1;
        UL[n+1].U=UL[n+1].L=x2;
        for(int i=1;i<=n;i++)
            scanf("%d%d",&UL[i].U,&UL[i].L);
        memset(num,0,sizeof(num));
        sort(UL,UL+n+2,cmp);
        for(int j=0;j<m;j++) {
            scanf("%d%d",&x,&y);
            num[findToy(1.0*x,1.0*y)]++;
        }
        for(int i=0;i<=n;i++)
            if(num[i]) Map[num[i]]++;
        map<int,int>::iterator it;
        printf("Box\n");
        for(it=Map.begin();it!=Map.end();++it)
            printf("%d: %d\n",it->first,it->second);
    }
    return 0;
}

