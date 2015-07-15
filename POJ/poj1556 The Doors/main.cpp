#include<cstdio>
#include<cstring>
#include<cmath>
struct AXIS {
    double x;
    double y[6];
};
int main() {
    int n;
    while(scanf("%d",&n),-1!=n) {
        bool intersect[n][3];
        memset(intersect,false,sizeof(intersect));
        AXIS axis[n];
        for(int i=0;i<n;i++) {
            scanf("%lf",&axis[n].x);
            axis[i].y[0]=0;
            scanf("%lf%lf%lf%lf",&axis[i].y[1],&axis[i].y[2],&axis[i].y[3],&axis[i].y[4]);
            axis[i].y[5]=10;
        }
        for(int i=0;i<n;i++) {
            if(axis[i].y[1]>5) {
                intersect[i][0]=true;
            } else if(axis[i].y[2]<5&&axis[i].y[3]>5) {
                intersect[i][1]=true;
            } else if(axis[i].y[4]<5) {
                intersect[i][2]=true;
            }
        }
        for(int i=0;i<n;i++) {
            for(int j=0;j<3;j++) {
                if(intersect[i][j]) {

                }
            }
        }
    }
    return 0;
}
