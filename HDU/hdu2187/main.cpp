#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
struct rice {
    int p;
    int h;
};
bool cmp(rice a,rice b) {
    return a.h<b.h;
}
int main() {
    int c,n,m;
    double sum;
    cin>>c;
    while(c--) {
        cin>>n>>m;
        rice r[m];
        for(int i=0;i<m;++i) {
            cin>>r[i].h>>r[i].p;
        }
        sort(r,r+m,cmp);
        int i=0;
        sum=0;
        while(n>0) {
            sum+=n>=r[i].h*r[i].p?r[i].p:(double)n/r[i].h;
            n-=r[i].h*r[i].p;
            i++;
        }
        printf("%.2lf\n",sum);
    }
    return 0;
}
