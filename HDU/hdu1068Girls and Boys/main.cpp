//求最大独立集，公式： 最大独立集 = 顶点数 - 最大匹配 / 2
//注意：数组开小了，会Runtime Error(ACCESS_VIOLATION)
//不加EOF,就会超时
#include<stdio.h>
#include<memory.h>
int relation[500][500];
int link[500], visited[500];
int cases;
bool haspath(int i)
{
    int j;
    for(j = 0; j < cases; j++)
    {
        if(relation[i][j] && !visited[j])
        {
            visited[j] = 1;//为了在下面进行haspth判断时，排除已被标记过的当前路径
            if(link[j] == 0 || haspath(link[j]))
            {
                link[j] = i;
                return true;
            }
        }
    }
    return false;
}
void main()
{
    int i, j, no_ofstu, stu_des, stu_id, path;
    while(scanf("%d", &cases) != EOF)
    {
        path = 0;
        memset(relation, 0, sizeof(relation));
        memset(link, 0, sizeof(link));
        for(i = 0; i < cases; i++)
        {
            scanf("%d: (%d)", &no_ofstu, &stu_des);
            for(j = 0; j < stu_des; j++)
            {
                scanf("%d", &stu_id);
                relation[no_ofstu][stu_id] = 1;
            }
        }
        for(i = 0; i < cases; i++)
        {
            memset(visited, 0, sizeof(visited));
            if(haspath(i))
                path ++;
        }
        printf("%d\n", cases - path / 2);
    }
}
