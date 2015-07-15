#include <cstdio>
long long sum;
int counter;
int st[8];
int temp[8];
int x,b;
void xfun(int i,int bb) {
    if(bb==b) {
        int j=0;
        int k=0;
        temp[j++]=st[0];
        for(i=1;i<b;i++) {
            for(k=0;k<j;k++) {
                if(temp[k]==st[i]) {
                    break;
                }
            }
            if(k==j) {
                temp[j++]=st[i];
            }
        }
        int num=0;
        for(k=0;k<j;k++) {
            num+=temp[k];
            //printf("%d%s",temp[k],(k+1==j?"\n":" "));
            sum+=temp[k];
        }
        printf("%d ",num);
        counter++;
        return;
    }
    for(;i<=x;i++) {
        st[bb]=i;
        xfun(1,bb+1);
    }
}
int main() {
    int T;
    int s;
    scanf("%d",&T);
    s=T;
    while(T--) {
        sum=0;
        counter=0;
        scanf("%d%d",&x,&b);
        xfun(1,0);
        printf("%lld\n",sum);
        //printf("%.3lf\n",sum*1.0/counter);
        //printf("Case #%d: %.3lf\n",s-T,sum*1.0/counter);
    }
    return 0;
}

//int main() {
//    int T;
//    int s;
//    int x,b;
//    long long sum;
//    scanf("%d",&T);
//    s=T;
//    while(T--) {
//        sum=0;
//        scanf("%d%d",&x,&b);
//        for(int i=1;i<b;i++) {
//            for(int j=1;j<=x;j++) {
//                if(i!=j) {
//                    sum+=i+j;
//                } else {
//                    sum+=i;
//                }
//            }
//        }
//        //printf("%.3lf\n",sum*1.0/counter);
//        //printf("Case #%d: %.3lf\n",s-T,sum*1.0/counter);
//    }
//    return 0;
//}

