#include <stdio.h>
#include <iostream>
#include <string.h>
#include <queue>

using namespace std;

typedef struct
{
    int x,y;
} Node;

int m,n,t;

char map[21][21];	 //停留位置
int dis[21][21];        //已走距离
int dir[4][2] = {{-1,0},{0,1},{1,0},{0,-1}};	 //要走方向 左，上，右，下

int DFS(Node s,Node e)
{

    queue<Node> q;
    Node tem;
    q.push(s);

    map[s.x][s.y] = '*';
    dis[s.x][s.y] = 0;

    while(q.size())
    {
        tem = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            tem.x = s.x + dir[i][0];
            tem.y = s.y + dir[i][1];
            if (tem.x>=0 && tem.x<n && tem.y>=0 && tem.y<m && map[tem.x][tem.y]!='*')
            {
                dis[tem.x][tem.y] = dis[s.x][s.y] + 1;
                if (tem.x == e.x && tem.y == e.y && dis[tem.x][tem.y] <= t)
                {
                    return 1;
                }
                q.push(tem);
                map[tem.x][tem.y] = '*';
            }
        }
    }
    return 0;
}

int main(void)
{

    Node s,e;
    while (scanf("%d%d%d",&n,&m,&t) != EOF &&(n && m && t))
    {
        memset(map,0,sizeof(map));
        memset(dis,0,sizeof(dis));

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%s",&map[i][j]);
                if (map[i][j] == 'S')
                {
                    s.x = i;
                    s.y = j;
                }
                if (map[i][j] == 'P')
                {
                    e.x = i;
                    e.y = j;
                }
            }
        }
        if (DFS(s,e))	printf("YES\n");
        else	printf("NO\n");
    }
    return 0;
}
