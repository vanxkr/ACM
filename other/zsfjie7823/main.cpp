#include <stdio.h>


int f(int n,int m){
    int i,j,s = 0,sum = 0;
    if(n == 1 || m == 0)
        return 1;
    else if(n == m){
        for(i = n; i >= 1;i--){
            sum += f(i,n-i);
        }
        return sum;
    }
    else if(n > m)
        return f(m,m);
    else if(n < m){
        for(j = n; j >= 1;j-- ){
            s = s + f(j,m-1);
        }
        return s;
    }

}

int main(void){
	int n,m;
	while(scanf("%d%d",&n,&m) != EOF){
        printf("%d\n",f(n,m));
	}
	return 0;
}




//#include<stdio.h>
//
//int main()
//{
//    int a[20][20],n,i,j;
//    for(i=0; i<20; i++)
//    {
//        a[i][0]=1;
//        a[i][1]=1;
//        a[0][i]=1;
//        a[1][i]=1;
//    }
//    for(i=2; i<20; i++)
//        for(j=2; j<20; j++)
//            if(i>=j)
//                a[i][j] = a[i][j-1] + a[i-j][j];
//            else
//                a[i][j]=a[i][i];
//
//    for (i = 0; i < 20; ++ i)
//        for (j = 0; j < 20; ++ j)
//            printf("%d%s", a[i][j], ((j == 19) ? "\n" : "\t"));
//
////    while(scanf("%d",&n)==1)
////        printf("%d\n",a[n][n]);
//    return 0;
//}




