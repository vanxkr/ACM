//��������������ʽ�� �������� = ������ - ���ƥ�� / 2
//ע�⣺���鿪С�ˣ���Runtime Error(ACCESS_VIOLATION)
//����EOF,�ͻᳬʱ
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
            visited[j] = 1;//Ϊ�����������haspth�ж�ʱ���ų��ѱ���ǹ��ĵ�ǰ·��
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
