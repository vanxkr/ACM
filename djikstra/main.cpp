#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_NAME 10
#define MAX_VERTEX_NUM 26
typedef char VertexType[MAX_NAME];
typedef int AdjMatrix[MAX_VERTEX_NUM][MAX_VERTEX_NUM];//邻接距阵
struct MGraph//定义网
{
    VertexType vexs[MAX_VERTEX_NUM];
    AdjMatrix arcs;
    int vexnum,arcnum;
};
int LocateVex(MGraph G,VertexType u)//定位
{
    int i;
    for(i=0; i<G.vexnum; ++i)
        if(strcmp(u,G.vexs[i])==0)
            return i;
    return -1;
}
void CreateDN(MGraph &G)//建网
{
    int i,j,k,w;
    VertexType va,vb;
    printf("请输入有向网G的顶点数和弧数(以空格作为间隔)\n");
    scanf("%d %d",&G.vexnum,&G.arcnum);
    printf("请输入%d个顶点的值(<%d个字符):\n",G.vexnum,MAX_NAME);
    for(i=0; i<G.vexnum; ++i)
        scanf("%s",G.vexs[i]);
    for(i=0; i<G.vexnum; ++i)
        for(j=0; j<G.vexnum; ++j)
            G.arcs[i][j]=0x7fffffff;
    printf("请输入%d条弧的弧尾 弧头 权值(以空格作为间隔): \n",G.arcnum);
    for(k=0; k<G.arcnum; ++k)
    {
        scanf("%s%s%d%*c",va,vb,&w);
        i=LocateVex(G,va);
        j=LocateVex(G,vb);
        G.arcs[i][j]=w;
    }
}

typedef int PathMatrix[MAX_VERTEX_NUM][MAX_VERTEX_NUM];
typedef int ShortPathTable[MAX_VERTEX_NUM];

void ShortestPath_DIJ(MGraph G,int v0,PathMatrix P,ShortPathTable D)
{
    int v,w,i,j,min;
    int final[MAX_VERTEX_NUM];
    for(v=0; v<G.vexnum; ++v)
    {
        final[v]=0;
        D[v]=G.arcs[v0][v];
        for(w=0; w<G.vexnum; ++w)
            P[v][w]=0;
        if(D[v]<0x7fffffff)
            P[v][v0]=P[v][v]=1;
    }
    D[v0]=0;
    final[v0]=1;
    for(i=1; i<G.vexnum; ++i)
    {
        min=0x7fffffff;
        for(w=0; w<G.vexnum; ++w)
            if(!final[w]&&D[w]<min)
            {
                v=w;
                min=D[w];
            }
        final[v]=1;
        for(w=0; w<G.vexnum; ++w)
            if(!final[w]&&min<0x7fffffff&&G.arcs[v][w]<0x7fffffff&&(min+G.arcs[v][w]<D[w]))
            {
                D[w]=min+G.arcs[v][w];
                for(j=0; j<G.vexnum; ++j)
                    P[w][j]=P[v][j];
                P[w][w]=1;
            }
    }
}

int main()
{
    int i,j;
    MGraph g;
    PathMatrix p;
    ShortPathTable d;
    CreateDN(g);
    ShortestPath_DIJ(g,0,p,d);//以g中位置为0的顶点为源点，球其到其余各顶点的最短距离。存于d中
    printf("最短路径数组p[i][j]如下:\n");
    for(i=0; i<g.vexnum; ++i)
    {
        for(j=0; j<g.vexnum; ++j)
            printf("%2d",p[i][j]);
        printf("\n");
    }
    printf("%s到各顶点的最短路径长度为：\n",g.vexs[0]);
    for(i=0; i<g.vexnum; ++i)
        if(i!=0)
        {
            if(d[i]-0x7fffffff)printf("%s-%s:%d\n",g.vexs[0],g.vexs[i],d[i]);
            else printf("%s-%s:无路\n",g.vexs[0],g.vexs[i]);
        }
    system("PAUSE");
    return 0;
}

