#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int m,n,c;
    scanf("%d",&c);
    while(c--) {
        scanf("%d%d",&n,&m);
        if(n%(m+1)==0)
            printf("Rabbit\n");
        else
            printf("Grass\n");
    }
    return 0;
}
