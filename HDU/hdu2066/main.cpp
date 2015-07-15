//#include <iostream>
//#include <cstring>
//#include <cstdio>
//#include <algorithm>
//#define N 1010
//#define INF 0x3f3f3f3f
//using namespace std;
//int minload[N];
//bool visit[N];
//int _map[N][N];
//int to[N];
//int main()
//{
//    int _max;
//    int num;
//    int i;
//    int a, b, c;
//    int T, S, D;
//    int start, next, _min;
//    while (~scanf("%d%d%d", &T, &S, &D))
//    {
//        _max = 0;
//        memset(_map, 0x3f, sizeof(_map));
//        for (i = 1; i <= T; ++ i)
//        {
//            scanf("%d%d%d", &a, &b, &c);
//            _max = max(_max, a);
//            _max = max(_max, b);
//            if (_map[a][b] != 0x3f3f3f3f)
//                _map[a][b] = _map[b][a] = min(_map[a][b], c);
//            else
//                _map[a][b] = _map[b][a] = c;
//        }
//        for (i = 1; i <= S; ++ i)
//        {
//            scanf("%d", &num);
//            _map[num][0] = _map[0][num] = 0;
//        }
//        for (i = 1; i <= D; ++ i)
//            scanf("%d", &to[i]);
//        sort(to + 1, to + D + 1);
//        num = INF;
//        memset(visit, false, sizeof(visit));
//        memset(minload, 0x3f, sizeof(minload));
//        start = 0;
//        visit[start] = true;
//        minload[start] = 0;
//        while (start != _max)
//        {
//            _min = INF;
//            for (i = 0; i <= _max; ++ i)
//            {
//                if (INF != _map[start][i])
//                    minload[i] = min(minload[i], minload[start] + _map[start][i]);
//                if (!visit[i] && minload[i] <= _min)
//                {
//                    next = i;
//                    _min = minload[i];
//                }
//            }
//            visit[next] = true;
//            start = next;
//        }
//        for (i = 1; i <= D; ++ i)
//            num = min(num, minload[to[i]]);
//        printf("%d\n", num);
//    }
//    return 0;
//}

/*
28 3 3
1 15 1
1 16 2
1 3 1
1 4 4
2 4 2
2 15 2
2 7 1
3 17 3
3 5 3
3 8 6
4 7 5
4 8 1
5 11 2
6 7 3
6 9 5
6 13 8
6 14 3
7 8 3
7 9 7
7 10 3
8 12 2
9 10 4
9 13 6
10 12 4
11 12 1
13 14 1
14 15 1
16 17 2

1 4 6

17 11 10


13 1 1

1 2 9
1 3 4
1 4 3
1 5 1
2 3 8
2 8 7
3 4 4
3 6 1
3 8 6
4 5 1
4 7 3
5 7 2
6 7 1

1

6


*/





//一种做法是把加个0点 把和草儿家相邻的城市的距离赋为0
//一种在所有 起点和终点 路径中选出最短路
// dijkstra
//#include "stdio.h"
//#include "string.h"
//const int inf = 1000000;
//int map[1115][1115];
//int max_city;
//bool vis[1115];
//int dis[1115];
//void dijkstra(int x)
//{
//    int i,j;
//    memset(vis,0,sizeof(vis));
//    for( i=0;i<= max_city;i++ )
//        dis[i] = map[x][i];
//    dis[0] = 0;
//    for( i=1;i<=max_city;i++ )
//    {
//        int p = x,temp = inf;
//        for( j=1;j<=max_city;j++ )
//        {
//            if( !vis[j] && dis[j] < temp )
//            {
//                p = j;
//                temp = dis[j];
//            }
//        }
//        vis[p]=true;
//        for( j=1;j<=max_city;j++ )
//        {
//            if( map[p][j]!=inf )
//            {
//                if( dis[j] > dis[p]+map[p][j] )
//                    dis[j] = dis[p]+map[p][j];
//            }
//        }
//    }
//}
//int main()
//{
//    int t,s,d,a,b,c,i,j,temp;
//    while( scanf("%d%d%d",&t,&s,&d)==3 )
//    {
//        for( i=0;i<1005;i++ )
//        {
//            for( j=0;j<=1005;j++ )
//                if(i==j)
//                    map[i][j]=0;
//                else
//                    map[i][j]= map[j][i] = inf;
//        }
//        max_city=0;
//        for( i=0;i<t;i++ )
//        {
//            scanf("%d%d%d",&a,&b,&c);
//            if( map[a][b]>c )
//                map[a][b]=map[b][a]=c;
//            max_city=(a>b ? a:b) > max_city ? (a>b?a:b) : max_city;
//        }
//        for( i=0;i<s;i++ )
//        {
//            scanf("%d",&temp);
//            map[0][temp]=map[temp][0]=0;
//        }
//        dijkstra(0);
//        int min=inf;
//        for( i=0;i<d;i++ )
//        {
//            scanf("%d",&temp);
//            if( min > dis[temp] )
//                min = dis[temp];
//        }
//        printf("%d\n",min);
//    }
//    return 0;
//}

// Floyd
//#include "stdio.h"
//#include "string.h"
//const int inf = 1000000;
//int map[1115][1115];
//int max_city;
//bool mark1[1005],mark2[1005];
//int Floyd()
//{
//    int temp=inf;
//    for( int k=1;k<=max_city;k++ )
//    {
//        for( int i=1;i<=max_city;i++ )
//        {
//            if( map[i][k]!=inf )
//                for( int j=1;j<=max_city;j++ )
//                {
//                    if( map[i][j] > map[i][k] + map[k][j] )
//                    {
//                        map[i][j] = map[i][k] + map[k][j];
//                    }
//                    if( mark1[i] && mark2[j] )
//                            temp=temp<map[i][j]?temp:map[i][j];
//                }
//        }
//    }
//    return temp;
//}
//int main()
//{
//    int t,s,d,a,b,c,i,j,temp;
//    while( scanf("%d%d%d",&t,&s,&d)==3 )
//    {
//        for( i=0;i<1005;i++ )
//            for( j=i+1;j<=1005;j++ )
//                map[i][j]= map[j][i] = inf;
//        max_city=0;
//        for( i=0;i<t;i++ )
//        {
//            scanf("%d%d%d",&a,&b,&c);
//            if( map[a][b]>c )
//                map[a][b]=map[b][a]=c;
//            max_city=(a>b ? a:b) > max_city ? (a>b?a:b) : max_city;
//        }
//        memset(mark1,0,sizeof(mark1));
//        memset(mark2,0,sizeof(mark2));
//        for( i=0;i<s;i++ )
//        {
//            scanf("%d",&temp);
//            mark1[temp]=true;
//        }
//        for( i=0;i<d;i++ )
//        {
//            scanf("%d",&temp);
//            mark2[temp]=true;
//        }
//        printf("%d\n",Floyd());
//    }
//    return 0;
//}
