#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int n;
    struct node *next;
}Node;
Node head[100];
int m,n,t,min;
int c[100][100],d[100][100];

int F(int s,int step,int k)
{
    int i;
    Node *p;
    if(s==t)
    {
        if(min>step)
            min=step;
        return 0;
    }
    else
    {
        p=head[s].next;
        while(p!=NULL)
        {
            if(k-c[s][p->n]>=0)
            {
                F(p->n,step+d[s][p->n],k-c[s][p->n]);
            }
            p=p->next;
        }
        return 0;
    }
}
int main()
{
    int i,k,s,x,y,w,r;
    Node *p,*ptr;
    while(scanf("%d %d",&n,&m)&&(m||n))
    {
        min=10000;
        for(i=1;i<=n;i++)
        {
            head[i].n=i;
            head[i].next=NULL;
        }
        for(i=0;i<m;i++)
        {
            scanf("%d %d %d %d",&x,&y,&w,&r);
            c[x][y]=w;d[x][y]=r;
            c[y][x]=w;d[y][x]=r;
            ptr=(Node*)malloc(sizeof(Node));
            ptr->n=y;
            ptr->next=NULL;
            p=&head[x];
            while(p->next!=NULL)
            {
                p=p->next;
            }
            p->next=ptr;
            ptr=(Node*)malloc(sizeof(Node));
            ptr->n=x;
            ptr->next=NULL;
            p=&head[y];
            while(p->next!=NULL)
            {
                p=p->next;
            }
            p->next=ptr;
        }
        scanf("%d %d",&s,&t);
        scanf("%d",&k);
        F(s,0,k);
        if(min==10000)
            printf("-1\n");
        else
            printf("%d\n",min);
    }
    return 0;
}
