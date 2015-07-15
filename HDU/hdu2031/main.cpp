#include<cstdio>
#include<string>
void fun(int n, int r)
{
    int a[50], x ,i = 0;
    while(true)
    {
        x = n%r;
        n = n/r;
        a[i ++] = x;
        if(0 == n)
            break;
    }
    for(int j=i-1; j>=0; j--)
    {
        if(a[j]>=10&&r>=10)
        {
            switch(a[j])
            {
            case 10:
                printf("A");
                break;
            case 11:
                printf("B");
                break;
            case 12:
                printf("C");
                break;
            case 13:
                printf("D");
                break;
            case 14:
                printf("E");
                break;
            case 15:
                printf("F");
                break;
            }
        }
        else
            printf("%d",a[j]);
    }
    printf("\n");
}
int main()
{
    int N,R;
    while(scanf("%d%d",&N,&R)!=EOF)
    {
        if(N<0)
        {
            printf("-");
            N=-N;
        }
        fun(N,R);
    }
    return 0;
}
