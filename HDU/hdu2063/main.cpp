#include<stdio.h>
#include<string.h>
#define MAX 510
int map[MAX][MAX],vist[MAX],match[MAX],m;
int find(int i)
{
    for(int j=1; j<=m; j++)
        if(!vist[j]&&map[i][j])
        {
            vist[j]=1;
            if(match[j]==0||find(match[j]))
            {
                match[j]=i;
                return 1;
            }
        }
    return 0;
}
int main()
{
    int k,n,a,b;
    while(scanf("%d",&k)>0&&k)
    {
        scanf("%d%d",&n,&m);
        for(int i=1; i<=n; i++)
            for(int j=1; j<=m; j++)
                map[i][j]=0;
        while(k--)
        {
            scanf("%d%d",&a,&b);
            map[a][b]=1;
        }
        int ans=0;
        memset(match,0,sizeof(match));
        for(int i=1; i<=n; i++)
        {
            memset(vist,0,sizeof(vist));
            ans+=find(i);
        }
        printf("%d\n",ans);
    }
}
