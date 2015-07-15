#include <cstdio>
#include <cstdlib>
#include <cstring>

char st[32768];

typedef struct Node
{
    int data;
    struct Node *next;
} Node, *LinkList;

void Init_LinkList(LinkList &L)
{
    L = (LinkList)malloc(sizeof(Node));
    L->next = NULL;
}

void back_Input_LinkList(LinkList &L, int n)
{
    Node *p, *r = L;
    for (int i = 1; i <= n; i++)
    {
        p = (Node *)malloc(sizeof(Node));
        p->data = i;
        r->next = p;
        r = p;
    }
    r->next = L -> next;
}

int Joseph(LinkList &L, int n, int m)
{
    Node *p = L, *q;
    int i = 0, j = 0;
    while (p)
    {
        q = p;
        i++;
        if (i == m)
        {
            i = 0;
            j++;
            p = p->next;
            q->next = p -> next;
            if (j <= n/2)
                st[p->data] = 'B';
            else
                break;
        }
        else
            p = p->next;
    }
}

int main(int argc, char *argv[])
{
    LinkList L;
    int n, m;
    while (scanf("%d%d", &n, &m) != EOF)
    {
        memset(st, 'G', sizeof(st));
        n *= 2;
        Init_LinkList(L);
        back_Input_LinkList(L, n);
        Joseph(L, n, m);
        for (int i = 1; i <= n; ++ i)
        {
            printf("%c%s", st[i], (0 == i%50) ? "\n" : "");
        }
        if (0 == n%50)
            printf("\n");
        else
            printf("\n\n");
    }
    return 0;
}
