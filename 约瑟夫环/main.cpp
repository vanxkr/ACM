#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node *next;
}Node, *LinkList;

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
		if (j == n)
			return p->data;
		else if (i == m)
		{
			i = 0;
			j++;
			p = p->next;
			q->next = p -> next;
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
		Init_LinkList(L);
		back_Input_LinkList(L, n);
		printf("%d\n", Joseph(L, n, m));
	}
	return 0;
}
