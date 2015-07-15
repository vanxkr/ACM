//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//#include<string.h>
//int n;
//double v,sv;
//struct po
//{
//    int x, y, z;
//    double r;
//} p[10],b[2];
//bool vis[10];
//const double pi = acos(-1.0);
////pi=3.141592653
//const double inf=10000000000.0;
//double min(double a,double b)
//{
//    if(a<b)
//        return a;
//    else
//        return b;
//}
//double volume(po a,po b)//两点之间的距离
//{
//    return sqrt((double)(a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)+(a.z-b.z)*(a.z-b.z));
//}
//double minst(int i)//找点i上的气球的最大半经
//{
//    int j;
//    double m=inf;
//    double mi[6];
//    mi[0]=abs(p[i].x-b[0].x);
//    mi[1]=abs(p[i].y-b[0].y);
//    mi[2]=abs(p[i].z-b[0].z);
//    mi[3]=abs(p[i].x-b[1].x);
//    mi[4]=abs(p[i].y-b[1].y);
//    mi[5]=abs(p[i].z-b[1].z);
//    for(j=0; j<6; j++ )
//        if(mi[j]<m)
//            m=mi[j];
//    for(j=0; j<n; j++)
//    {
//        if(i!=j  && vis[j]==true)
//        {
//            m=min(m,volume(p[i],p[j])-p[j].r);
//        }
//    }     //printf("%.2lf\n",m);
//    return m;
//}
//void dfs(int step,double bv)
//{
//    if(step==n)
//    {
//        if(bv>v)
//            v=bv;
//        return ;
//    }
//    else
//    {
//        for(int i=0; i<n; i++)
//            if(!vis[i])
//            {
//                vis[i]=true;
//                p[i].r=minst(i);
//                if(p[i].r>0)
//                    dfs(step+1,bv+(4.0/3.0)*pi*p[i].r*p[i].r*p[i].r);
//                else
//                    dfs(step+1,bv);
//                vis[i]=false;
//            }
//    }
//}
//int main()
//{
//    int i,j;
//    while(scanf("%d",&n)!=EOF)
//    {
//        scanf("%d%d%d%d%d%d",&b[0].x,&b[0].y,&b[0].z,&b[1].x,&b[1].y,&b[1].z);
//        sv=fabs(b[0].x-b[1].x)*abs(b[0].y-b[1].y)*abs(b[0].z-b[1].z);//算出长方体的体积
//        for(i=0; i<n; i++)
//        {
//            scanf("%d%d%d",&p[i].x,&p[i].y,&p[i].z);
//            p[i].r=0;
//        }
//        v=0;
//        memset(vis,0,sizeof(vis));//用于标记是否遍历过
//        dfs(0,0.0);
//        printf("%.lf\n",sv-v);
//    }
//    return 0;
//}



#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define PI acos(-1.0)
#define INF 0x3f3f3f3f
using namespace std;
struct xyz
{
    int  x, y, z;
    double r;
} box[2], ball[6];
int n;
double max_volume;
bool visit[6];
double max_radius(int i);
void dfs(int step, double present_volume);
int main(void)
{
    _
    int box_volume;
    while (cin >> n)
    {
        max_volume = 0;
        memset(visit, false, sizeof(visit));
        memset(ball, 0, sizeof(struct xyz)*6);
        cin >> box[0].x >> box[0].y >> box[0].z;
        cin >> box[1].x >> box[1].y >> box[1].z;
        box_volume = abs(box[0].x-box[1].x)*abs(box[0].y-box[1].y)*abs(box[0].z-box[1].z);
        for (int i = 0; i < n; ++ i)
            cin >> ball[i].x >> ball[i].y >> ball[i].z;
        dfs(0, 0.0);
    }
    return 0;
}
double max_radius(int i)
{
    double max_distance = INF;
    double distance_to_wall[6];
    distance_to_wall[0] = abs(ball[i].x - box[0].x);
    distance_to_wall[1] = abs(ball[i].y - box[0].y);
    distance_to_wall[2] = abs(ball[i].z - box[0].z);
    distance_to_wall[3] = abs(ball[i].x - box[1].x);
    distance_to_wall[4] = abs(ball[i].y - box[1].y);
    distance_to_wall[5] = abs(ball[i].z - box[1].z);
    for (int j = 0; j < 6; ++ j)
        max_distance = min(max_distance, distance_to_wall[i]);
    for (int j = 0; j < n; ++ j)
        if (j != i && visit[j])
        {
            max_distance = min(max_distance, dot_volume())
        }
}
void dfs(int step, double present_volume)
{
    if (step == n)
    {
        max_volume = present_volume > max_volume ? present_volume : max_volume;
        return;
    }
    else
    {
        for (int i = 0; i < n; ++ i)
            if (!visit[i])
            {
                visit[i] = true;
                ball[i].r = max_radius(i);
            }
    }
}
