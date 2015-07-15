/**
* classify: ����
* author  : vane9436
*/
#include <bits/stdc++.h>
#define PI acos(-1)
#define EPS 1e-8
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
struct point { ///��
    double x;
    double y;
    double z;
};
struct line { ///��
    point a;
    point b;
};
double xmult(point p0,point p1,point p2);///����p0p1,p0p2���
double distance(point p1,point p2);///����p1,p2�����
line bisector(point a,point b);///������a,b��ƽ����&&�߶�ab���д���
point perpencenter(point a,point b,point c);///������a,b,c�Ĵ���
point circumcenter(point a,point b,point c);///������a,b,c������(�������ε����Բ��Բ��)
point intersection(line u,line v);///����ֱ��u,v�Ľ���
int main() {
    point a,b,c;
    while(cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y) {
        cout<<perpencenter(a,b,c).x<<" "<<perpencenter(a,b,c).y<<endl;
        cout<<circumcenter(a,b,c).x<<" "<<circumcenter(a,b,c).y<<endl;
    }
    return 0;
}
double xmult(point p0,point p1,point p2) { ///����p0p1,p0p2���
    return (p1.x-p0.x)*(p2.y-p0.y)-(p2.x-p0.x)*(p1.y-p0.y);
}
double dmult(point p0,point p1,point p2) { ///����p0p1,p0p2���
    return (p1.x-p0.x)*(p2.x-p0.x)+(p1.y-p0.y)*(p2.y-p0.y);
}
double distance(point p1,point p2) { ///����p1,p2�����
    return sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
}
line bisector(point a,point b) { ///������a,b��ƽ����&&�߶�ab���д���
    line u;
    u.a.x=(a.x+b.x)/2.0;
    u.a.y=(a.y+b.y)/2.0;
    u.b.x=u.a.x-a.y+b.y;
    u.b.y=u.a.y+a.x-b.x;
    return u;
}
point perpencenter(point a,point b,point c) { ///������a,b,c�Ĵ���
    line u,v;
    u.a=c;
    u.b.x=u.a.x-a.y+b.y;
    u.b.y=u.a.y+a.x-b.x;
    v.a=b;
    v.b.x=v.a.x-a.y+c.y;
    v.b.y=v.a.y+a.x-c.x;
    return intersection(u,v);
}
point circumcenter(point a,point b,point c) { ///������a,b,c������
    line u,v;
    u=bisector(a,b);
    v=bisector(b,c);
    return intersection(u,v);
}
point intersection(line u,line v) { ///����ֱ��u,v�Ľ���
    point ret=u.a;
    double t=((u.a.x-v.a.x)*(v.a.y-v.b.y)-(u.a.y-v.a.y)*(v.a.x-v.b.x))
              /((u.a.x-u.b.x)*(v.a.y-v.b.y)-(u.a.y-u.b.y)*(v.a.x-v.b.x));
    ret.x+=(u.b.x-u.a.x)*t;
    ret.y+=(u.b.y-u.a.y)*t;
    return ret;
}
