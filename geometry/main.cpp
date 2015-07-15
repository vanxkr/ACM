/**
* classify: geometry
* author  : vane9436
*/
#include <bits/stdc++.h>
#define PI acos(-1)
#define EPS 1e-8
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
struct POINT { ///��
    double x;
    double y;
};
struct LINE { ///��
    POINT a;
    POINT b;
};
double cross(POINT p, POINT p1, POINT p2);///�жϵ���ֱ�ߵ����·�(�Ϸ�>0,�·�<0,����=0)
bool three_dots_inLINE(POINT p0,POINT p1,POINT p2);///�ж����㹲��
double xmult(POINT p0,POINT p1,POINT p2);///����p0p1,p0p2���
double dmult(POINT p0,POINT p1,POINT p2);///����p0p1,p0p2���
double distance(POINT p1,POINT p2);///����p1,p2�����
LINE bisector(POINT a,POINT b);///������a,b��ƽ����&&�߶�ab���д���
POINT perpencenter(POINT a,POINT b,POINT c);///������a,b,c�Ĵ���
POINT circumcenter(POINT a,POINT b,POINT c);///������a,b,c������(�������ε����Բ��Բ��)
POINT intersection(LINE u,LINE v);///����ֱ��u,v�Ľ���
bool PtInPolygon (POINT polygon[], POINT p, int nCount);///�жϵ�p�Ƿ��ڶ����polyg��(��)
int main() {
    POINT a,b,c;
    while(cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y) {
        cout<<perpencenter(a,b,c).x<<" "<<perpencenter(a,b,c).y<<endl;
        cout<<circumcenter(a,b,c).x<<" "<<circumcenter(a,b,c).y<<endl;
    }
    return 0;
}
bool three_dots_inLINE(POINT p0,POINT p1,POINT p2) { ///�ж����㹲��
    return xmult(p0,p1,p2);
}
double xmult(POINT p0,POINT p1,POINT p2) { ///����p0p1,p0p2���
    return (p1.x-p0.x)*(p2.y-p0.y)-(p2.x-p0.x)*(p1.y-p0.y);
}
double dmult(POINT p0,POINT p1,POINT p2) { ///����p0p1,p0p2���
    return (p1.x-p0.x)*(p2.x-p0.x)+(p1.y-p0.y)*(p2.y-p0.y);
}
double distance(POINT p1,POINT p2) { ///����p1,p2�����
    return sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
}
LINE bisector(POINT a,POINT b) { ///������a,b��ƽ����&&�߶�ab���д���
    LINE u;
    u.a.x=(a.x+b.x)/2.0;
    u.a.y=(a.y+b.y)/2.0;
    u.b.x=u.a.x-a.y+b.y;
    u.b.y=u.a.y+a.x-b.x;
    return u;
}
POINT perpencenter(POINT a,POINT b,POINT c) { ///������a,b,c�Ĵ���
    LINE u,v;
    u.a=c;
    u.b.x=u.a.x-a.y+b.y;
    u.b.y=u.a.y+a.x-b.x;
    v.a=b;
    v.b.x=v.a.x-a.y+c.y;
    v.b.y=v.a.y+a.x-c.x;
    return intersection(u,v);
}
POINT circumcenter(POINT a,POINT b,POINT c) { ///������a,b,c������
    LINE u,v;
    u=bisector(a,b);
    v=bisector(b,c);
    return intersection(u,v);
}
POINT intersection(LINE u,LINE v) { ///����ֱ��u,v�Ľ���
    POINT ret=u.a;
    double t=((u.a.x-v.a.x)*(v.a.y-v.b.y)-(u.a.y-v.a.y)*(v.a.x-v.b.x))
              /((u.a.x-u.b.x)*(v.a.y-v.b.y)-(u.a.y-u.b.y)*(v.a.x-v.b.x));
    ret.x+=(u.b.x-u.a.x)*t;
    ret.y+=(u.b.y-u.a.y)*t;
    return ret;
}
bool PtInPolygon (POINT polygon[], POINT p, int nCount) { ///�жϵ�p�Ƿ��ڶ����polyg��(��)
    int counter = 0;
    for (int i = 0; i < nCount; i++) {
        POINT p1 = polygon[i];
        POINT p2 = polygon[(i + 1) % nCount];
        if ( p.y < min(p1.y, p2.y) ) // ������p1p2�ӳ�����
            continue;
        if ( p.y > max(p1.y, p2.y) ) // ������p1p2�ӳ�����
            continue;
        if ((p1.x-p.x)*(p2.y-p.y)-(p2.x-p.x)*(p1.y-p.y) == 0)
            return true;
        if ( p1.y == p2.y ) // p1p2 �� y=p0.yƽ��
            continue;
        double x = (double)(p.y - p1.y) * (double)(p2.x - p1.x) / (double)(p2.y - p1.y) + p1.x;
        if ( x > p.x ) counter ++; // ֻͳ�Ƶ��߽���
    }
    return (counter & 1);
}
double cross(POINT p, POINT p1, POINT p2) { ///�жϵ���ֱ�ߵ����·�(�Ϸ�>0,�·�<0,����=0)
    return (p1.x-p.x)*(p2.y-p.y)-(p2.x-p.x)*(p1.y-p.y);
}
