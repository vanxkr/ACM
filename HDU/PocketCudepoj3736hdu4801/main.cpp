#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int ans;

void up(int *a)
{
    int tmp=a[6];
    a[6]=a[7];
    a[7]=a[13];
    a[13]=a[12];
    a[12]=tmp;
    tmp=a[11];
    a[11]=a[2];
    a[2]=a[8];
    a[8]=a[17];
    a[17]=tmp;
    tmp=a[5];
    a[5]=a[3];
    a[3]=a[14];
    a[14]=a[16];
    a[16]=tmp;
}

void left(int *a)
{
    int tmp=a[11];
    a[11]=a[5];
    a[5]=a[4];
    a[4]=a[10];
    a[10]=tmp;
    tmp=a[0];
    a[0]=a[20];
    a[20]=a[16];
    a[16]=a[6];
    a[6]=tmp;
    tmp=a[2];
    a[2]=a[22];
    a[22]=a[18];
    a[18]=a[12];
    a[12]=tmp;
}

void front(int *a)
{
    int tmp=a[0];
    a[0]=a[2];
    a[2]=a[3];
    a[3]=a[1];
    a[1]=tmp;
    tmp=a[22];
    a[22]=a[5];
    a[5]=a[7];
    a[7]=a[9];
    a[9]=tmp;
    tmp=a[23];
    a[23]=a[4];
    a[4]=a[6];
    a[6]=a[8];
    a[8]=tmp;
}

int check(int a,int b,int c,int d)
{
    if(a==b&&a==c&&a==d)
        return 1;
    return 0;
}

int getnum(int *a)
{
    int num=0;
    num+=check(a[0],a[1],a[2],a[3]);
    num+=check(a[4],a[5],a[10],a[11]);
    num+=check(a[6],a[7],a[12],a[13]);
    num+=check(a[8],a[9],a[14],a[15]);
    num+=check(a[16],a[17],a[18],a[19]);
    num+=check(a[20],a[21],a[22],a[23]);
    return num;
}

void (*(func)[3])(int *);

void dfs(int *a,int lef)
{
    ans=max(ans,getnum(a));
    if(ans==6)
        return;
    if(lef==0)
        return;
    int b[24];
    for(int i=0; i<3; i++)
    {
        memcpy(b,a,sizeof(int)*24);
        func[i](b);
        dfs(b,lef-1);
        func[i](b);
        func[i](b);
        dfs(b,lef-1);
    }
}
int main()
{
    int n;
    func[0]=front;
    func[1]=left;
    func[2]=up;
    while(scanf("%d",&n)!=EOF)
    {
        int a[24];
        for(int i=0; i<24; i++)
            scanf("%d",&a[i]);
        ans=0;
        dfs(a,n);
        printf("%d\n",ans);
    }
    return 0;
}
