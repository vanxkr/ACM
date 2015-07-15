#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
bool c[20];
bool check[40];
int s[20];
int n;
int map[20][20];
void intialize()
{
    memset(check,true,sizeof(check));
    memset(map,0,sizeof(map));
    check[1]=false;
    for(int i=2; i<=7; i++)
        if(check[i])
            for(int j=2; j<=40/i; j++)
                check[i*j]=false;
    for(int i=1; i<=20; i++)
        for(int j=1; j<=20; j++)
            if(check[i+j])
                map[i][++map[i][0]]=j;
}
void print()
{
    for(int i=1; i<n; i++)
        printf("%d ",s[i]);
    printf("%d\n",s[n]);
}
int dfs(int step)
{
    if(step==n)
    {
        if(check[s[1]+s[n]])
            print();
        return 0;
    }
    else
    {
        for(int i=1; i<=map[s[step]][0],map[s[step]][i]<=n; i++)
            if(!c[map[s[step]][i]])
            {
                c[map[s[step]][i]]=true;
                s[step+1]=map[s[step]][i];
                dfs(step+1);
                c[map[s[step]][i]]=false;
            }
    }
    return 0;
}
int main()
{
    int cnt=0;
    intialize();
    while(scanf("%d",&n)!=EOF)
    {
        printf("Case %d:\n",++cnt);
        memset(c,false,sizeof(c));
        c[1]=true;
        s[1]=1;
        dfs(1);
        printf("\n");
    }
}
