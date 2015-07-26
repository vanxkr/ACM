/**
* classify: 几何
* author  : vane9436
*/
#include <bits/stdc++.h>
#define PI acos(-1)
#define EPS 1e-8
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
struct point { ///点
    double x;
    double y;
    double z;
};
struct line { ///线
    point a;
    point b;
};
double xmult(point p0,point p1,point p2);///计算p0p1,p0p2叉乘
double distance(point p1,point p2);///两点p1,p2间距离
line bisector(point a,point b);///两个点a,b的平分线&&线段ab的中垂线
point perpencenter(point a,point b,point c);///三角形a,b,c的垂心
point circumcenter(point a,point b,point c);///三角形a,b,c的外心(即三角形的外接圆的圆心)
point intersection(line u,line v);///求两直线u,v的交点
int main() {
    point a,b,c;
    while(cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y) {
        cout<<perpencenter(a,b,c).x<<" "<<perpencenter(a,b,c).y<<endl;
        cout<<circumcenter(a,b,c).x<<" "<<circumcenter(a,b,c).y<<endl;
    }
    return 0;
}
double xmult(point p0,point p1,point p2) { ///计算p0p1,p0p2叉乘
    return (p1.x-p0.x)*(p2.y-p0.y)-(p2.x-p0.x)*(p1.y-p0.y);
}
double dmult(point p0,point p1,point p2) { ///计算p0p1,p0p2点乘
    return (p1.x-p0.x)*(p2.x-p0.x)+(p1.y-p0.y)*(p2.y-p0.y);
}
double distance(point p1,point p2) { ///两点p1,p2间距离
    return sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
}
line bisector(point a,point b) { ///两个点a,b的平分线&&线段ab的中垂线
    line u;
    u.a.x=(a.x+b.x)/2.0;
    u.a.y=(a.y+b.y)/2.0;
    u.b.x=u.a.x-a.y+b.y;
    u.b.y=u.a.y+a.x-b.x;
    return u;
}
point perpencenter(point a,point b,point c) { ///三角形a,b,c的垂心
    line u,v;
    u.a=c;
    u.b.x=u.a.x-a.y+b.y;
    u.b.y=u.a.y+a.x-b.x;
    v.a=b;
    v.b.x=v.a.x-a.y+c.y;
    v.b.y=v.a.y+a.x-c.x;
    return intersection(u,v);
}
point circumcenter(point a,point b,point c) { ///三角形a,b,c的外心
    line u,v;
    u=bisector(a,b);
    v=bisector(b,c);
    return intersection(u,v);
}
point intersection(line u,line v) { ///求两直线u,v的交点
    point ret=u.a;
    double t=((u.a.x-v.a.x)*(v.a.y-v.b.y)-(u.a.y-v.a.y)*(v.a.x-v.b.x))
              /((u.a.x-u.b.x)*(v.a.y-v.b.y)-(u.a.y-u.b.y)*(v.a.x-v.b.x));
    ret.x+=(u.b.x-u.a.x)*t;
    ret.y+=(u.b.y-u.a.y)*t;
    return ret;
}
