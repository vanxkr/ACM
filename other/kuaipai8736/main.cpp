#include <cstdio>
#include <cstring>

void quick_sort(int *a, int l, int r)
{

    if(l < r)
    {
        int i = l, j = r;
        int x = a[l];
        while(i < j)
        {
            while(i < j && a[j] >= x)
                j--;
            if(i < j)
                a[i++] = a[j];
            while (i < j && a[i] < x)
                i++;
            if(i < j)
                a[j--] = a[i];
        }
        a[i] = x;
        quick_sort(a,l,i-1);
        quick_sort(a,i+1,r);
    }
}



int main(void)
{
    int a[1001];
    int k,n;

    while (scanf("%d",&n) != EOF, n)
    {
        memset(a,0,sizeof(a)/sizeof(a[0]));
        for(k = 0; k < n; k++)
            scanf("%d",&a[k]);
        quick_sort(a,0,n-1);
        for(k = 0; k < n; k++)
            printf("%d ",a[k]);
        printf("\n");
    }
    return 0;
}



/*
 *
5
2 4 1 2 5
6
3 2 6 2 64 4
6
1 2 3 4 5 6
6
6 5 4 3 2 1
6
1 3 2 4 5 6

 */
