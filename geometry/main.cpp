/**
* classify: geometry
* author  : vane9436
*/
#include <bits/stdc++.h>
#define PI acos(-1)
#define EPS 1e-8
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
struct POINT { ///点
    double x;
    double y;
};
struct LINE { ///线
    POINT a;
    POINT b;
};
double cross(POINT p, POINT p1, POINT p2);///判断点在直线的上下方(上方>0,下方<0,线上=0)
bool three_dots_inLINE(POINT p0,POINT p1,POINT p2);///判断三点共线
double xmult(POINT p0,POINT p1,POINT p2);///计算p0p1,p0p2叉乘
double dmult(POINT p0,POINT p1,POINT p2);///计算p0p1,p0p2点乘
double distance(POINT p1,POINT p2);///两点p1,p2间距离
LINE bisector(POINT a,POINT b);///两个点a,b的平分线&&线段ab的中垂线
POINT perpencenter(POINT a,POINT b,POINT c);///三角形a,b,c的垂心
POINT circumcenter(POINT a,POINT b,POINT c);///三角形a,b,c的外心(即三角形的外接圆的圆心)
POINT intersection(LINE u,LINE v);///求两直线u,v的交点
bool PtInPolygon (POINT polygon[], POINT p, int nCount);///判断点p是否在多边形polyg内(上)
int main() {
    POINT a,b,c;
    while(cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y) {
        cout<<perpencenter(a,b,c).x<<" "<<perpencenter(a,b,c).y<<endl;
        cout<<circumcenter(a,b,c).x<<" "<<circumcenter(a,b,c).y<<endl;
    }
    return 0;
}
bool three_dots_inLINE(POINT p0,POINT p1,POINT p2) { ///判断三点共线
    return xmult(p0,p1,p2);
}
double xmult(POINT p0,POINT p1,POINT p2) { ///计算p0p1,p0p2叉乘
    return (p1.x-p0.x)*(p2.y-p0.y)-(p2.x-p0.x)*(p1.y-p0.y);
}
double dmult(POINT p0,POINT p1,POINT p2) { ///计算p0p1,p0p2点乘
    return (p1.x-p0.x)*(p2.x-p0.x)+(p1.y-p0.y)*(p2.y-p0.y);
}
double distance(POINT p1,POINT p2) { ///两点p1,p2间距离
    return sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
}
LINE bisector(POINT a,POINT b) { ///两个点a,b的平分线&&线段ab的中垂线
    LINE u;
    u.a.x=(a.x+b.x)/2.0;
    u.a.y=(a.y+b.y)/2.0;
    u.b.x=u.a.x-a.y+b.y;
    u.b.y=u.a.y+a.x-b.x;
    return u;
}
POINT perpencenter(POINT a,POINT b,POINT c) { ///三角形a,b,c的垂心
    LINE u,v;
    u.a=c;
    u.b.x=u.a.x-a.y+b.y;
    u.b.y=u.a.y+a.x-b.x;
    v.a=b;
    v.b.x=v.a.x-a.y+c.y;
    v.b.y=v.a.y+a.x-c.x;
    return intersection(u,v);
}
POINT circumcenter(POINT a,POINT b,POINT c) { ///三角形a,b,c的外心
    LINE u,v;
    u=bisector(a,b);
    v=bisector(b,c);
    return intersection(u,v);
}
POINT intersection(LINE u,LINE v) { ///求两直线u,v的交点
    POINT ret=u.a;
    double t=((u.a.x-v.a.x)*(v.a.y-v.b.y)-(u.a.y-v.a.y)*(v.a.x-v.b.x))
              /((u.a.x-u.b.x)*(v.a.y-v.b.y)-(u.a.y-u.b.y)*(v.a.x-v.b.x));
    ret.x+=(u.b.x-u.a.x)*t;
    ret.y+=(u.b.y-u.a.y)*t;
    return ret;
}
bool PtInPolygon (POINT polygon[], POINT p, int nCount) { ///判断点p是否在多边形polyg内(上)
    int counter = 0;
    for (int i = 0; i < nCount; i++) {
        POINT p1 = polygon[i];
        POINT p2 = polygon[(i + 1) % nCount];
        if ( p.y < min(p1.y, p2.y) ) // 交点在p1p2延长线上
            continue;
        if ( p.y > max(p1.y, p2.y) ) // 交点在p1p2延长线上
            continue;
        if ((p1.x-p.x)*(p2.y-p.y)-(p2.x-p.x)*(p1.y-p.y) == 0)
            return true;
        if ( p1.y == p2.y ) // p1p2 与 y=p0.y平行
            continue;
        double x = (double)(p.y - p1.y) * (double)(p2.x - p1.x) / (double)(p2.y - p1.y) + p1.x;
        if ( x > p.x ) counter ++; // 只统计单边交点
    }
    return (counter & 1);
}
double cross(POINT p, POINT p1, POINT p2) { ///判断点在直线的上下方(上方>0,下方<0,线上=0)
    return (p1.x-p.x)*(p2.y-p.y)-(p2.x-p.x)*(p1.y-p.y);
}
