#include<stdio.h>
int main() {
    int a,n;
    scanf("%d",&n);
    while(n--) {
        scanf("%*6d%d",&a);
        printf("6%05d\n",a);
    }
    return 0;
}
