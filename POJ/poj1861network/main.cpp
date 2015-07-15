#include <iostream>
#include <cstdlib>
#define M 15010
using namespace std;
struct node
{
    int x, y;
    int len;
};
int cmp(const void *a, const void *b)
{
    return ((node *)a)->len - ((node *)b)->len;
}
node node1[M];
node node2[M];
int rank[M];
int father[M];
void make_set(int i)
{
    father[i] = i;
    rank[i] = 0;
}
int find_set(int i)
{
    if (i != father[i])
        father[i] = find_set(father[i]);
    return father[i];
}
void _union(int x, int y)
{
    if (x == y)
        return;
    if (rank[x] > rank[y])
        father[y] = x;
    else if (rank[x] == rank[y])
    {
        ++ rank[y];
        father[x] = y;
    }
}
int main(void)
{
    int max;
    int i, k;
    int x, y;
    int n, m;
    cin >> n >> m;
    for (i = 0; i < m; ++ i)
        cin >> node1[i].x >> node1[i].y >> node1[i].len;
    qsort(node1, m, sizeof(node), cmp);
    for (i = 0; i < n; ++ i)
        make_set(i);
    k = max = 0;
    for (i = 0; i < m; ++ i)
    {
        x = find_set(node1[i].x);
        y = find_set(node1[i].y);
        if (x != y)
        {
            ++ k;
            _union(x, y);
            node2[k] = node1[i];
            max = max > node1[i].len ? max : node1[i].len;
        }
    }
    cout << max << endl;
    cout << k << endl;
    for (i = 1; i <= k; ++ i)
        cout << node2[i].x << " " << node2[i].y << endl;
    return 0;
}
