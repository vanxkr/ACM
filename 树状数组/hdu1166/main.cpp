///HDU1166µÐ±ø²¼Õó
///Ê÷×´Êý×é
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int c[12];
int p[12];
int n;

int lowbit(int x)
{
    return x&(-x);
}

int getsum(int x)
{
    int s=0;
    while(x>0)
    {
        s+=c[x];
        x-=p[x];
    }
    return s;
}

int modify(int x,int d)
{
    while(x<=n)
    {
        c[x]+=d;
        x+=p[x];
    }
    return 0;
}

int main()
{
    int k;
    char s[10];
    int ik,jk;
    scanf("%d",&k);
    for(int i=0; i<=11; i++)
    {
        p[i]=lowbit(i);
    }
    for(int js=1; js<=k; js++)
    {
        printf("Case ");
        printf("%d:\n",js);
        memset(c,0,sizeof(c));
        scanf("%d",&n);
        for(int i=1; i<=n; i++)
        {
            int tmp;
            scanf("%d",&tmp);
            modify(i,tmp);
        }
        while(scanf("%s",s)!=EOF && s[0]!='E')
        {
            if(s[0]=='Q')
            {
                scanf("%d%d",&ik,&jk);
                int sum=getsum(jk)-getsum(ik-1);
                printf("%d\n",sum);
            }
            else if(s[0]=='A')
            {
                scanf("%d%d",&ik,&jk);
                modify(ik,jk);
            }
            else
            {
                scanf("%d%d",&ik,&jk);
                modify(ik,(-1)*jk);
            }
        }
    }
    return 0;
}
