//#include <cstdio>
//
//int main( void )
//{
//    int a;
//    while ( scanf( "%d", &a ) != EOF && a )
//        printf( "%#x\n", a );
//
//    return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int main( void )
//{
//    int i, num, m[10001];
//    while ( cin >> num && num )
//    {
//        for ( i = 0; num > 0; i ++ )
//        {
//            m[i] = num % 2;
//            num /= 2;
//        }
//        for ( i --; i >= 0; i -- )
//            cout << m[i];
//        cout << endl;
//    }
//
//    return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//template < typename T >
//void Swap( T &a, T &b )
//{
//    if ( a > b )
//    {
//        a = a ^ b;
//        b = a ^ b;
//        a = a ^ b;
//    }
//}
//
//int main( void )
//{
//    char a, b, c;
//    while ( cin >> a >> b >> c )
//    {
//        Swap( a, b );
//        Swap( a, c );
//        Swap( b, c );
//        cout << a << " " << b << " " << c << endl;
//    }
//    return 0;
//}


//#include <iostream>
//#include <cmath>
//#include <cstdio>
//
//using namespace std;
//
//int main( void )
//{
//    double x1, y1, x2, y2;
//    while ( cin >> x1 >> y1 >> x2 >> y2 )
//        printf( "%.2lf\n", sqrt( ( x1 - x2 )*( x1 - x2 ) + ( y1 - y2 )*( y1 - y2 ) ) );
//    return 0;
//}


//#include <cstdio>
//#define PI 3.1415927
//
//int main( void )
//{
//    double r;
//    while ( scanf( "%lf", &r ) != EOF )
//        printf( "%.3lf\n", 4*PI*r*r*r/3 );
//    return 0;//        for ( i = 0; i < m; i ++ )
//}


//#include <cstdio>
//
//int main( void )
//{
//    double num;
//    while ( scanf( "%lf", &num ) != EOF )
//        if ( num < 0 )
//            printf( "%.2lf", num*-1 );
//        else
//            printf( "%.2lf", num );
//    return 0;
//}


//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//
//int main( void )
//{
//    int num;
//    while ( cin >> num )
//    {
//        if ( num >= 0 && num <= 59 )
//            printf( "E\n" );
//        else if ( num >= 60 && num <= 69 )
//            printf( "D\n" );
//        else if ( num >= 70 && num <= 79 )
//            printf( "C\n" );
//        else if ( num >= 80 && num <= 89 )
//            printf( "B\n" );
//        else if ( num >= 90 && num <= 100 )
//            printf( "A\n" );
//        else
//            printf( "Score is error!\n" );
//    }
//    return 0;
//}


//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//
//int main( void )
//{
//    int a, b, c, d;
//    while ( scanf( "%d/%d/%d", &a, &b, &c ) != EOF )
//    {
//        switch ( b )
//        {
//            case 1 : d = 0; break;
//            case 2 : d = 31; break;
//            case 3 : d = 59; break;
//            case 4 : d = 90; break;
//            case 5 : d = 120; break;
//            case 6 : d = 151; break;
//            case 7 : d = 181; break;
//            case 8 : d = 212; break;
//            case 9 : d = 243; break;
//            case 10 : d = 273; break;
//            case 11 : d = 304; break;
//            case 12 : d = 334; break;
//        }
//        d += c;
//        if ( b > 2 )
//            d += ( ( ( a % 4 == 0 ) && ( a % 100 != 0 ) || ( a % 400 == 0 ) ) );
//        cout << d << endl;
//    }
//    return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int main( void )
//{
//    int n, s, k, i;
//    while ( cin >> n )
//    {
//        s = 1;
//        for ( i = 0; i < n; i ++ )
//        {
//            cin >> k;
//            if ( k & 1 )
//                s *= k;//        for ( i = 0; i < m; i ++ )
//        }
//        cout << s << endl;
//    }
//    return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//template < typename T >
//void Swap( T &a, T &b )
//{
//    if ( a > b )
//    {
//        a = a ^ b;
//        b = a ^ b;
//        a = a ^ b;
//    }
//}
//
//int main( void )
//{
//    int a, b, i;
//    int x, y;
//    while ( cin >> a >> b )
//    {
//        Swap( a, b );
//        x = 0, y = 0;
//        for ( i = a; i <= b; i ++ )
//            if ( i & 1 )
//                x += i*i*i;
//            else
//                y += i*i;
//        cout << y << " " << x << endl;
//    }
//    return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int main( void )
//{
//    int n, i, x, y, z;
//    double a;
//    while ( cin >> n && n )
//    {
//        x = y = z = 0;
//        for ( i = 0; i < n; i ++ )
//        {
//            cin >> a;
//            if ( a > 0 )
//                z ++;
//            else if ( !a )
//                y ++;
//            else
//                x ++;
//        }
//        cout << x << " " << y << " " << z << endl;
//    }
//    return 0;
//}


//#include <cstdio>
//#include <cmath>
//
//int main( void )
//{
//    int m, i;
//    double n, sum;
//    while ( scanf( "%lf %d", &n, &m ) != EOF )
//    {
//        n *= n;
//        sum = 0;
//        for ( i = 0; i < m; i ++ )
//        {
//            n = sqrt( n );
//            sum += n;
//        }
//        printf( "%.2lf\n", sum );
//    }
//    return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int main( void )
//{
//    int m, n, i, st[9], k;
//    while ( cin >> m >> n )
//    {
//        k = 0;
//        for ( i = m; i <= n; i ++ )
//        {
//            if ( i == ( i%10 )*( i%10 )*( i%10 ) + ( ( i/10 )%10 )*( ( i/10 )%10 )*( ( i/10 )%10 ) + ( i/100 )*( i/100 )*( i/100 ) )
//                st[k++] = i;
//        }
//        if ( k )
//        {
//            if ( k > 1 )
//                for ( i = 0; i < k - 1; i ++ )
//                    cout << st[i] << " ";
//            cout << st[k - 1] << endl;
//
//        }
//        else
//            cout << "no" << endl;
//    }
//    return 0;
//}


//#include <cstdio>
//
//int main( void )
//{
//    int m, n, i;
//    double sum;
//    scanf( "%d", &m );
//    while ( m -- )
//    {
//        sum = 0;
//        scanf( "%d", &n );
//        for ( i = 1; i <= n; i ++ )
//            if ( i & 1 )
//                sum += 1/( double )i;
//            else
//                sum += -1/( double )i;
//        printf( "%.2lf\n", sum );
//    }
//    return 0;
//}


//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//bool Isprime( int a )
//{
//    int i;
//    for ( i = 2; i <= sqrt( ( double )a ); i ++ )
//        if ( ! ( a%i ) )
//            return false;
//    return true;
//}
//
//int main( void )
//{
//    int x, y, n;
//    while ( cin >> x >> y && ( x || y ) )
//    {
//        for ( n = x; n <= y; n ++ )
//            if ( !Isprime( n*n + n + 41 ) )
//            {
//                cout << "Sorry" << endl;
//                break;
//            }
//        if ( n == ( y + 1 ) )
//            cout << "OK" << endl;
//    }
//    return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int main( void )
//{
//    int n, x;
//    while ( cin >> n )
//    {
//        x = 1;
//        while ( -- n )
//            x = ( x + 1 ) << 1;
//        cout << x << endl;
//    }
//    return 0;
//}


//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//
//int cmp(const void *a, const void *b)
//{
//    return *(int *)a - *(int *)b;
//}
//
//int main( void )
//{
//    int m, i, st[101];
//    double val;
//    while ( scanf( "%d", &m ) != EOF )
//    {
//        val = 0;
//        memset( st, 0, sizeof(st) );
//        for ( i = 0; i < m; i ++ )
//            scanf( "%d", &st[i] );
//        qsort(st, m, sizeof(st[0]), cmp);
//        for ( i = 1; i < m - 1; i ++ )
//            val += st[i];
//        val /= m - 2;
//        printf( "%.2lf\n", val );
//    }
//    return 0;
//}
//*
//3 99 98 97
//4 100 99 98 97
//10 96 89 67 87 90 37 65 95 88 47
//


//#include <iostream>
//
//using namespace std;
//
//int main( void )
//{
//    int i, j, k, n, m, sum;
//    while ( cin >> n >> m )
//    {
//        j = k = sum = 0;
//        for ( i = 2; j < n; i += 2 )
//        {
//            sum += i;
//            j ++;
//            k ++;
//            if ( k == m )
//            {
//                if ( j == n )
//                    cout << sum/m << endl;
//                else
//                    cout << sum/m << " ";
//                sum = k = 0;
//            }
//        }
//    }
//    return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int main( void )
//{
//    int a, b;
//    while ( cin >> a >> b && a || b )
//        cout << a + b << endl;
//    return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int main( void )
//{
//    int n, i, a, sum;
//    while ( cin >> n && n )
//    {
//        sum = 0;
//        for ( i = 0; i < n; i ++ )
//        {
//            cin >> a;
//            sum += a;
//        }
//        cout << sum << endl;
//    }
//    return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int main( void )
//{
//    int n, i, a, sum, m;
//    cin >> m;
//    while ( m -- )
//        while ( cin >> n && n )
//        {
//            sum = 0;
//            for ( i = 0; i < n; i ++ )
//            {
//                cin >> a;
//                sum += a;
//            }
//            cout << sum << endl;
//        }
//        return 0;
//}
//
//
//#include<iostream>
//#include<cstring>
//#include<string>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//#define MAX 1000
//int father[MAX], son[MAX];
//int v, l;
//
//typedef struct Kruskal //存储边的信息
//{
//	int a;
//	int b;
//	int value;
//};
//
//bool cmp(const Kruskal & a, const Kruskal & b)
//{
//	return a.value < b.value;
//}
//
//int unionsearch(int x) //查找根结点+路径压缩
//{
//	return x == father[x] ? x : unionsearch(father[x]);
//}
//
//bool join(int x, int y) //合并
//{
//	int root1, root2;
//	root1 = unionsearch(x);
//	root2 = unionsearch(y);
//	if(root1 == root2) //为环
//		return false;
//	else if(son[root1] >= son[root2])
//		{
//			father[root2] = root1;
//			son[root1] += son[root2];
//		}
//		else
//		{
//			father[root1] = root2;
//			son[root2] += son[root1];
//		}
//	return true;
//}
//
//int main()
//{
//	int ncase, ltotal, sum, flag;
//	Kruskal edge[MAX];
//	scanf("%d", &ncase);
//	while(ncase--)
//	{
//		scanf("%d%d", &v, &l);
//		ltotal = 0, sum = 0, flag = 0;
//		for(int i = 1; i <= v; ++i) //初始化
//		{
//			father[i] = i;
//			son[i] = 1;
//		}
//		for(int i = 1; i <= l ; ++i)
//		{
//			scanf("%d%d%d", &edge[i].a, &edge[i].b, &edge[i].value);
//		}
//		sort(edge + 1, edge + 1 + l, cmp); //按权值由小到大排序
//		for(int i = 1; i <= l; ++i)
//		{
//			if(join(edge[i].a, edge[i].b))
//			{
//				ltotal++; //边数加1
//				sum += edge[i].value; //记录权值之和
//				cout<<edge[i].a<<"->"<<edge[i].b<<endl;
//			}
//			if(ltotal == v - 1) //最小生成树条件：边数=顶点数-1
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if(flag) printf("%d\n", sum);
//		else printf("data error.\n");
//	}
//	return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int main( void )
//{
//    int sum, m, num;
//    while ( cin >> m )
//    {
//        sum = 0;
//        for ( int i = 0; i < m; i ++ )
//        {
//            cin >> num;
//            sum += num;
//        }
//        cout << sum << endl;
//    }
//    return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int main( void )
//{
//    int a, b;
//    while ( cin >> a >> b )
//        cout << a + b << endl << endl;
//    return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int main( void )
//{
//    int m, n, num, sum;
//    cin >> m;
//    while ( m -- )
//    {
//        sum = 0;
//        cin >> n;
//        for ( int i = 0; i < n; i ++ )
//        {
//            cin >> num;
//            sum += num;
//        }
//        cout << sum << endl;
//        if ( m != 0 )
//            cout << endl;
//    }
//    return 0;
//}


////敌兵布阵
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//int c[50010];
//int p[50010];
//int n;
//
//int lowbit(int x)
//{
//    return x&(-x);
//}
//
//int getsum(int x)
//{
//    int s=0;
//    while(x>0)
//    {
//        s+=c[x];
//        x-=p[x];
//    }
//    return s;
//}
//
//int modify(int x,int d)
//{
//    while(x<=n)
//    {
//        c[x]+=d;
//        x+=p[x];
//    }
//    return 0;
//}
//
//int main()
//{
//    int k;
//    char s[10];
//    int ik,jk;
//    scanf("%d",&k);
//    for(int i=0; i<=50000; i++)
//    {
//        p[i]=lowbit(i);
//    }
//    for(int js=1; js<=k; js++)
//    {
//        printf("Case ");
//        printf("%d:\n",js);
//        memset(c,0,sizeof(c));
//        scanf("%d",&n);
//        for(int i=1; i<=n; i++)
//        {
//            int tmp;
//            scanf("%d",&tmp);
//            modify(i,tmp);
//        }
//        while(scanf("%s",&s)!=EOF && s[0]!='E')
//        {
//            if(s[0]=='Q')
//            {
//                scanf("%d%d",&ik,&jk);
//                int sum=getsum(jk)-getsum(ik-1);
//                printf("%d\n",sum);
//            }
//            else if(s[0]=='A')
//            {
//                scanf("%d%d",&ik,&jk);
//                modify(ik,jk);
//            }
//            else
//            {
//                scanf("%d%d",&ik,&jk);
//                modify(ik,(-1)*jk);
//            }
//        }
//    }
//    return 0;
//}


//#include <cstdio>
//#include <cstring>
//
//using namespace std;
//
//int main( void )
//{
//    int num, m, len;
//    char st[10001];
//    scanf( "%d", &m );
//    while ( m -- )
//    {
//        num = 0;
//        scanf( "%s", st );
//        len = strlen(st);
//        for ( int i = 0; i < len; i ++ )
//            if ( st[i] >= '0' && st[i] <= '9' )
//                num ++;
//        printf( "%d\n", num );
//    }
//    return 0;
//}


////大数加法
//#include <stdio.h>
//#include <string.h>
//#define MAX 36000
//
//char s1[MAX], s2[MAX];
//int a[MAX], b[MAX];
//
//void Int_Int_add(char *s1, char *s2)
//{
//    int len1 = strlen(s1), len2 = strlen(s2), len, i;
//    memset(a, 0, sizeof(a));
//    memset(b, 0, sizeof(a));
//    for(i = 0; i < len1; i++) a[i] = s1[len1 - 1 - i] - '0';
//    for(i = 0; i < len2; i++) b[i] = s2[len2 - 1 - i] - '0';
//    len = len1 > len2 ? len1 : len2;
//    for(i = 0; i < len; i++)
//    {
//        a[i] += b[i];
//        if(a[i] > 9)
//        {
//            a[i] %= 10;
//            a[i + 1]++;
//        }
//    }
//    if(a[len]) printf("%d", a[len]);
//    for(i = len - 1; i >= 0; printf("%d", a[i--])) ;
//    puts("");//
//}
//
//int main()
//{
//    int n, t;
//    scanf( "%d", &n );
//    for(t = 1; t <= n; t++)
//    {
//        scanf("%s%s", s1, s2);
//        printf("Case %d:\n%s + %s = ", t, s1, s2);
//        Int_Int_add(s1, s2);
//        if(t < n) puts("");
//    }
//    return 0;
//}
//
//
//素数打表
//#include <iostream>
//#include <cmath>
//#include <cstdlib>
//#include <cstdio>
//
//using namespace std;
//
//bool Prime( __int64 m );
//
//int main( void )
//{
//    //freopen("out.txt","w",stdout);
//    __int64 m;
//    while ( cin >> m )
//        for ( __int64 i = 2; i < m; i ++ )
//            if ( Prime( i ) )
//                cout << i << endl;
//    return 0;
//}
//
//bool Prime( __int64 m )
//{
//    __int64 k;
//    k = sqrt( m );
//    for ( __int64 i = 2; i <= k; i ++ )
//        if ( 0 == m%i )
//            return false;
//    return true;
//}


//#include <stdio.h>
//#include <string.h>
//#define MAX 36000
//
//char s1[MAX], s2[MAX];
//int a[MAX], b[MAX];
//
//void Int_Int_add(char *s1, char *s2)
//{
//    int len1 = strlen(s1), len2 = strlen(s2), len, i;
//    memset(a, 0, sizeof(a));
//    memset(b, 0, sizeof(a));
//    for(i = 0; i < len1; i++) a[i] = s1[len1 - 1 - i] - '0';
//    for(i = 0; i < len2; i++) b[i] = s2[len2 - 1 - i] - '0';
//    len = len1 > len2 ? len1 : len2;
//    for(i = 0; i < len; i++)
//    {
//        a[i] += b[i];
//        if(a[i] > 9)
//        {
//            a[i] %= 10;
//            a[i + 1]++;
//        }
//    }
//    if(a[len]) printf("%d", a[len]);
//    for(i = len - 1; i >= 0; printf("%d", a[i--])) ;
//    puts("");//
//}
//
//int main()
//{
//    int n, t;
//    scanf( "%d", &n );
//    for(t = 1; t <= n; t++)
//    {
//        scanf("%s%s", s1, s2);
//        printf("Case %d:\n%s + %s = ", t, s1, s2);
//        Int_Int_add(s1, s2);
//        if(t < n) puts("");
//    }
//    return 0;
//}
//
//
/////完数打表
//#include <iostream>
//#include <cmath>
//#include <cstdlib>
//#include <cstdio>
//
//using namespace std;
//
//bool Wanshu( __int64 m );
//
//int main( void )
//{
//    //freopen("out.txt","w",stdout);
//    __int64 m;
//    while ( cin >> m )
//        for ( __int64 i = 2; i < m; i ++ )
//            if ( Wanshu( i ) )
//                cout << i << endl;
//    return 0;
//}
//
//bool Wanshu( __int64 m )
//{
//	__int64 i, k, sum=0;
//	k = m/2;
//	if( m == 1 )
//        return false;
//	else
//	{
//		for( i = 1; i <= k; i ++ )
//			if( m%i == 0 )
//                sum += i;
//		if(sum==m)
//            return true;
//		else
//            return false;
//	}
//}


////大数浮点数幂
//#include<cstdio>
//#include<cstring>
//#include<algorithm>
//#include<cmath>
//int main()
//{
//	char A[1500];
//	int a[1500],b[1500],n,s,c,i,j,k,h,sum[3000]={0},m;
//	while(scanf("%s",A)==1)
//	{
//	scanf("%d",&n);
//		if(n==0)
//	{
//			printf("1\n");
//	continue;
//	}
//	h=strlen(A);
//	for(i=0;i<h;i++)
//	{
//		if(A[i]!='0'&&A[i]!='.')
//		break;
//	}
//	if(i==h)
//	{
//		printf("0\n");
//		continue;
//	}
//	std::reverse(A,A+h);
//	j=0;
//	m=0;
//	k=0;
//	for(i=0;i<h;i++)
//	{
//		if(A[i]=='.')
//		{
//			k=i;
//			continue;
//		}
//		a[m]=A[i]-'0';
//		if(a[m]==0)
//			j++;
//		m++;
//	}
//	k=k*n;
//	h=m;
//	memcpy(b,a,sizeof(a));
//	memcpy(sum,a,sizeof(int)*h);
//    while(n-->=2)
//	{
//	memset(sum,0,sizeof(sum));
//	for(i=0;i<h;i++)
//	{
//		c=0;
//		for(j=0;j<m;j++)
//		{
//			s=a[i]*b[ j]+sum[i+j]+c;
//			sum[i+j]=s%10;
//			c=s/10;
//		}
//		sum[i+m]=c;
//	}
//
//		m=2800;
//	while(sum[m-1]==0)
//		m--;
//	for(i=0;i<m;i++)
//	{
//		b[i]=sum[i];
//	}
//	}
//		m=2800;
//	while(sum[m-1]==0)
//		m--;
//	std::reverse(sum,sum+m);
//	if(k>m)
//	{
//		printf(".");
//		for(i=1;i<=k-m;i++)
//			printf("0");
//	}
//	c=m;
//	while(!sum[c]&&c>=m-k)
//	{
//		c--;
//	}
//	for(i=0;i<=c;i++)
//	{
//		if(i==m-k)
//			printf(".");
//			printf("%d",sum[i]);
//	}
//	memset(sum,0,sizeof(sum));
//	printf("\n");
//	}
//}


//斐波那契打表 hdu1005
//#include <iostream>
//
//using namespace std;
//
//void fblq( int m, int a, int b );
//
//int main( void )
//{
//    int m, a, b;
//    while ( cin >> a >> b >> m && a + b + m )
//        fblq( m, a, b );
//    return 0;
//}
//
//void fblq( int m, int a, int b )
//{
//    int f[101] = {0, 1, 1};
//    for ( int i = 3; i < 100; i ++ )
//        f[i] = ( a * f[i - 1] + b * f[i - 2] ) % 7;
//    cout << f[m%49] << endl;
//}


//HDU1009 贪心
//#include <iostream>
//#include <cstdio>
//#include <cstdlib>
//
//using namespace std;
//
//template < typename T >
//void Swap( T &a, T &b )
//{
//    a = a ^ b;
//    b = a ^ b;
//    a = a ^ b;
//}
//
//int main( void )
//{
//    int m, n, i, j, i1[1001], i2[1001];
//    double d[1001], sum, k;
//    while ( cin >> m >> n )
//    {
//        sum = 0;
//        if ( -1 == m && -1 == n )
//            break;
//        for ( i = 0; i < n; i ++ )
//        {
//            cin >> i1[i] >> i2[i];
//            d[i] = (double)i1[i] / (double)i2[i];
//        }
//        for ( i = 0; i < n; i ++ )
//            for ( j =i; j < n; j ++ )
//            {
//                if ( d[i] < d[j] )
//                {
//                    k = d[i];
//                    d[i] = d[j];
//                    d[j] = k;
//                    Swap( i1[i], i1[j] );
//                    Swap( i2[i], i2[j] );
//                }
//            }
//        i = 0;
//        while ( m && n - i )
//        {
//            if ( m > i2[i] )
//            {
//                sum += i1[i];
//                m -= i2[i];
//                i ++;
//            }
//            else
//            {
//                sum += m*d[i];
//                break;
//            }
//        }
//        printf( "%.3lf\n", sum );
//    }
//    return 0;
//}


//HDU 1021 规律
//#include <iostream>
//
//using namespace std;
//
//int fblq( int m );
//int hanshu( int m );
//
//int main( void )
//{
//    int m, k, i;
//    //for ( m = 0; m < 10; m ++ )
//    while ( cin >> m )
//    {
//        k = hanshu( m );
//        if ( 0 == k%3 )
//        {
//            cout << "yes" << endl;
//            continue;
//        }
//        for ( i = 0; k >= fblq( i ); i ++ )
//            if ( k == fblq( i ) )
//            {
//                cout << "yes" << endl;
//                break;
//            }
//        if ( fblq( i ) > k )
//            cout << "no" << endl;
//
//    }
//    return 0;
//}
//
//int fblq( int m )
//{
//    int f[101] = { 1, 1 }, i;
//    for ( i = 2; i <= m; i ++ )
//        f[i] = f[i - 1] + f[i - 2];
//    return f[m];
//}
//
//int hanshu( int m )
//{
//    int i;
//    int f[101] = { 7, 11 };
//    for ( i = 2; i <= m; i ++ )
//        f[i] = f[i - 1] + f[i - 2];
//    return f[m];
//}


//#include <iostream>
//
//using namespace std;
//
//int main( void )
//{
//    long m;
//    while ( cin >> m )
//        (m%4-2) == 0 ? cout << "yes" << endl : cout << "no" << endl;
//    return 0;
//}


//HDU 4503 组合数学
//#include <cstdio>
//
//int main( void )
//{
//    int m, n, st[1001], i;
//    double a;
//    scanf( "%d", &m );
//    while ( m -- )
//    {
//        a = 0;
//        scanf( "%d", &n );
//        for ( i = 0; i < n; i ++ )
//        {
//            scanf( "%d", &st[i] );
//            a += st[i]*(n - 1 - st[i]);
//        }
//        printf( "%.3lf\n", 1 - ( a*3 / (n*(n - 1)*(n - 2))));
//    }
//    return 0;
//}


//#include <iostream>
//#include <iomanip>
//#include <cmath>
//#define PI 3.1415927
//using namespace std;


//快速幂模运算 (a^n)%m
//__int64 pow_mod(__int64 a, __int64 n, __int64 m) {
//    if(n==0) return 1;
//    int x = pow_mod(a, n/2, m);
//    long long ans = (long long)x*x%m;
//    if(n%2==1) ans = ans*a%m;
//    return (int)ans;
//}
//
//int main()
//{
//    __int64 a, n, m;
//    while( cin >> a >> n >> m )
//    {
//        if(n==0&&m==0)
//            break;
//        cout << pow_mod(a, n, m) << endl;
//    }
//    return 0;
//}


//浮点数幂运算
//#include <iostream>
//#include <cmath>
//#include<cstdio>
//#include<cstring>
//#include<algorithm>
//
//int main()
//{
//	char A[1500];
//	int a[1500], b[1500], n, s, c, i, j, k, h, sum[3000] = {0}, m;
//	while(scanf("%s", A) == 1)
//	{
//        scanf("%d", &n);
//		if(n == 0) {printf("1\n"); continue;}
//        h = strlen(A);
//        for(i = 0; i < h; i++)
//        {
//            if(A[i] != '0' && A[i] != '.') break;
//        }
//        if(i == h) {printf("0\n"); continue;}
//        std::reverse(A, A + h);
//        j = 0;
//        m = 0;
//        k = 0;
//        for(i = 0; i < h; i++)
//        {
//            if(A[i] == '.') {k = i; continue;}
//            a[m] = A[i] - '0';
//            if(a[m] == 0) j++;
//            m++;
//        }
//        k = k * n;
//        h = m;
//        memcpy(b, a, sizeof(a));
//        memcpy(sum, a, sizeof(int) * h);
//        while(n-->=2)
//        {
//            memset(sum, 0, sizeof(sum));
//            for(i = 0; i < h; i++)
//            {
//                c = 0;
//                for(j = 0; j < m; j++)
//                {
//                    s = a[i] * b[j] + sum[i + j] + c;
//                    sum[i + j] = s % 10;
//                    c = s / 10;
//                }
//                sum[i + m] = c;
//            }
//            m = 2800;
//            while(sum[m - 1] == 0) m--;
//            for(i = 0; i < m; i++) b[i] = sum[i];
//        }
//        m = 2800;
//        while(sum[m - 1] == 0) m--;
//        std::reverse(sum, sum + m);
//        if(k > m)
//        {
//            printf(".");
//            for(i = 1; i <= k - m; i++) printf("0");
//        }
//        c = m;
//        while(!sum[c] && c >= m - k) c--;
//        for(i = 0; i <= c; i++)
//        {
//            if(i == m - k) printf(".");
//            printf("%d", sum[i]);
//        }
//        memset(sum, 0, sizeof(sum));
//        printf("\n");
//    }
//    return 0;
//}


//2013.10 大学生程序设计竞赛 好老师
//#include <cstdio>
//#include <cstring>
//#include <cmath>
//
//using namespace std;
//
//int main( void )
//{
//    char st[101][4];
//    char right[] = "right of ";
//    char left[] = "left of ";
//    int i, j, m, n, p, e, g, d[101], t = 1, a;
//    scanf( "%d", &m );
//    for ( i = 1; i <= m; i ++ )
//    {
//        scanf( "%s", st[i] );
//        if ( strcmp( st[i], "?" ) != 0 )
//            d[t ++] = i;
//    }
//    scanf( "%d", &n );
//    for ( i = 1; i <= n; i ++ )
//    {
//        g = 0;
//        p = 101;
//        scanf( "%d", &a );
//        for ( j = 1; j < t; j ++ )
//        {
//            e = a - d[j];
//            if ( abs( p ) >= abs( e ) )
//            {
//                if ( p == (-1)*e && p != 0)
//                    g = 1;
//                else
//                    p = e;
//            }
//        }
//        if ( g )
//            printf( "middle of %s and %s\n", st[a - p], st[a + p] );
//        else if ( p == 0 )
//            printf( "%s\n", st[a] );
//        else if ( p > 0 )
//        {
//            for ( i = 1; i <= p; i ++ )
//                printf( "%s", right );
//            printf( "%s\n", st[a - p] );
//        }
//        else
//        {
//            for ( i = 1; i <= abs( p ); i ++ )
//                printf( "%s", left );
//            printf( "%s\n", st[a - p] );
//        }
//    }
//    return 0;
//}
//
//10
//A ? ? D ? ? ? H ? ?


//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main( void )
//{
//    long x, y;
//    int h, x1, y1, sum, c, i, j;
//    while ( cin >> x >> y )
//    {
//        h = pow( y, 1.0/3 );
//        sum = 0;
//        for ( i = x; i < h; i ++ )
//            for ( j = x + 1; j <= h; j ++ )
//            {
//               // x1 = i%10;
//              //  y1 = j%10;
//              //  if ( ( x1 == 0 && y1 == 7 ) || ( x1 == 1 && y1 == 8 ) || ( x1 == 2 && y1 == 5 ) || ( x1 == 3 && y1 == 6 ) || ( x1 == 4 && y1 == 9 ) || ( y1 == 0 && x1 == 7 ) || ( y1 == 1 && x1 == 8 ) || ( y1 == 2 && x1 == 5 ) || ( y1 == 3 && x1 == 6 ) || ( y1 == 4 && x1 == 9 ) )
//              //  {
//                    c = ( ( pow( i, 3 ) + pow( j, 3 ) )*10 )/10;
//                    if ( c <= y )
//                        sum += 2;
//                    else
//                        break;
//              //  }
//            }
//            cout << sum << endl;
//    }
//    return 0;
//}


//快排 qsort
//#include <cstdio>
//#include <cstdlib>
//
//int cmp( const void *a, const void *b )
//{
//    return *( int * )b - *( int * )a;
//}
//
//int main( void )
//{
//    int n, st[1001], i, j;
//    while ( scanf( "%d", &n ) != EOF )
//    {
//        for ( i = 0; i < n; i ++ )
//            scanf( "%d", &st[i] );
//        qsort( st, n, sizeof( int ), cmp );
//        for ( i = 0; i < n - 1; i ++ )
//            printf( "%d > ", st[i] );
//        printf( "%d\n", st[i] );
//    }
//    return 0;
//}


//hdu 1004 Financial Management
//#include <cstdio>
//
//int main( void )
//{
//    double st[12], sum = 0;
//    int i;
//    for ( i = 0; i < 12; i ++ )
//    {
//        scanf( "%lf", &st[i] );
//        sum += st[i];
//    }
//    printf( "$%.2lf", sum/12 );
//    return 0;
//}


//hdu 2006 求奇数的乘积
//#include <iostream>
//
//using namespace std;
//
//int main( void )
//{
//    int i, m, num, sum;
//    while ( cin >> m )
//    {
//        for ( sum = 1, i = 0; i < m; i ++ )
//        {
//            cin >> num;
//            if ( num & 1 )
//                sum *= num;
//        }
//        cout << sum << endl;
//    }
//    return 0;
//}


//hdu 2007 平方和与立方和
//#include <iostream>
//
//using namespace std;
//
//int main( void )
//{
//    int x, y, i, j, o;
//    while ( cin >> x >> y )
//    {
//        if ( x > y )
//        {
//            x = x ^ y;
//            y = x ^ y;
//            x = x ^ y;
//        }
//        for ( j = 0, o = 0, i = x; i <= y; i ++ )
//        {
//            if ( i & 1 )
//                j += i*i*i;
//            else
//                o += i*i;
//        }
//        cout << o << " " << j << endl;
//    }
//    return 0;
//}


//hdu 2099 整除的尾数
//#include <iostream>
//
//using namespace std;
//
//int main( void )
//{
//    int m, n, i, k;
//    while ( cin >> m >> n && m + n )
//    {
//        m *= 100;
//        k = 1;
//        for ( i = 0; i < 100; i ++ )
//            if ( ( m + i ) % n == 0 )
//                if ( k )
//                {
//                    if ( i > 9 )
//                        cout << i;
//                    else
//                        cout << "0" << i;
//                    k = 0;
//                }
//                else
//                    cout << " " << i;
//        cout << endl;
//    }
//    return 0;
//}


//HDU 2098 分拆素数和
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//bool Prime( int m );
//
//int main( void )
//{
//    int m, sum, i, n;
//    while ( cin >> m && m )
//    {
//        n = m/2;
//        for ( sum = 0, i = 2 ; i < n; i ++ )
//        {
//            if ( Prime( i ) && Prime( m - i ) )
//                sum ++;
//        }
//        cout << sum << endl;
//    }
//    return 0;
//}
//
//bool Prime( int m )
//{
//    int k;
//    k = sqrt( m );
//    for ( int i = 2; i <= k; i ++ )
//        if ( 0 == m%i )
//            return false;
//    return true;
//}


//HDU 2097 Sky数 进制转换
//#include <iostream>
//
//using namespace std;
//
//int Sum( int num, int n )
//{
//    int sum = 0;
//    while ( num )
//    {
//        sum += num%n;
//        num /= n;
//    }
//    return sum;
//}
//
//int main( void )
//{
//    int m;
//    while ( cin >> m && m )
//    {
//        cout << m << ( Sum( m, 10 ) == Sum( m, 12 ) && Sum( m, 10 ) == Sum( m, 16 ) ? " is a Sky Number." : " is not a Sky Number." ) << endl;
//    }
//    return 0;
//}


//hdu 2096 小明A+B
//#include <iostream>
//
//using namespace std;
//
//int main( void )
//{
//    int a, b, m;
//    cin >> m;
//    while ( m -- )
//    {
//        cin >> a >> b;
//        cout << ( a + b )%100 << endl;
//    }
//    return 0;
//}


//HDu 2008 数值统计
//#include <iostream>
//
//using namespace std;
//
//int main( void )
//{
//    int m, a, b, c;
//    double n;
//    while ( cin >> m && m )
//    {
//        a = b = c = 0;
//        while ( m -- )
//        {
//            cin >> n;
//            if ( n < 0 )
//                a ++;
//            else if ( 0 == n )
//                b ++;
//            else
//                c ++;
//        }
//        cout << a << " " << b  << " " << c << endl;
//    }
//    return 0;
//}


//HDU 2009 求数列的和
//#include <cstdio>
//#include <cmath>
//
//using namespace std;
//
//int main( void )
//{
//    int m;
//    double n, sum;
//    while ( scanf( "%lf %d", &n, &m ) != EOF )
//    {
//        sum = 0;
//        while ( m -- )
//        {
//            sum += n;
//            n = sqrt( n );
//        }
//        printf( "%.2lf\n", sum );
//    }
//    return 0;
//}


//HDU 2010 水仙花数
//#include <iostream>
//
//using namespace std;
//
//int main( void )
//{
//    int m, n, i, k;
//    while ( cin >> m >> n )
//    {
//        k = 1;
//        for ( i = m; i <= n; i ++ )
//            if ( i == (i/100)*(i/100)*(i/100) + ((i/10)%10)*((i/10)%10)*((i/10)%10) + (i%10)*(i%10)*(i%10) )
//            {
//                if ( k )
//                {
//                    cout << i;
//                    k = 0;
//                }
//                else
//                    cout << " " << i;
//            }
//            if ( k )
//                cout << "no" << endl;
//            else
//                cout << endl;
//    }
//    return 0;
//}


//HDU 2011 多项式求和
//#include <cstdio>
//
//int main( void )
//{
//    int i, n, m, k;
//    double sum;
//    scanf( "%d", &m );
//    while ( m -- )
//    {
//        scanf( "%d", &n );
//        for ( sum = 0, i = k = 1; i <= n; i ++, k *= -1 )
//        {
//            sum += ( 1/( double )i )*k;
//        }
//        printf( "%.2lf\n", sum );
//    }
//    return 0;
//}


//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int o, i;
//
//int kkk( int k )
//{
//    if ( k == 1 )
//    {
//        if ( o )
//        {
//            cout << i;
//            o = 0;
//        }
//        else
//            cout << " " << i;
//    }
//    else if ( k & 1 )
//        return ( 3*k + 1 );
//    else
//        return ( k/2 );
//}
//
//int main( void )
//{
//    int x, y;
//    while ( cin >> x >> y )
//    {
//        for ( o = 1, i = x; i <= y; i ++ )
//            kkk( i );
//    }
//    return 0;
//}


//#include <iostream>
//#include <cstring>
//#include <climits>
//#include <queue>
//using namespace std;
//
//class node
//{
//public:
//    int x;
//    int y;
//    int cengshu;
//};
//bool visited[300][300];
//
//node start, finish;
//int  n;
//
//int off_x[9] = {0, -1, -2, -2, -1, 1, 2, 2, 1};
//int off_y[9] = {0, -2, -1, 1, 2, 2, 1, -1, -2};
//
////第i个位置是否合法
//bool isLeagal(int i, node x)
//{
//    x.x += off_x[i];
//    x.y += off_y[i];
//    if(x.x<0 || x.x>=n || x.y<0 || x.y>=n)
//    {
//        return false;
//    }
//
//    if(visited[x.x][x.y])
//    {
//        return false;
//    }
//    else
//    {
//        return true;
//    }
//}
//
//void BFS()
//{
//    queue<node> q1;
//    node current,next;
//    int i;
//
////不用搜索的情况
//    if(start.x == finish.x && start.y == finish.y)
//    {
//        finish.cengshu = 0;
//        return;
//    }
////初试节点进队列
//    else
//    {
//        q1.push(start);
//    }
//
//    while(!q1.empty())
//    {
//        //处理当前节点
//        current = q1.front();
//        q1.pop();
//
//        //8个方向
//        for(i=1; i<=8; i++)
//        {
//            if(isLeagal(i, current))
//            {
//                next.x = current.x + off_x[i];
//                next.y = current.y + off_y[i];
//                next.cengshu = current.cengshu+1;
//                //成功找到
//                if(next.x == finish.x && next.y == finish.y)
//                {
//                    finish.cengshu = next.cengshu;
//                    return;
//                }
//                //进队列
//                q1.push(next);
//                //访问数组标记
//                visited[next.x][next.y]=true;
//            }
//        }
//    }
//}
//
//int main()
//{
//    int t;
//    cin >> t;
//
//    while(t--)
//    {
//        cin >> n;
//        cin>>start.x>>start.y>>finish.x>>finish.y;
//        start.cengshu = finish.cengshu=0;
//        memset(visited,0,sizeof(visited));
//        BFS();
//        cout << finish.cengshu << endl;
//    }
//
//    return 0;
//}


// HDU 2088 Box of Bricks
//#include <iostream>
//
//using namespace std;
//
//int main(void)
//{
//	int num, st[101], i, sum, _num;
//	while (cin >> num && num)
//	{
//		for (sum = 0, i = 0; i < num; i++)
//		{
//			cin >> st[i];
//			sum += st[i];
//		}
//		sum /= num;
//		for (_num = 0, i = 0; i < num; i++)
//		if (sum < st[i])
//			_num += st[i] - sum;
//		cout << _num << endl;
//
//	}
//	return 0;
//}


//HDU 2087 剪花布条
//#define  _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
//#include <cstring>
//
//int main(void)
//{
//	char st1[1001], st2[1001];
//	int len1, len2, i, j, sum;
//	while (scanf("%s", st1) && strcmp("#", st1))
//	{
//		scanf("%s", st2);
//		len1 = strlen(st1);
//		len2 = strlen(st2);
//		for (sum = i = 0; i < len1; i++)
//		{
//			for (j = 0; j < len2; j++)
//			{
//				if (st1[i + j] != st2[j])
//					break;
//			}
//			if (j == len2)
//			{
//				i += len2 - 1;
//				sum++;
//			}
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}


//双向链表
//#include <cstdio>
//#include <iostream>
//#include <cstdlib>
//#include <malloc.h>
//
//#define INIT_LENGTH 10
//#define OK 1
//#define ERROR 0
//
//using namespace std;
//
//struct  Stdudent		//学生结构体
//{
//	long num;			//学号
//	char name[20];		//姓名
//	int score;			//成绩
//};
//
//typedef struct DuLNode		//双向链表
//{
//	int data;
//	struct DuLNode * prior;		//前趋节点
//	struct DuLNode * next;		//后趋节点
//} DuLNode, *DuLinkList;
//
//int ListInsert_DuL(DuLinkList&L, int i, int e)		//链表插入
//{
//	DuLNode *p = L, *s;
//	int j = 0;
//	if (i < 1 || i > INIT_LENGTH + 1)				//超出范围
//	{
//		cout << "ERROR! Out of location!";
//		return ERROR;
//	}
//	while (j < i)
//	{
//		p = p->next;
//		j++;
//	}
//	if (!(s = (DuLinkList)malloc(sizeof(DuLNode))))
//	{
//		cout << endl << "Allocate space failure!";
//		return ERROR;
//	}
//	s->data = e;
//	s->prior = p->prior;
//	s->next = p;
//	if (1 == i)
//	{
//		L->next = s;
//	}
//	p->prior->next = s;
//	p->prior = s;
//	return OK;
//}
//
//
//int main(void)
//{
//	int i, j, e;
//	cout << "aaa1111";
//	DuLNode *L, *p;
//	int array[INIT_LENGTH + 1] = { 5, 8, 12, 18, 25, 30, 37, 46, 51, 89 };
//	L = (DuLinkList)malloc(sizeof(DuLNode));
//	L->next = L;
//	L->prior = L;
//	for (i = INIT_LENGTH; i > 0; i--)
//	{
//		p = (DuLinkList)malloc(sizeof(DuLNode));
//		p->data = array[i - 1];
//		p->next = L->next;
//		p->prior = L->prior;
//		p->next->prior = p;
//		L->next = p;
//	}
//	p = L;
//	cout << endl << endl << "ListInsert_DuL.cpp";
//	cout << endl << "====================";
//	cout << endl << endl << "The old DuLNode is:";
//	for (j = 0; j < INIT_LENGTH; j++)
//	{
//		p = p->next;
//		cout << p->data << "";
//	}
//	cout << endl << endl << "Please input the location to insert (1 -- 11):";
//	cin >> i;
//	cout << "Please input the integer to insert (eg, 58):";
//	cin >> e;
//	if (ListInsert_DuL(L, i, e))
//	{
//		cout << endl << "The new DuLNode is:";
//		p = L;
//		for (i = 0; i < INIT_LENGTH; i++)
//		{
//			p = p->next;
//			cout << p->data << "";
//		}
//	}
//	cout << endl << endl << "...OK!...";
//	getchar();
//	return 0;
//}


//HDU 2050 折线分割平面
//#include <iostream>
//
//using namespace std;
//
//int main(void)
//{
//	int a;
//	while (cin >> a)
//		cout << 2 * a*a - a + 1 << endl;
//	return 0;
//}


//HDU 2040 亲和数
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//bool qhs(int m, int n)
//{
//	int i, sum, k;
//	k = sqrt(m);
//	for (sum = 1, i = 2; i < k; i++)
//	{
//		if (0 == m%i)
//		{
//			sum += m / i;
//			sum += i;
//		}
//	}
//	if (sum == n)
//	{
//		k = sqrt(n);
//		for (sum = 1, i = 2; i < k; i++)
//		{
//			if (0 == n%i)
//			{
//				sum += n / i;
//				sum += i;
//			}
//		}
//		if (sum == m)
//			return true;
//		else
//			return false;
//	}
//	else
//		return false;
//}
//
//int main(void)
//{
//	int num, m, n;
//	cin >> num;
//	while (num --)
//	{
//		cin >> m >> n;
//		if (qhs(m, n))
//			cout << "YES" << endl;
//		else
//			cout << "NO" << endl;
//	}
//	return 0;
//}


//HDU 2041 超级楼梯
//#include <iostream>
//
//using namespace std;
//
//int main(void)
//{
//	__int64 f[40] = {0, 1};
//	int i, m;
//	for (i = 2; i < 41; i++)
//	{
//		f[i] = f[i - 1] + f[i - 2];
//	}
//	cin >> m;
//	while (m--)
//	{
//		cin >> i;
//		cout << f[i] << endl;
//	}
//	return 0;
//}


//HDU 2042 不容易系列之二
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main(void)
//{
//	int m, n;
//	cin >> m;
//	while (m--)
//	{
//		cin >> n;
//		cout << pow(2, n) + 2 << endl;
//	}
//	return 0;
//}


//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//int main(void)
//{
//	int m, k, i, f, s[4];
//	char st[51];
//	cin >> m;
//	while (m--)
//	{
//		k = 0;
//		memset(s, 0, sizeof(int));
//		gets(st);
//		f = strlen(st);
//		if (f > 7 && f < 17)
//		{
//			for (i = 0; i < f; i++)
//			{
//				if (st[i] - '0' >= 0 && st[i] - '0' <= 9)
//					s[0] = 1;
//				if (st[i] - '0' >= 97 && st[i] - '0' <= 123)
//					s[1] = 1;
//				if (st[i] - '0' >= 65 && st[i] - '0' <= 91)
//					s[2] = 1;
//				if (st[i] - '0' >= && st[i] - '0' <= )
//					s[3] = 1;
//			}
//			k = s[0] + s[1] + s[2] + s[3];
//		}
//		if (k > 2)
//			cout << "YES" << endl;
//		else
//			cout << "NO" << endl;
//	}
//	return 0;
//}



//#include <cstdio>
//
//int main(void)
//{
//	double st[49];
//	int i;
//	st[48] = 1000;
//	for (i = 48; i > 0; --i )
//	{
//		printf("%2d: %lf\n", i, st[i]);
//		st[i - 1] = (st[i] + 1000) / (1 + 0.0171 / 12);
//	}
//	getchar();
//	return 0;
//}


//HDU 2015 偶数求和
//#include <stdio.h>
//
//int main(void)
//{
//    int i, n, m, b, c;
//
//    while (scanf("%d%d", &n, &m) != EOF)
//    {
//        b = 2;
//        c = 0;
//        for (i = 0 ; i < n / m ; i++)
//        {
//            printf(c++ ? " %d" : "%d", b + m - 1);
//            b += m * 2;
//        }
//        printf(n % m ? " %d\n" : "\n", b + n % m - 1);
//    }
//
//    return 0;
//}


//HDU 2016 数据的交换输出
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//
//int main(void)
//{
//    int i, n;
//    int f[100], m;
//
//    while (scanf("%d", &n), n)
//    {
//        m = 0;
//        for (i = 0 ; i < n ; i++)
//        {
//            scanf("%d", f + i);
//            if (f[i] < f[m]) m = i;
//        }
//        swap(f[m], f[0]);
//        for (i = 0 ; i < n ; i++)
//            printf("%d%c", f[i], (i < n - 1 ? ' ' : '\n'));
//    }
//
//    return 0;
//}


//HDU 2018 母牛的故事
//#include <iostream>
//
//using namespace std;
//
//int main(void)
//{
//    int st[56] = {1, 1, 2, 3}, n, i;
//    for (i = 4; i < 56; ++ i)
//        st[i] = st[i - 1] + st[i - 3];
//    while (cin >> n && n)
//        cout << st[n] << endl;
//    return 0;
//}


//HDU 2019 数列有序!
//#include <iostream>
//
//using namespace std;
//
//int main(void)
//{
//    int n, m, i, st[101], x;
//    while (cin >> n >> m && (m || n))
//    {
//        for (x = 1, i = 0; i < n; ++ i)
//        {
//            cin >> st[i];
//            if (m < st[i] && x)
//            {
//                cout << m << " ";
//                x = 0;
//            }
//            cout << st[i] << (i - n + 1 ? " " : "\n");
//        }
//    }
//    return 0;
//}


//HDU 2017 字符串统计
//#include <cstdio>
//#include <cstring>
//
//int main(void)
//{
//    char st[1001];
//    int i, num, n;
//    scanf("%d", &n);
//    while (n --)
//    {
//        scanf("%s", st);
//        for (num = i = 0; i < strlen(st); ++ i)
//            if (st[i] - '0' >= 0 && st[i] - '0' <= 9)
//                ++ num;
//        printf("%d\n", num);
//    }
//    return 0;
//}

//HDU 2020 绝对值排序
//#include <cstdio>
//#include <cmath>
//
//using namespace std;
//
//int main(void)
//{
//    int n, st[101], i, j;
//    while (scanf("%d", &n) && n)
//    {
//        for (i = 0; i < n; ++ i)
//            scanf("%d", &st[i]);
//        for (i = 0; i < n - 1; ++ i)
//            for (j = i + 1; j < n; ++ j)
//            {
//                if (abs(st[i]) < abs(st[j]))
//                {
//                    st[i] ^= st[j] ^= st[i] ^= st[j];
//                }
//            }
//        for (i = 0; i < n; ++ i)
//            printf("%d%c", st[i], i - n + 1 ? ' ' : '\n');
//    }
//    return 0;
//}


//HDU 2022 海选女主角
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main(void)
//{
//    int i, j, m, n, num, _max, a, b;
//    while (cin >> m >> n)
//    {
//        for ( _max = 0, i = 1; i <= m; ++ i)
//            for (j = 1; j <= n; ++ j)
//            {
//                cin >> num;
//                if (abs(_max) < abs(num))
//                {
//                    _max = num;
//                    a = i;
//                    b = j;
//                }
//            }
//        cout << a << " " << b << " " << _max << endl;
//    }
//    return 0;
//}


//HDU 2023 求平均成绩
//#include <cstdio>
//#include <cstring>
//
//int main(void)
//{
//    int i, j, n, m, nm[50][5], num, k;
//    double n_val[50], m_val[5];
//    while (scanf("%d%d", &n, &m) != EOF)
//    {
//        memset(n_val, 0, sizeof(n_val));
//        memset(m_val, 0, sizeof(m_val));
//        for (i = 0; i < n; ++ i)
//        {
//            for (j = 0; j < m; ++ j)
//            {
//                scanf("%d", &nm[i][j]);
//                n_val[i] += nm[i][j];
//                m_val[j] += nm[i][j];
//            }
//        }
//        for (i = 0; i < n; ++ i)
//        {
//            n_val[i] /= m;
//            printf("%.2lf ", n_val[i]);
//        }
//        printf("\n");
//        for (j = 0; j < m; ++ j)
//        {
//            m_val[j] /= n;
//            printf("%.2lf ", m_val[j]);
//        }
//        printf("\n");
//        for (num = i = 0; i < n; ++ i)
//        {
//            for (k = j = 0; j < m; ++ j)
//            {
//                 if (nm[i][j] >= m_val[j])
//                    ++ k;
//                 else
//                    break;
//            }
//            if (k == m)
//                ++ num;
//        }
//        printf("%d\n", num);
//    }
//    return 0;
//}


//HDU 2024 C语言合法标识符
//#include <cstdio>
//#include <cstring>
//#include <ctype.h>
//
//int main(void)
//{
//    int n, i;
//    char st[51];
//    scanf("%d%*c", &n);
//    while (n --)
//    {
//        gets(st);
//        if (st[0] == '_' || isalpha(st[0]))
//        {
//            for (i = 0; st[i]; ++ i)
//            {
//                if (st[i] != '_' && !isalnum(st[i]))
//                {
//                    puts("no");
//                    break;
//                }
//            }
//            if (i == strlen(st))
//                puts("yes");
//        }
//        else
//            puts("no");
//    }
//    return 0;
//}



//#include <iostream>
//
//using namespace std;
//
//int main( void )
//{
//    int n, i, a, sum;
//    while ( cin >> n && n )
//    {
//        sum = 0;
//        for ( i = 0; i < n; i ++ )
//        {
//            cin >> a;
//            sum += a;
//        }
//        cout << sum <<endl;
//    }
//}

//随机数产生
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#define random(x) (rand()%x)
//
//int main(void)
//{
//    srand((int)time(0));
//    for(int x=0; x<34; x++)
//        printf(x%10 ? "%d " : "%d\n",random(100000));
//    return 0;
//}


//#include <cstdio>
//
//int main(void)
//{
//    int a, b;
//    while (scanf("%d%d", &a, &b) != EOF)
//    {
//        printf("%d\n", a + b);
//    }
//    return 0;
//}


//#include <cstdio>

//int main(void)
//{
//    int i, j, t, st[4];
//
//    for (i = 0; i < 4; ++ i)
//        scanf("%d", &st[i]);
//
//    for (i = 0; i < 3; ++ i)
//        for (j = i + 1; j < 4; ++ j)
//            if (st[i] > st[j])
//            {
//                t = st[i];
//                st[i] = st[j];
//                st[j] = t;
//            }
//
//    for (i = 0; i < 4; ++ i)
//        printf("%d ", st[i]);
//    printf("%d\n", st[i]);
//
//    return 0;
//}


//10进制转 2 8 16 进制
//#include <cstdio>
//
//void print(int num);
//
//char st[33];
//
//int main()
//{
//    int num;
//    while (scanf("%d", &num) != EOF)
//    {
//        printf("2:  ", num);
//        print(num);
//        printf("8:  %#o\n", num);
//        printf("16: %#x\n", num);
//    }
//    return 0;
//}
//
//void print(int num)
//{
//    int i = 0, k, len;
//    while (num)
//    {
//        num & 1 ? -- num, st[i ++] = '1' : st[i ++] = '0';
//        num /= 2;
//    }
//    len = i - 1;
//    k = i/2;
//    for (i = 0; i < k; ++ i)
//        st[i] ^= st[len - i] ^= st[i] ^= st[len - i];
//    puts(st);
//}


//IP 2 进制转10进制
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main(void)
//{
//    char st[33];
//    int num = 0, i;
//    while (cin >> st)
//    {
//        for (i = 0; i < 32; ++ i)
//        {
//            if ('1' == st[i])
//                num += pow(2, i%8);
//            if ((i + 1)%8 == 0)
//            {
//                cout << num << (31 == i ? "\n" : ".");
//                num = 0;
//            }
//        }
//    }
//    return 0;
//}
//
/////11111111111111111111111100000000


////数据转换: 原 反 补
//#include <cstdio>
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//int num;
//char ch;
//char yuan[32], fan[32], bu[32];
//
//void zhuanyuan(void);
//void zhuanfan(void);
//void zhuanbu(void);
//
//int mian(void)
//{
//    while (scanf("%c%d", &ch, &num))
//    {
//        memset(yuan, '0', sizeof(char));
//        memset(fan, '0', sizeof(char));
//        memset(bu, '0', sizeof(char));
//        zhuanyuan();
//        //zhuanfan();
//        //zhuanbu();
//    }
//    return 0;
//}
//
//void zhuanyuan()
//{
//    int i = 0;
//    while (num)
//    {
//        num & 1 ? -- num, yuan[i ++] = '1' : yuan[i ++] = '0';
//        num /= 2;
//    }
//    '+' == ch ? yuan[31] = '1' : yuan[31] = '0';
//    for (i = 0; i < 16; ++ i)
//        yuan[i] ^= yuan[31 - i] ^= yuan[i] ^= yuan[31 - i];
//    cout << "原码: ";
//    puts(yuan);
//}
//
//void zhuanfan()
//{
//    int i = 4;
//    while (yuan[i])
//        '1' == yuan[i] ? fan[i ++] = '0' : fan[i ++] = '1';
//    cout << "反码: ";
//    puts(fan);
//}
//
//void zhuanbu()
//{
//    strcpy(fan, bu);
//}

//hdu 2020
//#include <iostream>
//#include <cmath>
//#include <algorithm>
//
//using namespace  std;
//
//bool complare(int a, int b)
//{
//    return abs(a) > abs(b);
//}
//
//int main(void)
//{
//    int st[101], i, n, j;
//    while (cin >> n && n)
//    {
//        for (i = 0; i < n; ++ i)
//            cin >> st[i];
//        sort(st, st + n, complare);
//        for (i = 0; i < n; ++ i)
//            cout << st[i] << (i + 1 == n ? "\n" : " ");
//    }
//    return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int main(void)
//{
//    char *s1, *s2;
//    while (*s1 != '\0')
//        s1 ++;
//    for (; *s1 = *s2 && *s2 != '\0'; s1 ++, s2 ++);
//    return 0;
//}


//
//for(p=h; p && p->val < b->val; q=p,p=p->next);
//    if(p==h) h=b, b=a; else  p=q->next;
//    q=b; b=b->next;   q->next=p;


//
//s.top = s.top->next;
//

//#include <iosteam>
//#include <cstring>
//
//using namespace std;
//
//int mian(void)
//{
//    string st;
//    int num;
//    cin >> num;
//    while (num --)
//    {
//        cin >> st;
//        for (int i = 0; i < length.)
//    }
//    return 0;
//}
//
//
//#include <iostream>
//#include <string>
//#include <limits>
//#include <windows.h>
//
//using namespace std;
//
//// extra the class of string
//class String:public string
//{
//public:
//
//	// function 1: mode the add of int( (-3) + (-3) ) = - 6
//	// input: 两个字符串 a 和 b，里面放的都是整数;
//	// output: 返回一个字符串，字符串里面是整数;
//	// 功能: 实现参数两个整数的相加操作，结果存在返回的字符串里
//	static string ADD_Int(string a,string b);
//
//
//
//	// function 2: make a-b mode int a - b; 7 - (-3) = 10
//	// input: 两个字符串 a 和 b，里面放的都是整数;
//	// output: 返回一个字符串，字符串里面是整数;
//	// 功能: 实现参数两个整数的相减操作，结果存在返回的字符串里
//	static string MINUS_Int(string a,string b);
//
//	// function 3: make a*b mode int a * b;
//	// input: 两个字符串 a 和 b，里面放的都是整数;
//	// output: 返回一个字符串，字符串里面是整数;
//	// 功能: 实现参数两个整数的相乘操作，结果存在返回的字符串里
//	static string MULT_Int(string a,string b);
//
//	// function 4: mode the division a/b
//	// input: 两个字符串 a 和 b，里面放的都是整数;
//	// output: 返回一个字符串，字符串里面是整数;
//	// 功能: 实现参数两个整数的相除操作，结果存在返回的字符串里
//	static string DIV_Int(string a,string b);
//
//	// function 5: pow number a^b
//	// input: 两个字符串 a 和 b，里面放的都是整数;
//	// output: 返回一个字符串，字符串里面是整数;
//	// 功能: 实现参数两个整数的a^b操作，结果存在返回的字符串里
//	static string Pow_Int(string a,string b);
//
//	// function 6: int To string :"123" = 123
//	// input: 一个int数 a;
//	// output: 返回一个字符串，字符串里面是整数;
//	// 功能: 将整数a转换成对应的字符串格式
//	static string Int_To_String(int x);
//
//	// function 7: static char division a/b : 4 / 3
//	static string Division(string a,string b);
//
//	// function 8: make a-b mode int a - b; 4 - 3
//	static string MinusInt(string a,string b);
//
//	// function 9: mode the add of int :3 + 4
//	static string AddInt(string a,string b);
//
//	// function 10: make char to the int number :'9' = 9
//	static int CharToNumber(char c);
//
//	// function 11: make int to the model char : 7 = '7'
//	static string IntToChar(int i);
//
//	// function 12: check whether the string is legal
//	static bool check_all_number(string a);
//
//	// function 13: compare string a and b
//	// input: 两个字符串 a 和 b，里面放的都是整数;
//	// output: 返回一个字符，字符里是a和b的大小关系;
//	// 功能: 实现参数两个整数的a和b比较操作，结果< or = or >存在返回的字符里
//	static char Compare(string a,string b);
//
//	// function 14: make string into standard string number
//	static bool Standardization(string &a);
//
//	// function 15: make string(>0) into standard int number
//	// input: 一个字符串 a，里面放的是一个整数;
//	// output: 返回一个字符串，字符串里是a对应的整形数据;
//	// 功能: 将存在字符串里的整数取出来，放在整形容器里，然后返回，根据返回的结果可以判定是否转换成功
//	static std::pair<bool,int> String_into_intNumber(string &a);
//};
//
//
//
//// mode the add of int
//string String::ADD_Int(string a,string b)
//{
//	// exception of input
//	if( a.empty() )
//		return b;
//	else if( b.empty() )
//		return "0";
//	if(!check_all_number(a) || !check_all_number(b))
//	{
//		return "exception of input ADD_Int";
//	}
//	Standardization(a);
//	Standardization(b);
//
//	if(a[0] != '-' && b[0] != '-')
//		return AddInt(a,b);
//	else if(a[0] != '-'&& b[0] == '-')
//		return MinusInt( a,b.substr( 1,b.size() ) );
//	else if(a[0] == '-'&& b[0] != '-')
//		return MinusInt(b,a.substr(1,a.size()));
//	else return '-'+AddInt(a.substr(1,a.size()),b.substr( 1,b.size() ));
//};
//
//
//
//
//
//
//
//// make a-b mode int a - b;
//string String::MINUS_Int(string a,string b)
//{
//	// exception of input
//	if( a.empty() )
//		return b;
//	else if( b.empty() )
//		return "0";
//	if(!check_all_number(a) || !check_all_number(b))
//	{
//		return "exception of input Multiplies_Int";
//	}
//	Standardization(a);
//	Standardization(b);
//	if(a[0] != '-' && b[0] != '-')
//		return MinusInt(a,b);
//	else if(a[0] != '-' && b[0] == '-')
//		return AddInt(a,b.substr(1,b.size()));
//	else if(a[0] == '-' && b[0] != '-')
//		return "-"+AddInt(a.substr(1,a.size()),b);
//	else return MinusInt( b.substr(1,b.size()) , a.substr(1,a.size()) );
//};
//
//
//
//
//
//
//// make a*b mode int a * b;
//string String::MULT_Int(string a,string b)
//{
//	// exception of input
//	if( a.empty() )
//		return b;
//	else if( b.empty() )
//		return "0";
//	if(!check_all_number(a) || !check_all_number(b))
//	{
//		return "exception of input Multiplies_Int";
//	}
//	Standardization(a);
//	Standardization(b);
//	string::size_type i = a.size(),j = b.size();
//	string c = "0",d = "";
//	bool fushu = (a[0] == '-' && b[0] != '-')||(a[0] != '-' && b[0] == '-');
//	if(a[0] == '-')
//		a = a.substr(1,a.size());
//	if(b[0] == '-')
//		b = b.substr(1,b.size());
//
//	int jinwei = 0;
//	for( j = b.size()-1 ; j < b.size() ;j--)
//	{
//		// each number of b to * a
//		jinwei = 0;
//		for( i = a.size()-1 ; i < a.size() ;i-- )
//		{
//			d = IntToChar(   ( CharToNumber(a[i]) * CharToNumber(b[j]) + jinwei ) % 10 )+ d ;
//			jinwei = ( CharToNumber(a[i]) * CharToNumber(b[j]) + jinwei ) / 10 ;
//		}
//		if(jinwei)
//			d = IntToChar(jinwei) +d;
//		// add all number result
//		c = ADD_Int(c,d);
//		d = "";
//		unsigned int zero = 0 ;
//		while( zero < b.size() - j )
//		{
//			d = d + '0';
//			zero ++;
//		}
//
//	}
//
//	Standardization(c);
//	if( fushu && c != "0" )
//		return '-'+c;
//	else return c;
//};
//
//
//
//
//// mode the division a/b
//string String::DIV_Int(string a,string b)
//{
//	// exception of input
//	if( a.empty() )
//		return "0";
//	else if( b.empty() )
//		return "e";
//	if(!check_all_number(a) || !check_all_number(b))
//	{
//		return "exception of input DIV_Int";
//	}
//	Standardization(a);
//	Standardization(b);
//	if(b == "0")
//		return "e";
//	bool fushu =  (a[0] == '-' && b[0] != '-')||(a[0] != '-' && b[0] == '-');
//	if( a[0] == '-' )
//		a = a.substr(1,a.size());
//	if( b[0] == '-' )
//		b = b.substr(1,b.size());
//	if( Compare(a,b) == '<' )
//		return "0";
//
//
//	string yushu = "";
//
//	string beichushu = a.substr(0,b.size());
//	string shang = Division( beichushu , b);
//	yushu =  MinusInt( beichushu ,MULT_Int( shang, b) );
//	string c = shang;
//
//	for(string::size_type i = b.size(); i<a.size(); i++)
//	{
//		beichushu =   yushu+ a[i]     ;
//		shang = Division( beichushu , b);
//		c = c + shang;
//		yushu =  MinusInt( beichushu ,MULT_Int( shang, b) );
//	}
//	Standardization(c);
//	return fushu?('-'+c):c;
//};
//
//
//
//
//
//// function: pow number x,y
//string String::Pow_Int(string a,string b)
//{
//	// exception of input
//	if( a.empty() )
//		return "0";
//	else if( b.empty() )
//		return "e";
//	if(!check_all_number(a) || !check_all_number(b))
//	{
//		return "exception of input DIV_Int";
//	}
//	Standardization(a);
//	Standardization(b);
//	string result = "1" ;
//	if(Compare(b,"0") != '<')
//		for(string i ="0" ;Compare(i,b) == '<' ;i = AddInt(i,"1"))
//		{
//			result = MULT_Int(result,a);
//		}
//	else
//		for(string i ="0" ;Compare(i,b) == '>' ;i = MINUS_Int(i,"1"))
//		{
//			result = DIV_Int(result,a);
//		}
//		return result ;
//};
//
//
//
//
//
//
//// function : int To string
//string String::Int_To_String(int x)
//{
//	bool fushu = false;
//	string result="";
//	if(x < 0 )
//	{
//		fushu = true ;
//		x = -x;
//	}
//	else if( x == 0 )
//		return "0";
//	while(x)
//	{
//		result = IntToChar(x % 10) + result;
//		x = x/10;
//	}
//	if(fushu)
//		result = "-"+result;
//	return result;
//};
//
//
//
//
//
//// static char division a/b
//string String::Division(string a,string b)
//{
//	// exception of input
//	if( a.empty() )
//		return "0";
//	else if( b.empty() )
//		return "e";
//	if(!check_all_number(a) || !check_all_number(b))
//	{
//		cout<<"exception of input Division"<<endl;
//		return "e";
//	}
//	Standardization(a);
//	Standardization(b);
//	int i = 0;
//	while( i<=9 )
//	{
//		// if a - b*i < b
//		if(  Compare(   MINUS_Int(   a  ,   MULT_Int(IntToChar(i),b)    ) , b ) == '<'    )
//			break;
//		i++;
//	}
//	if( i>9 )
//		return "e";
//	return ""+IntToChar(i);
//};
//
//
//
//
//
//
//// make a-b mode int a - b;
//string String::MinusInt(string a,string b)
//{
//	// exception of input
//	if(!check_all_number(a) || !check_all_number(b))
//		return "exception of input MinusInt";
//	Standardization(a);
//	Standardization(b);
//	// particular string of input
//	if(a.empty())
//	{
//		if(b.empty())
//			return "0";
//		else
//			return "-"+b;
//	}
//	else if(b.empty())
//	{
//		return a;
//	}
//
//	// normal number a < b
//	string c = "";
//	bool check = true ;
//	if(Compare(a,b) == '=')
//		return "0";
//	else if(Compare(a,b) == '<')
//	{
//		c = a ;
//		a = b ;
//		b = c ;
//		c = "";
//		check = false ;
//	}
//	// normal number a >= b
//	string::size_type i = a.size()-1, j = b.size()-1;
//	int jiewei = 0,now;
//
//	while(i < a.size() && j < b.size())
//	{
//		now = CharToNumber(a[i]) - CharToNumber(b[j]) - jiewei ;
//
//		if( now < 0 )
//		{
//			jiewei = 1;
//			now = 10 + now ;
//		}
//		else jiewei = 0;
//		c = IntToChar(now)  + c ;
//		i--;j--;
//	}
//	while(i < a.size())
//	{
//		now = CharToNumber(a[i]) - jiewei ;
//		if( now < 0 )
//		{
//			jiewei = 1;
//			now = 10 + now ;
//		}
//		else jiewei = 0;
//		c = IntToChar( now )  + c ;
//		i--;
//	}
//	Standardization(c);
//	if(!check)
//		c = '-' + c;
//	return c;
//};
//
//
//
//
//
//
//
//// mode the add of int
//string String::AddInt(string a,string b)
//{
//	// exception of input
//	if( a.empty() )
//		return b;
//	else if( b.empty() )
//		return "0";
//	if(!check_all_number(a) || !check_all_number(b))
//	{
//		return "exception of input AddInt";
//	}
//	Standardization(a);
//	Standardization(b);
//	string::size_type i = a.size()-1 ,j = b.size()-1 , k = 0 ;
//	string c = "";
//	int jinwei = 0;
//	while( i < a.size() && j < b.size() )
//	{
//		c = IntToChar( ( CharToNumber(a[i]) + CharToNumber(b[j]) + jinwei ) % 10 ) + c;
//		jinwei = ( CharToNumber(a[i]) + CharToNumber(b[j]) + jinwei ) / 10;
//		j--;i--;
//	}
//	while( j < b.size()  )
//	{
//		c =  IntToChar( ( CharToNumber(b[j]) + jinwei ) % 10 ) + c;
//		jinwei = ( jinwei + CharToNumber(b[j]) ) / 10;
//		j--;
//	}
//	while( i < a.size() )
//	{
//		c =  IntToChar( ( CharToNumber(a[i]) + jinwei ) % 10 ) + c;
//		jinwei = ( jinwei + CharToNumber(a[i]) ) / 10;
//		i--;
//	}
//	if( jinwei )
//		c = IntToChar(  jinwei  ) + c;
//	Standardization(c);
//	return c;
//};







// make char to the int number
//int String::CharToNumber(char c)
//{
//	if( c >= '0' && c <= '9' )
//		return int(c - '0');
//	else
//	{
//		cout<<c<<" exception of input CharToNumber "<<endl;
//		system("pause");
//		return 0;
//	}
//};







// make int to the model char
//string String::IntToChar(int i)
//{
//	if( i >= 0 && i <= 9 )
//	{
//		string c = "";
//		return c+char(i+48);
//	}
//	else
//	{
//		cout<<i<<" exception of input IntToChar"<<endl;
//		system("pause");
//		return "e";
//	}
//};
//
//
//
//
//
//
//// check whether the string is legal
//bool String::check_all_number(string a)
//{
//	if(a.empty())
//		return true ;
//	string::size_type L = a.size(),i = 0;
//	if(a[0] == '-')
//		i++;
//	while( i < L )
//	{
//		if( a[i] < '0' || a[i] > '9')
//			return false;
//		i++;
//	}
//	return true ;
//};
//
//
//
//
//
//
//
//// compare string a and b
//char String::Compare(string a,string b)
//{
//	if(a.empty() || b.empty())
//	{
//		cout<<"error of input compare";
//		return 'e';
//	}
//	else
//	{
//
//		if(!check_all_number(a) || !check_all_number(b))
//		{
//			return 'e';
//		}
//		Standardization(a);
//		Standardization(b);
//		if(a[0] == '-' && b[0] != '-')
//			return '<';
//		else if( a[0] != '-' && b[0] == '-')
//			return '>';
//		bool fushu = (a[0] == '-');
//
//		if(a.size() > b.size() )
//			return fushu?'<':'>';
//		else if(a.size() == b.size())
//		{
//			for(string::size_type i = 0;i < a.size(); i++)
//			{
//				if(a[i] > b[i])
//					return fushu?'<':'>';
//				if(a[i] < b[i])
//					return fushu?'>':'<';
//			}
//			return '=';
//		}
//		return fushu?'>':'<';
//	}
//};
//
//
//
//
//
//
//
//// make string into standard string number
//bool String::Standardization(string &a)
//{
//	if(!check_all_number(a))
//	{
//		cout<<a<<" exception of input Standardization"<<endl;
//		return false;
//	}
//	string::size_type i = 0;
//	bool fushu = false ;
//	if( a[0] == '-' )
//	{
//		fushu = true;
//		i = 1;
//	}
//	while(i < a.size())
//	{
//		if(a[i] != '0')
//			break;
//		i++;
//	}
//	if(i == a.size())
//		i--;
//	a = a.substr(i,a.size());
//	if( fushu && a != "0")
//		a = '-' + a;
//	return true ;
//};
//
//
//
//
//
//
//
//// make string(>0) into standard int number
//std::pair<bool,int> String::String_into_intNumber(string &a)
//{
//	if(Standardization(a))
//	{
//		string max = Int_To_String(numeric_limits<int>::max()-1);
//		bool fushu = false;
//		if(a[0] == '-')
//		{
//			fushu = true ;
//			a = a.substr(1,a.length());
//		}
//		if(Compare(a,max) != '<')
//		{
//			cout<<"溢出 exception"<<endl;
//			return std::make_pair(false,0);
//		}
//		int result = 0 ;
//		for(size_t i =0;i<a.length();i++)
//		{
//			result = result * 10 + CharToNumber(a[i]);
//		}
//		if(fushu)
//			result = - result;
//		return std::make_pair(true,result);
//	}
//	else
//	{
//		cout<<"exception of function String_into_intNumber input"<<endl;
//		return std::make_pair(false,0);
//	}
//};
//
//int main(void)
//{
//
//    return 0;
//}




//#include <iostream>
//
//using namespace std;
//
//int main(void)
//{
//    long long ji, tu, tou, jiao;
//
//    while (cin >> tou >> jiao && jiao + tou)
//    {
//        if (jiao % 2 == 1)
//            cout << "Error" <<endl;
//        else
//        {
//            jiao /= 2;
//            tu = jiao - tou;
//            ji = tou - tu;
//            if (ji < 0 || tu < 0)
//                cout << "Error" <<endl;
//            else
//                cout << ji << " " << tu << endl;
//        }
//    }
//
//    return 0;
//}



//#include <iostream>
//
//using namespace std;
//
//int main(void)
//{
//    int a, b;
//
//    while (cin >> a >> b)
//        cout << a + b << endl;
//
//    return 0;
//}


//#include <stdio.h>
//#include <iostream>
//#include <string.h>
//#include <queue>
//
//using namespace std;
//
//typedef struct
//{
//    int x,y;
//} Node;
//
//int m,n,t;
//
//char map[21][21];		///停留位置
//int dis[21][21];        ///已走距离
//int dir[4][2] = {
//    {-1, 0},            ///上
//    { 1, 0},            ///下
//    { 0,-1},            ///左
//    { 0, 1}};			///右
//
//int DFS(Node s,Node e)
//{
//
//    queue<Node> q;
//    Node tem;
//    q.push(s);
//
//    map[s.x][s.y] = '*';
//    dis[s.x][s.y] = 0;
//
//    while(q.size())
//    {
//        s = q.front();
//        q.pop();
//         for (int i = 0; i < 4; i++)
//        {
//            tem.x = s.x + dir[i][0];
//            tem.y = s.y + dir[i][1];
//            if (tem.x>=0 && tem.x<m && tem.y>=0 && tem.y<n && map[tem.x][tem.y]!='*')
//            {
//                dis[tem.x][tem.y] = dis[s.x][s.y] + 1;
//                if (tem.x == e.x && tem.y == e.y && dis[tem.x][tem.y] <= t)
//                {
//                    return 1;
//                }
//                q.push(tem);
//                map[tem.x][tem.y] = '*';
//            }
//        }
//    }
//    return 0;
//}
//
//int main(void)
//{
//    Node s,e;
//    while (scanf("%d%d%d",&n,&m,&t) != EOF &&(n && m && t))
//    {
//        memset(map,0,sizeof(map));
//        memset(dis,0,sizeof(dis));
//        getchar();
//        for (int i = 0; i < m; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                scanf("%c", &map[i][j]);
//
//                if (map[i][j] == 'S')
//                {
//                    s.x = i;
//                    s.y = j;
//                }
//                if (map[i][j] == 'P')
//                {
//                    e.x = i;
//                    e.y = j;
//                }
//            }
//            getchar();
//        }
//        if (DFS(s,e))	printf("YES\n");
//        else	printf("NO\n");
//    }
//    return 0;
//}
//
//
///*
//4 4 10
//*...
//*...
//....
//S**P
//*/


//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//int main(void)
//{
//    int num, i, aa, t;
//    int horse_1[1000];
//    int horse_2[1000];
//    while (cin >> num && num)
//    {
//        aa = 0;
//        memset(horse_1, 0, sizeof(int));
//        memset(horse_2, 0, sizeof(int));
//
//        for (i = 0; i < num; i ++)
//            cin >> horse_1[i];
//
//        sort(horse_1, horse_1 + num);
//
//        for (i = 0; i < num; i ++)
//            cin >> horse_2[i];
//
//        sort(horse_2, horse_2 + num);
//        for (i = 0; i < num; i ++)
//            if (horse_1[i] == horse_1[i - 1] || i == 0)
//            {
//                if (horse_1[i] > horse_2[num - 1 - i])
//                    aa ++;
//            }
//            else
//            {
//                t = i;
//                break;
//            }
//
//
//        for (i = 0; i < num - t; i ++)
//            if (horse_1[i + t] > horse_2[i])
//                aa ++;
//        if (aa*2 > num)
//            cout << "YES" << endl;
//        else
//            cout << "NO" << endl;
//
//    }
//    return 0;
//}

/*
8
9 8 7 6 5 3 2 1
1 2 3 8 7 6 5 4
*/



//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//void create_table()
//{
//    int i, tmp;
//    memset(a, 0, sizeof(a));
//    a[0] = 1;
//    a[1] = 1;
//    for(i=2;i<10000;i++)
//    {
//        if(!a[i])
//        {
//            tmp = i*2;;
//            while(tmp < 10000)
//            {
//                a[tmp] = 1;
//                tmp += i;
//            }
//        }
//    }
//}
//
//int is_prime3(int n)
//{
//    return !a[n];
//}
//int main(void)
//{
//    int n;
//    while (cin >> n, n)
//        cout << (n == 1 ? 0 : f(n)) << endl;
//
//    return 0;
//}



//#include <math.h>
//#include <stdio.h>
//#include <stdlib.h>
//#define size 3200
//int pm[446] = {2,3,5};
//int total = 3;
//int abc;
//int num;
//int Len;
//void R(int n, int b, int sum)
//{
//    if (n < Len)
//    {
//        int i, tmp;
//        for (i = b; i < total - Len + 1 + n; i++)
//        {
//            tmp = num;
//            R(n + 1, i + 1, sum * pm[i]);
//            if (tmp == num) return;
//        }
//    }
//    else
//    {
//        num += abc / sum;
//    }
//}
//
//int B(int len)
//{
//    int left = 0;
//    int right = 445;
//    int middle;
//
//    while (left < right)
//    {
//        middle = (left + right) / 2;
//        if (pm[middle] > len)
//            right = middle - 1;
//        else if (pm[middle] < len)
//            left = middle + 1;
//        else
//            return middle + 1;
//    }
//    return pm[left] <= len ? left + 1 : left;
//}
//int creat_prime(int prime[],int n,int total)
//{
//    int i, j;
//    int gab=2;
//    int count;
//    for(i=7; i<=n; i+=gab)
//    {
//        count=1;
//        gab=6-gab;
//        for(j=0; prime[j]*prime[j]<=i; j++)
//        {
//            if(i%prime[j]==0)
//            {
//                count=0;
//                break;
//            }
//        }
//        if(count)
//        {
//            prime[total]=i;
//            total++;
//        }
//    }
//
//    return total;
//}
//
//int main(void)
//{
//    int len;
//    int count = 2;
//
//    total=creat_prime(pm,3162,total);
//    while (scanf("%d", &abc), abc)
//    {
//        total = B((int)(sqrt(abc) + 0.5));
//        for (len = 0, Len = 1; Len <= total; Len++)
//        {
//            num = 0;
//            R(0, 0, 1);
//            if (!num) break;
//            Len % 2 ? (len -= num) : (len += num);
//        }
//        printf("%d\n", total - 1 + abc + len);
//    }
//
//    return 0;
//}

//写的很好的求素数个数 位运算
//#include <time.h>
//#include <stdio.h>
//#define N 10000000000
//#define size (N/6*2 + (N%6 == 5? 2: (N%6>0)))
//int p[size / 32 + 1] = {1};
//int creat_prime(void)
//{
//    int i, j;
//    int len, stp;
//    int c = size + 1;
//    for (i = 1; ((i&~1)<<1) * ((i&~1) + (i>>1) + 1) < size; i++)
//    {
//        if (p[i >> 5] >> (i & 31) & 1)
//            continue;
//        len = (i & 1)? ((i&~1)<<1) + 3: ((i&~1)<<2) + 1;
//        stp = ((i&~1)<<1) + ((i&~1)<<2) + ((i & 1)? 10: 2);
//        j = ((i&~1)<<1) * (((i&~1)>>1) + (i&~1) + 1) + ((i & 1) ? ((i&~1)<<3) + 8 + len : len);
//        for (; j < size; j += stp)
//        {
//            if (p[j >> 5] >> (j & 31) & 1 ^ 1)
//                p[j >> 5] |= 1L << (j & 31), --c;
//            if (p[(j-len) >> 5] >> ((j-len) & 31) & 1 ^ 1)
//                p[(j-len) >> 5] |= 1L << ((j-len) & 31), --c;
//        }
//        if (j - len < size && (p[(j-len) >> 5] >> ((j-len) & 31) & 1 ^ 1))
//            p[(j-len) >> 5] |= 1L << ((j-len) & 31), --c;
//    }
//    return c;
//}
//int main(void)
//{
//    clock_t t = clock();
//    printf("%d ", creat_prime());
//    printf("Time: %f ", 1.0 * (clock() - t) / CLOCKS_PER_SEC);
//}



//#include <cstdio>
//#include <cstring>
//
//#define MAXN 500005
//
//using namespace std;
//
//int poor[MAXN], res[MAXN], len[MAXN];
//
//int _find(int a, int l, int r)
//{
//    int mid = (l + r)/2;
//    while (l <= r)
//    {
//        if (a == res[mid])
//            return mid;
//        else
//        {
//            if (a > res[mid])
//                l = mid + 1;
//            else
//                r = mid - 1;
//            mid = (l + r)/2;
//        }
//    }
//    return l;
//}
//
//int main(void)
//{
//    int i, k, n, cas, _max, r, pos;
//    cas = 1;
//    while (scanf("%d", &n) != EOF)
//    {
//        memset(res, 0, sizeof(res));
//        memset(len, 0, sizeof(len));
//
//        for (i = 1; i <= n; ++ i)
//            res[i] = MAXN;
//        for (i = 1; i <= n; ++ i)
//        {
//            scanf("%d%d", &k, &r);
//            poor[k] = r;
//        }
//        res[1] = poor[1];
//        len[1] = 1;
//        _max = 1;
//        for (i = 2; i <= n; ++ i)
//        {
//            pos = _find(poor[i], 1, n);
//            res[pos] = poor[i];
//            len[i] = pos;
//            if (len[i] > _max)
//                _max = len[i];
//        }
//        if (1 == _max)
//            printf("Case %d:\nMy king, at most %d road can be built.\n\n", cas ++, _max);
//        else
//            printf("Case %d:\nMy king, at most %d roads can be built.\n\n", cas ++, _max);
//    }
//    return 0;
//}


//湖工ACM1008
//#include <iostream>
//
//using namespace std;
//
//int sum, num;
//
//void kkk(int _count)
//{
//    if (_count == num)
//    {
//        ++ sum;
//        return;
//    }
//    else if (_count > num)
//        return;
//    else
//    {
//        kkk(_count + 2);
//        kkk(++ _count);
//    }
//
//}
//
//int main(void)
//{
//    while (cin >> num, num)
//    {
//        sum = 0;
//        kkk(0);
//        cout << sum << endl;
//    }
//
//    return 0;
//}


//hgacm1008
//#include <iostream>
//#include <cstring>
//#include <cstdio>
//
//using namespace std;
//
//char st_capital[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//char te_capital[27] = "ECFAJKLBDGHIVWZYMNOPQRSTUX";
//char st_lowercase[27] = "abcdefghijklmnopqrstuvwxyz";
//char te_lowercase[27] = "erwqtyghbnuiopsjkdlfazxcvm";
//
//int main(void)
//{
//    int i, j, len;
//
//    char st[1001];
//    while (gets(st), strcmp("#", st))
//    {
//        len = strlen(st);
//        for (i = 0; i < len; ++ i)
//        {
//            for (j = 0; j < 27; ++ j)
//            {
//                if (st[i] == st_capital[j])
//                {
//                    st[i] = te_capital[j];
//                    break;
//                }
//                else if (st[i] == st_lowercase[j])
//                {
//                    st[i] = te_lowercase[j];
//                    break;
//                }
//            }
//        }
//        cout << st << endl;
//    }
//    return 0;
//}


//湖工ACM1008
//#include <stdio.h>
//int main(void)
//{
//	int n,i;
//	int a[50];
//	while(scanf("%d",&n)!=EOF&&n!=0)
//	{
//	a[1]=1;
//	a[2]=2;
//	for(i=3;i<=n;i++)
//		a[i]=a[i-1]+a[i-2];
//	printf("%d\n",a[n]);
//	}
//	return 0;
//}



//1009
//#include <cstdio>
//#include <cstring>
//
//char a[1010];
//
//int main(void)
//{
////    freopen("data1009.in", "r", stdin);
////    freopen("out.txt", "w", stdout);
//    int m, i, l, j, w;
//    char q;
//    while(gets(a))
//    {
//        m = strlen(a);
//        l = m/2;
//        for(i = l; i >= 1; -- i)
//        {
//            if(i & 1)
//            {
//                for(j = 0; j < m; ++ j)
//                    if((j + 1)%i == 0)
//                    {
//                        q = a[j];
//                        w = j;
//                        break;
//                    }
//                for(; j < m; j = j + i)
//                {
//                    a[w] = a[j];
//                    w = j;
//                }
//                a[w] = q;
//            }
//            else
//            {
//                for(j = m - 1; j >= 0; -- j)
//                    if((j + 1)%i == 0)
//                    {
//                        q = a[j];
//                        w = j;
//                        break;
//                    }
//                for(; j >= 0; j = j - i)
//                {
//                    a[w] = a[j];
//                    w = j;
//                }
//                a[w] = q;
//            }
//        }
//        printf("%s\n",a);
//    }
//    return 0;
//}



//1010  简单栈
//#include<stdio.h>
//
//int main()
//{
//    int a[5],b[5],i,j,k,n;
//    while(scanf("%d",&n),n)
//    {
//        while(scanf("%d",&b[0]),b[0])
//        {
//            for(j=1; j<n; j++)
//                scanf("%d",&b[j]);
//            for(i=1,j=0,k=0; i<=n && j<n; i++,k++)
//            {
//                a[k]=i;
//                while(a[k]==b[j])
//                {
//                    if(k>0)
//                        k--;
//                    else
//                    {
//                        a[k]=0,k--;
//                    }
//                    j++;
//                    if(k==-1)
//                        break;
//                }
//            }
//            if(j==n)
//                printf("Yes\n");
//            else
//                printf("No\n");
//        }
//        printf("\n");
//    }
//}

/*
5
1 2 5 4 3

*/


//1010
//#include <cstdio>
//
//int main(void)
//{
//    int i, j, k, m, a[1005], b[1005];
//    while (scanf("%d", &m), m)
//    {
//        while (scanf("%d", &a[0]), a[0])
//        {
//            for (i = 1; i < m; ++ i)
//                scanf("%d", &a[i]);
//            for (i = 1, j = k = 0; i <= m && j < m; ++ i, ++ k)
//            {
//                b[k] = i;
//                while (b[k] == a[j])
//                {
//                    if (k > 0)
//                        -- k;
//                    else
//                        a[k] = 0, -- k;
//                    ++ j;
//                    if (-1 == k)
//                        break;
//                }
//            }
//            if (j == m)
//                printf("Yes\n");
//            else
//                printf("No\n");
//        }
//        printf("\n");
//    }
//
//    return 0;
//}



//1009
//#include <cstdio>
//#include <cstring>
//
//int main(void)
//{
//    int i, j, len, lentemp, num;
//    char st[1005], str;
//    freopen("data1009.in", "r", stdin);
//    freopen("out.txt", "w", stdout);
//    while (gets(st))
//    {
//        len = strlen(st);
//        lentemp = len / 2;
//        for (i = lentemp; i > 0; -- i)
//        {
//            if (i & 1)
//            {
//                for (j = 0; j < len; ++ j)
//                    if (0 == (j + 1)%i)
//                    {
//                        str = st[j];
//                        num = j;
//                        break;
//                    }
//                for (; j < len; j += i)
//                {
//                    st[num] = st[j];
//                    num = j;
//                }
//                st[num] = str;
//            }
//            else
//            {
//                for (j = len - 1; j >= 0; -- j)
//                    if (0 == (j + 1)%i)
//                    {
//                        str = st[j];
//                        num = j;
//                        break;
//                    }
//                for (; j >= 0; j -= i)
//                {
//                    st[num] = st[j];
//                    num = j;
//                }
//                st[num] = str;
//            }
//        }
//        printf("%s\n", st);
//    }
//
//    return 0;
//}



//1012
//#include <cstdio>
//int main(void)
//{
//    int i,n,p,s,k=0,m,a[105];
//    while(scanf("%d",&n),n)
//    {
//        k++;
//        s=0;
//        p=0;
//        for(i=0;i<n;i++)
//        {
//            scanf("%d",&a[i]);
//            s+=a[i];
//        }
//        m=s/n;
//        for(i=0;i<n;i++)
//        {
//            if(a[i]>m)
//                p+=a[i]-m;
//        }
//        printf("Set #%d\nThe minimum number of moves is %d.\n\n",k,p);
//    }
//    return 0;
//}



//#include <iostream>
//#include <cstdio>
//#include <cmath>
//
//using namespace std;
//
//int factorial(int num);
//
//int main(void)
//{
//    int num;
//    while (cin >> num)
//    {
//        factorial(num);
//    }
//    return 0;
//}
//
//int factorial(int num)
//{
//    long st[10001];
//    int i, j, c, m = 0, w;
//    st[0] = 1;
//    for (i = 1; i <= num; ++ i)
//    {
//        c = 0;
//        for (j = 0; j <= m; ++ j)
//        {
//            st[j] = st[j]*i + c;
//            c = st[j]/10000;
//            st[j] %= 10000;
//        }
//        if (c < 0)
//        {
//            ++ m;
//            st[m] = c;
//        }
//    }
//    w = m*4 + log10(st[m]) + 1;
//    printf("\n%ld", st[m]);
//    for (i = m - 1; i >= 0; -- i)
//    {
//        printf("%4.4ld", st[i]);
//    }
//    return w;
//}



//#include<stdio.h>
//#include<string.h>
//#include<time.h>
//int main ()
//{
//    int t,max,n,c,i,j,a[90001];
//    while (scanf ("%d",&n)==1)
//    {
//        long t = clock();
//        memset(a,0,sizeof(a));
//        a[0]=1;max=1;
//        for (i=1;i<=n;i++)
//        {
//            c=0;
//             for (j=0;j<max;j++)
//            {
//                a[j]=a[j]*i+c;
//                c=a[j]/10;
//                a[j]%=10;
//                if(c&&max<=j+1)
//                max++;
//            }
//        }
//        t = clock() - t;
//if (a[max])
//printf ("%d",a[max]);
//       for (j=max-1;j>=0;j--)
//       printf ("%d",a[j]);
//       printf ("\n");
//       printf("%ld\n", t);
//    }
//    return 0;
//}



//#include <stdio.h>
//#include <string.h>
//struct student
//{
//  int    a[5];
//  double avg ;
//}student[51] ;
//
//int main()
//{
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
//	double course_avg[5];
//	int n , m ,i,j;
//	int count=0;
//	int l=1;
//	memset(course_avg,0,sizeof(course_avg));
//	while(scanf("%d%d",&n,&m)!=EOF)
//	{
//		//输入部分
//	   for(i=0 ; i<n ; i++)
//	   {
//		   student[i].avg=0;
//		   for(j=0 ; j<m ; j++)
//		   {
//			   scanf("%d",&student[i].a[j]);
//		       student[i].avg+=student[i].a[j] ;
//			   course_avg[j]+=student[i].a[j];
//		   }
//		   student[i].avg/=m;
//	   }
//	  for(i=0 ; i<m ;i++)   //判断全科及格学生的个数
//		  course_avg[i]/=n;
//	  for(i=0 ; i<n ; i++)
//	  {
//		  for(j=0 ; j<m ; j++)
//		  {
//			  if(student[i].a[j] <course_avg[j])
//				 { l=0;break;}
//		  }
//		  if(l) count++;
//		  l=1;
//	  }
//	  //输出部分
//	  for(i=0 ; i<n ; i++)
//	  {
//		  if(i==n-1)
//			  printf("%.2lf",student[i].avg);
//		  else
//	          printf("%.2lf ",student[i].avg);
//      }
//	  printf("\n");
//	  for(i=0 ; i<m ; i++)
//	  {
//		  if(i==m-1)
//			  printf("%.2lf",course_avg[i]);
//		  else
//	          printf("%.2lf ",course_avg[i]);
//      }
//	  printf("\n");
//	  printf("%d\n\n",count);
//	  count=0;
//	  memset(course_avg,0,sizeof(course_avg));
//	}
//}



//#include <stdio.h>
//#include <string.h>
//#define MAX 100 + 10
//#define M 10
//int a[MAX][M];
//int main()
//{
//    freopen("in.txt", "r", stdin);
//    freopen("out2.txt", "w", stdout);
//    int n, m, count = 0;
//    double e[MAX], b[MAX];//这里是double
//    memset(e, 0, sizeof(e));
//    memset(b, 0, sizeof(b));
//    while(scanf("%d%d", &n, &m) != EOF){
//        for(int i = 0; i < n; i++){
//            for(int j = 0; j < m; j++){
//                scanf("%d", &a[i][j]);
//            }
//        }
//        for(int k = 0; k < n; k++){
//            for(int l = 0; l < m; l++){
//                e[k] += a[k][l];
//            }
//        }
//        for(int i1 = 0; i1 < n; i1++){
//            if(i1 < n-1)
//            printf("%.2lf ", e[i1]/m);
//            else
//            printf("%.2lf\n", e[i1]/m);
//        }
//        for(int k = 0; k < m; k++){
//            for(int l = 0; l < n; l++){
//                b[k] += a[l][k];
//            }
//        }
//        for(int j1 = 0; j1 < m; j1++){
//            if(j1 < m-1)
//            printf("%.2lf ", b[j1]/n);
//            else
//            printf("%.2lf\n", b[j1]/n);
//        }
//        for(int c = 0; c < n; c++){
//            int y = 0;
//            for(int d = 0; d < m; d++){
//                if(a[c][d] >= b[d]/n) {y++;}
//                else ;
//            }
//            if(y == m)    count++; //这里要注意，必须大于所有科目平均成绩
//        }
//        printf("%d\n\n", count); //两个回车！
//        memset(e, 0, sizeof(e));
//        memset(b, 0, sizeof(b)); //必须要置空数组，count也要清零！
//        count = 0;
//    }
//    return 0;
//}



//#include<iostream>
//#include<cstring>
//#include<cstdio>
//
//using namespace std;
//
//int main()
//{
//    //freopen("in.txt", "r", stdin);
//    //freopen("out11.txt", "w", stdout);
//	char a[100],b[10000];
//	int i=0,used=0;
//
//	while(cin>>a)
//	{
//		if(strcmp(a,"<br>")==0)
//		{
//			b[i++]='\n';
//
//			used=0;
//
//			continue;
//		}
//
//		if(strcmp(a,"<hr>")==0)
//		{
//			if(used!=0)
//				b[i++]='\n';
//
//			for(int j=0;j<80;j++)
//				b[i++]='-';
//
//			b[i++]='\n';
//
//			used=0;
//
//			continue;
//		}
//
//		int len=strlen(a);
//		if(len+1+used>80)
//		{
//			b[i++]='\n';
//
//		    for(int j=0;j<len;j++)
//				b[i++]=a[j];
//
//			used=len;
//		}
//		else
//		{
//			if(used!=0)
//			    b[i++]=' ';
//
//			for(int j=0;j<len;j++)
//				b[i++]=a[j];
//
//			used+=len+1;
//		}
//	}
//
//	b[i]=0;
//	cout<<b<<endl;
//
//	return 0;
//}



//#include <iostream>
//#include <sstream>
//#include <string>
//#include <stdio.h>
//using namespace std;
//int main()
//{
////        freopen("in.txt", "r", stdin);
////    freopen("out11.txt", "w", stdout);
//	string line;
//	int count = 0;
//	while(getline(cin,line))
//	{
//		stringstream stream(line);
//		string word;
//		while(stream>>word)
//		{
////			cout<<count;
//			if( word == "<br>" )
//			{
//				count = 0;
//				cout<<endl;
//				continue;
//			}
//
//			if( word == "<hr>")
//			{
//				if(count != 0)
//				cout<<endl<<"--------------------------------------------------------------------------------"<<endl;
//				else
//					cout<<"--------------------------------------------------------------------------------"<<endl;
//
//				count = 0;
//				continue;
//			}
//			if(count == 0)
//			{
//				count = word.size();
//				cout<<word;
//				continue;
//			}
//			if(count + word.size() + 1 > 80)
//			{
//				count = word.size();
//				cout<<endl<<word;
//				continue;
//			}
//			count += (word.size() + 1);
//			cout<<" "<<word;
//		}
//
//	}
//	cout<<endl;
//
//
//}


//
//#include<iostream>
//#include<cstdio>
//#include<cstring>
//using namespace std;
//#define N 110
//struct Point
//{
//    double x1,y1;
//    double x2,y2;
//} p[N];
//bool fun(Point a,Point b)
//{
//    //y=kx+b   =   y=x*(a.y1-a.y2)/(a.x1-a.x2)+(a.x1*a.y2-a.x2*a.y1)/(a.x1-a.x2)
//    double x=b.y1-(b.x1*(a.y1-a.y2)+(a.x1*a.y2-a.x2*a.y1))/(a.x1-a.x2);
//    double y=b.y2-(b.x2*(a.y1-a.y2)+(a.x1*a.y2-a.x2*a.y1))/(a.x1-a.x2);
////	printf("%f %f\n",x,y);
//    if(x*y<=0)return true;
//    return false;
//}
//int main()
//{
//    freopen("D:\\Users\\xyx_0\\Desktop\\code\\in.txt", "r", stdin);
//    freopen("D:\\Users\\xyx_0\\Desktop\\code\\st.txt", "w", stdout);
//    int n,i,j,cnt;
//    while(cin>>n&&n)
//    {
//        for(i=0; i<n; i++)
//            scanf("%lf%lf%lf%lf",&p[i].x1,&p[i].y1,&p[i].x2,&p[i].y2);
//        cnt=0;
//        for(i=0; i<n; i++)
//            for(j=i+1; j<n; j++)
//                if(fun(p[i],p[j])&&fun(p[j],p[i]))cnt++;
//        printf("%d\n",cnt);
//    }
//    return 0;
//}




/////优先队列
///*优先队列的基本使用    2010/7/24    dooder*/
//#include<stdio.h>
//#include<functional>
//#include<queue>
//#include<vector>
//using namespace std;
////定义结构，使用运算符重载,自定义优先级1
//struct cmp1
//{
//    bool operator ()(int &a,int &b)
//    {
//        return a>b;//最小值优先
//    }
//};
//struct cmp2
//{
//    bool operator ()(int &a,int &b)
//    {
//        return a<b;//最大值优先
//    }
//};
//
////定义结构，使用运算符重载,自定义优先级2
//struct number1
//{
//    int x;
//    bool operator < (const number1 &a) const
//    {
//        return x>a.x;//最小值优先
//    }
//};
//struct number2
//{
//    int x;
//    bool operator < (const number2 &a) const
//    {
//        return x<a.x;//最大值优先
//    }
//};
//int a[]= {14,10,56,7,83,22,36,91,3,47,72,0};
//number1 num1[]= {14,10,56,7,83,22,36,91,3,47,72,0};
//number2 num2[]= {14,10,56,7,83,22,36,91,3,47,72,0};
//
//int main()
//{
//    priority_queue<int>que;//采用默认优先级构造队列
//
//    priority_queue<int,vector<int>,cmp1>que1;//最小值优先
//    priority_queue<int,vector<int>,cmp2>que2;//最大值优先
//
//    priority_queue<int,vector<int>,greater<int> >que3;//注意“>>”会被认为错误，
//    //这是右移运算符，所以这里用空格号隔开
//    priority_queue<int,vector<int>,less<int> >que4;////最大值优先
//
//    priority_queue<number1>que5;
//    priority_queue<number2>que6;
//
//    int i;
//    for(i=0; a[i]; i++)
//    {
//        que.push(a[i]);
//        que1.push(a[i]);
//        que2.push(a[i]);
//        que3.push(a[i]);
//        que4.push(a[i]);
//    }
//    for(i=0; num1[i].x; i++)
//        que5.push(num1[i]);
//    for(i=0; num2[i].x; i++)
//        que6.push(num2[i]);
//
//
//    printf("采用默认优先关系:\n(priority_queue<int>que;)\n");
//    printf("Queue 0:\n");
//    while(!que.empty())
//    {
//        printf("%3d",que.top());
//        que.pop();
//    }
//    puts("");
//    puts("");
//
//    printf("采用结构体自定义优先级方式一:\n(priority_queue<int,vector<int>,cmp>que;)\n");
//    printf("Queue 1:\n");
//    while(!que1.empty())
//    {
//        printf("%3d",que1.top());
//        que1.pop();
//    }
//    puts("");
//    printf("Queue 2:\n");
//    while(!que2.empty())
//    {
//        printf("%3d",que2.top());
//        que2.pop();
//    }
//    puts("");
//    puts("");
//    printf("采用头文件\"functional\"内定义优先级:\n(priority_queue<int,vector<int>,greater<int>/less<int> >que;)\n");
//    printf("Queue 3:\n");
//    while(!que3.empty())
//    {
//        printf("%3d",que3.top());
//        que3.pop();
//    }
//    puts("");
//    printf("Queue 4:\n");
//    while(!que4.empty())
//    {
//        printf("%3d",que4.top());
//        que4.pop();
//    }
//    puts("");
//    puts("");
//    printf("采用结构体自定义优先级方式二:\n(priority_queue<number>que)\n");
//    printf("Queue 5:\n");
//    while(!que5.empty())
//    {
//        printf("%3d",que5.top());
//        que5.pop();
//    }
//    puts("");
//    printf("Queue 6:\n");
//    while(!que6.empty())
//    {
//        printf("%3d",que6.top());
//        que6.pop();
//    }
//    puts("");
//    return 0;
//}




//#include <iostream>
//#include <cstring>
//#include <queue>
//#define N 210
//using namespace std;
//struct point
//{
//    int x, y;
//    int time;
//    bool operator < (const point &a)const
//    {
//        return time > a.time;
//    }
//};
//point start;
//int n, m;
//char _map[N][N];
//int dir[][2] = {1, 0, -1, 0, 0, 1, 0, -1};
//int bfs();
//int main()
//{
//    int i, ans;
//    char *p;
//    while (cin >> n >> m)
//    {
//        for (i = 0; i < n; ++ i)
//        {
//            cin >> _map[i];
//            if (p = strchr(_map[i], 'a'))
//            {
//                start.x = i;
//                start.y = p - _map[i];
//                start.time = 0;
//            }
//        }
//        ans = bfs();
//        if (-1 == ans)
//            cout << "Poor ANGEL has to stay in the prison all his life." << endl;
//        else
//            cout << ans << endl;
//    }
//    return 0;
//}
//int bfs()
//{
//    priority_queue<point> que;
//    point cur, next;
//    int i;
//    _map[start.x][start.y] = '#';
//    que.push(start);
//    while (!que.empty())
//    {
//        cur = que.top(); ///由优先队列自动完成出队时间最少的元素
//        que.pop();///删除该元素
//        for (i = 0; i < 4; ++ i)
//        {
//            next.x = cur.x + dir[i][0];
//            next.y = cur.y + dir[i][1];
//            next.time = cur.time + 1;
//            if (next.x >= 0 && next.x < n && next.y >=0 && next.y < m)
//            {
//                if ('r' == _map[next.x][next.y])
//                    return next.time;
//                else if ('.' == _map[next.x][next.y])
//                {
//                    _map[next.x][next.y] = '#';
//                    que.push(next);
//                }
//                else if ('x' == _map[next.x][next.y])
//                {
//                    _map[next.x][next.y] = '#';
//                    ++ next.time;
//                    que.push(next);
//                }
//
//            }
//        }
//    }
//    return -1;
//}


/////hdu2544
//#include <stdio.h>
//#include <string.h>
//
//int n,m;
//int i,j,k;
//int dis[110][110];
//int s[110];
//
//void Dijkstra(int dis[][110]) {
//    int u = 1;
//    s[1] = 1;
//
//    for(i = 1; i <= n; i++) {
//        int _min = 0x3f3f3f3f;
//        for(j = 2; j <= n; j++ ) {
//            if(dis[1][j] < _min  && !s[j] && (i != j)){
//                _min = dis[1][j];
//                u = j;
//            }
//        }
//        s[u] = 1;
//        for(k = 2; k <= n; k++) {
//            if (!s[k] && dis[1][u] + dis[u][k] < dis[1][k]  ) {
//                dis[1][k] = dis[1][u] + dis[u][k];
//            }
//        }
//    }
//}
//
//int main(void) {
//
//    while(scanf("%d%d",&n,&m) != EOF && (n && m)) {
//
//        int a,b,c;
//        memset(dis,0x3f,sizeof(dis));
//        memset(s,0,sizeof(s));
//
//        for(i = 1; i <= n; i++)
//            dis[i][i] = 0;
//
//        for(i = 1; i <= m; i++) {
//            scanf("%d%d%d",&a,&b,&c);
//            dis[a][b] = dis[b][a] = c;
//        }
//        Dijkstra(dis);
//        printf("%d\n",dis[1][n]);
//
//    }
//    return 0;
//}


//
/////2d10-1 一维最邻近点对问题
//#include <cstdlib>
//#include <ctime>
//#include <iostream>
//using namespace std;
//
//const int L=100;
////点对结构体
//struct Pair
//{
//    double d;//点对距离
//    double d1,d2;//点对坐标
//};
//double Random();
//int input(double s[]);//构造S
//double Max(double s[],int p,int q);
//double Min(double s[],int p,int q);
//template <class Type>
//void Swap(Type &x,Type &y);
//template <class Type>
//int Partition(Type s[],Type x,int l,int r);
//Pair Cpair(double s[],int l,int r);
//
//int main()
//{
//    while (true)
//    {
//        srand((unsigned)time(NULL));
//        int m;
//        double s[L];
//        Pair d;
//        m=input(s);
//        d=Cpair(s,0,m-1);
//        cout<<endl<<"最近点对坐标为： (d1:"<<d.d1<<",d2:"<<d.d2<<")";
//        cout<<endl<<"这两点距离为： "<<d.d<<endl;
//    }
//    return 0;
//}
//
//
//double Random()
//{
//    double result=rand()%100;
//    return result;
//}
//
//int input(double s[])
//{
//    int length;
//    cout<<"输入点的数目： ";
//    cin>>length;
//    cout<<"点集在X轴上坐标为：";
//    for(int i=0; i<length; i++)
//    {
//        s[i]=Random();
//        cout<<s[i]<<" ";
//    }
//    cout << endl;
//    return length;
//}
//
//
//double Max(double s[],int l,int r)//返回s[]中的最大值
//{
//    double s_max=s[l];
//    for(int i=l+1; i<=r; i++)
//        if(s_max<s[i])
//            s_max=s[i];
//    return s_max;
//}
//
//double Min(double s[],int l,int r)//返回s[]中的最小值
//{
//    double s_min=s[l];
//    for(int i=l+1; i<=r; i++)
//        if(s_min>s[i])
//            s_min=s[i];
//    return s_min;
//}
//
//template <class Type>
//void Swap(Type &x,Type &y)
//{
//    Type temp = x;
//    x = y;
//    y = temp;
//}
//
//template <class Type>
//int Partition(Type s[],Type x,int l ,int r)
//{
//    int i = l - 1,j = r + 1;
//
//    while(true)
//    {
//        while(s[++i]<x && i<r);
//        while(s[--j]>x);
//        if(i>=j)
//        {
//            break;
//        }
//        Swap(s[i],s[j]);
//    }
//    return j;
//}
//
////返回s[]中的具有最近距离的点对及其距离
//Pair Cpair(double s[],int l,int r)
//{
//    Pair min_d= {99999,0,0}; //最短距离
//
//    if(r-l<1)
//    {
//        cout << "_" << endl;
//        return min_d;
//    }
//    double m1=Max(s,l,r),m2=Min(s,l,r);
//
//    double m=(m1+m2)/2;//找出点集中的中位数
//
//    //将点集中的各元素按与m的大小关系分组
//    int j = Partition(s,m,l,r);
////    for (int i = 0; i < 10; ++ i)
////        cout << s[i] << " ";
////    cout << endl;
//
//    Pair d1=Cpair(s,l,j),d2=Cpair(s,j+1,r);//递归
//    double p=Max(s,l,j),q=Min(s,j+1,r);
//
//    //返回s[]中的具有最近距离的点对及其距离
//    if(d1.d<d2.d)
//    {
//        if((q-p)<d1.d)
//        {
//            min_d.d=(q-p);
//            min_d.d1=q;
//            min_d.d2=p;
//            cout << "1  " << min_d.d1 << " " << min_d.d2 << " " << min_d.d << endl;
//            return min_d;
//        }
//        else
//        {
//            cout << "2  " << d1.d1 << " " << d1.d2 << " " << d1.d << endl;
//            return d1;
//        }
//    }
//    else
//    {
//        if((q-p)<d2.d)
//        {
//            min_d.d=(q-p);
//            min_d.d1=q;
//            min_d.d2=p;
//            cout << "3  " << min_d.d1 << " " << min_d.d2 << " " << min_d.d << endl;
//            return min_d;
//        }
//        else
//        {
//            cout << "4  " << d2.d1 << " " << d2.d2 << " " << d2.d << endl;
//            return d2;
//        }
//    }
//}


//
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//using namespace std;
//int n;
//struct node
//{
//  double x;
//  double y;
//}p[100005];
//int a[100005];
//double cmpx(node a,node b)
//{
//  return a.x<b.x;
//}
//double cmpy(int a,int b)
//{
//  return p[a].y<p[b].y;
//}
//double min(double a,double b)
//{
//  return a<b?a:b;
//}
//double dis(node a,node b)
//{
//  return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
//}
//double find(int l,int r)
//{
//     if(r==l+1)
//      return dis(p[l],p[r]);
//     if(l+2==r)
//      return min(dis(p[l],p[r]),min(dis(p[l],p[l+1]),dis(p[l+1],p[r])));
//     int mid=(l+r)>>1;
//     double ans=min(find(l,mid),find(mid+1,r));
//     int i,j,cnt=0;
//     printf("%d - %d\n", l, r);
//     for(i=l;i<=r;i++)
//        printf("%d: %.2lf\t%.2lf\n", i, p[i].x, p[i].y);
//    puts("");
//     for(i=l;i<=r;i++)
//     {
//       if(p[i].x>=p[mid].x-ans&&p[i].x<=p[mid].x+ans){
//        printf("%d: %.2lf%\t%.2lf\t%.2lf\n", i, p[i].x, p[mid].x, ans);
//          a[cnt++]=i;
//       }
//     }
//     sort(a,a+cnt,cmpy);
//     for(i=0;i<cnt;i++)
//        printf("%d: %.2lf\t%.2lf\n", i, p[a[i]].x, p[a[i]].y);
//    puts("");
//     for(i=0;i<cnt;i++)
//     {
//       for(j=i+1;j<cnt;j++)
//       {
//           printf("a[%d]: %.2lf\t%.2lf\n", i, p[a[i]].x, p[a[i]].y);
//           printf("a[%d]: %.2lf\t%.2lf\n", j, p[a[j]].x, p[a[j]].y);
//         if(p[a[j]].y-p[a[i]].y>=ans) break;
//         else {
//                ans=min(ans,dis(p[a[i]],p[a[j]]));
//         printf("ans: %.2lf\n", ans);
//         }
//       }
//     }
//     return ans;
//}
//int main()
//{
//    freopen("D:\\Users\\xyx_0\\Desktop\\code\\out.txt", "w", stdout);
//    int i;
//    while(scanf("%d",&n)!=EOF)
//    {
//      if(!n) break;
//      for(i=0;i<n;i++)
//       scanf("%lf %lf",&p[i].x,&p[i].y);
//      sort(p,p+n,cmpx);
//      printf("按x排序后: \n");
//      for(i=0;i<n;i++)
//       printf("%d: %.2lf\t%.2lf\n", i, p[i].x,p[i].y);
//       printf("\n");
//      printf("%.2lf%\n",find(0,n-1));
//    }
//    return 0;
//}


/*
20
20 13
7 8
20 9
12 8
34 9
22 6
12 21
15 13
18 20
9 11
7 23
19 16
15 6
22 24
30 9
12 14
23 39
44 87
19 24
23 32

*/



//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//#define SIZE 101
//#define MAXSIZE 10201
//int n, nline;/*n 个点,nline行关系*/
//int in[SIZE];
//struct Point
//{
//    int x, y;/*编号从1开始*/
//    int v;/*根据实际情况更改类型*/
//} p[MAXSIZE]; /*n*(n-1)/2*/
//int cmp(Point a, Point b)
//{
//    return a.v < b.v;
//}
//int prim()
//{
//    int dis, count, j;
//    memset(in, 0, sizeof(in));
//    in[p[1].x] = in[p[1].y] = 1;
//    dis = p[1].v;
//    count = n - 1;
//    while (count --)/*做n-1次*/
//    {
//        for (j = 2; j < nline; j ++)
//        {
//            if((in[p[j].x] && !in[p[j].y]) || (!in[p[j].x] && in[p[j].y]))
//            {
//                in[p[j].x] = 1;
//                in[p[j].y] = 1;
//                dis += p[j].v;
//                break;
//            }
//        }
//    }
//    return dis;
//}
//int main()
//{
//    int i;
//    while(scanf("%d", &n) && n)
//    {
//        if(n == 1) /*有可能输入的为1个点*/
//        {
//            printf("0\n");
//            continue;
//        }
//        nline = n*(n - 1)/2 + 1;
//        for(i = 1; i < nline; i ++)
//            scanf("%d%d%d", &p[i].x, &p[i].y, &p[i].v);
//        sort(p + 1, p + nline, cmp);
//        printf("%d\n", prim());
//    }
//    return 0;
//}


//
//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#define M 501
//using namespace std;
//int map[M][M],degree[M];
//int ne;/*个数*/
//void topo()
//{
//    int i,j,k;
//    for(i=0; i<ne; i++)
//    {
//        j=1;
//        while(j<=ne&&degree[j])
//            j++;
//        //直到一个度为零的顶点,这里不检查有多个度为零的情况
//        //if(j>ne){break;}不是拓扑结构
//        if(i)
//            printf(" ");
//        printf("%d",j);
//        degree[j]=-1;
//        for(k=1; k<=ne; k++)
//            degree[k]-=map[j][k];
//    }
//    printf("\n");
//}
//int main()
//{
//    int a,b,i,j,nline;/*nline行*/
//    while(scanf("%d%d",&ne,&nline)!=EOF)
//    {
//        memset(map,0,sizeof(map));
//        memset(degree,0,sizeof(degree));
//        while(nline--)
//        {
//            scanf("%d%d",&a,&b);
//            map[a][b]=1;/*a to b*/
//        }
//        for(i=1; i<=ne; i++)
//            for(j=1; j<=ne; j++)
//                if(map[i][j])
//                    degree[j]++;
//        topo();/*拓扑*/
//    }
//    return 0;
//}




//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//#define SIZE 101
//#define MAXSIZE 10201
//int n, nline;/*n 个点,nline行关系*/
//int in[SIZE];
//struct Point
//{
//    int x, y;/*编号从1开始*/
//    int v;/*根据实际情况更改类型*/
//} p[MAXSIZE]; /*n*(n-1)/2*/
//int cmp(Point a, Point b)
//{
//    return a.v < b.v;
//}
//int prim()
//{
//    int dis, count, j;
//    memset(in, 0, sizeof(in));
//    in[p[1].x] = in[p[1].y] = 1;
//    dis = p[1].v;
//    count = n - 1;
//    while (count --)/*做n-1次*/
//    {
//        for (j = 2; j < nline; j ++)
//        {
//            if((in[p[j].x] && !in[p[j].y]) || (!in[p[j].x] && in[p[j].y]))
//            {
//                in[p[j].x] = 1;
//                in[p[j].y] = 1;
//                dis += p[j].v;
//                break;
//            }
//        }
//    }
//    return dis;
//}
//int main()
//{
//    int i;
//    while(scanf("%d", &n) && n)
//    {
//        if(n == 1) /*有可能输入的为1个点*/
//        {
//            printf("0\n");
//            continue;
//        }
//        nline = n*(n - 1)/2 + 1;
//        for(i = 1; i < nline; i ++)
//            scanf("%d%d%d", &p[i].x, &p[i].y, &p[i].v);
//        sort(p + 1, p + nline, cmp);
//        printf("%d\n", prim());
//    }
//    return 0;
//}


//
///**
// *题目大意：
// *给出一个简单无向加权图,求这个图中有多少个不同的最小生成树；
// *由于不同的最小生成树可能很多,所以只需输出方案数对31011的模就可以了;
// *
// *算法思想：
// *Kruskal+Matrix_Tree定理;
// *
// *先按照任意顺序对等长的边进行排序;
// *然后利用并查集将所有长度为L0的边的处理当作一个阶段来整体看待;
// *可以定义一个数组的vector向量来保存每一个连通块的边的信息;
// *即将原图划分成多个连通块,每个连通块里面的边的权值都相同;
// *针对每一个连通块构建对应的Kirchhoff矩阵C,利用Matrix_Tree定理求每一个连通块的生成树个数;
// *最后把他们的值相乘即可;
// *
// *Matrix_Tree定理:
// *G的所有不同的生成树的个数等于其Kirchhoff矩阵C[G]任何一个n-1阶主子式的行列式的绝对值；
// *n-1阶主子式就是对于r(1≤r≤n),将C[G]的第r行,第r列同时去掉后得到的新矩阵,用Cr[G]表示;
//**/
//
///**************************************************************
//    Problem: 1016
//    User: Jarily
//    Language: C++
//    Result: Accepted
//    Time:12 ms
//    Memory:1388 kb
//****************************************************************/
//
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<cstring>
//#include<cstdlib>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//const int N=111;
//const int M=1111;
//const int mod=31011;///取模
//
//struct Edges
//{
//    int a,b,c;
//    bool operator<(const Edges & x)const
//    {
//        return c<x.c;
//    }
//} edge[M];
//
//int n,m;
//int f[N],U[N],vist[N];//f,U都是并查集，U是每组边临时使用
//int G[N][N],C[N][N];//G顶点之间的关系，C为生成树计数用的Kirchhoff矩阵
//
//vector<int>V[N];//记录每个连通分量
//
//int Find(int x,int f[])
//{
//    if(x==f[x])
//        return x;
//    else
//        return Find(f[x],f);
//}
//
//int det(int a[][N],int n)//生成树计数:Matrix-Tree定理
//{
//    for(int i=0; i<n; i++)
//        for(int j=0; j<n; j++)
//            a[i][j]%=mod;
//    int ret=1;
//    for(int i=1; i<n; i++)
//    {
//        for(int j=i+1; j<n; j++)
//            while(a[j][i])
//            {
//                int t=a[i][i]/a[j][i];
//                for(int k=i; k<n; k++)
//                    a[i][k]=(a[i][k]-a[j][k]*t)%mod;
//                for(int k=i; k<n; k++)
//                    swap(a[i][k],a[j][k]);
//                ret=-ret;
//            }
//        if(a[i][i]==0)
//            return 0;
//        ret=ret*a[i][i]%mod;
//    }
//    if(ret<0)
//        ret=-ret;
//    return (ret+mod)%mod;
//}
//
//void Solve()
//{
//    sort(edge,edge+m);//按权值排序
//    for(int i=1; i<=n; i++)//初始化并查集
//    {
//        f[i]=i;
//        vist[i]=0;
//    }
//
//    int Edge=-1;//记录相同的权值的边
//    int ans=1;
//    for(int k=0; k<=m; k++)
//    {
//        if(edge[k].c!=Edge||k==m)//一组相等的边,即权值都为Edge的边加完
//        {
//            for(int i=1; i<=n; i++)
//            {
//                if(vist[i])
//                {
//                    int u=Find(i,U);
//                    V[u].push_back(i);
//                    vist[i]=0;
//                }
//            }
//            for(int i=1; i<=n; i++) //枚举每个连通分量
//            {
//                if(V[i].size()>1)
//                {
//                    for(int a=1; a<=n; a++)
//                        for(int b=1; b<=n; b++)
//                            C[a][b]=0;
//                    int len=V[i].size();
//                    for(int a=0; a<len; a++) //构建Kirchhoff矩阵C
//                        for(int b=a+1; b<len; b++)
//                        {
//                            int a1=V[i][a];
//                            int b1=V[i][b];
//                            C[a][b]=(C[b][a]-=G[a1][b1]);
//                            C[a][a]+=G[a1][b1];//连通分量的度
//                            C[b][b]+=G[a1][b1];
//                        }
//                    int ret=(int)det(C,len);
//                    ans=(ans*ret)%mod;//对V中的每一个连通块求生成树个数再相乘
//                    for(int a=0; a<len; a++)
//                        f[V[i][a]]=i;
//                }
//            }
//            for(int i=1; i<=n; i++)
//            {
//                U[i]=f[i]=Find(i,f);
//                V[i].clear();
//            }
//            if(k==m)
//                break;
//            Edge=edge[k].c;
//        }
//
//        int a=edge[k].a;
//        int b=edge[k].b;
//        int a1=Find(a,f);
//        int b1=Find(b,f);
//        if(a1==b1)
//            continue;
//        vist[a1]=vist[b1]=1;
//        U[Find(a1,U)]=Find(b1,U);//并查集操作
//        G[a1][b1]++;
//        G[b1][a1]++;
//    }
//
//    int flag=0;
//    for(int i=2; i<=n&&!flag; i++)
//        if(U[i]!=U[i-1])
//            flag=1;
//    if(m==0)
//        flag=1;
//    printf("%d\n",flag?0:ans%mod);
//
//}
//
//int main()
//{
//    while(~scanf("%d%d",&n,&m))
//    {
//        memset(G,0,sizeof(G));
//        for(int i=1; i<=n; i++)
//            V[i].clear();
//        for(int i=0; i<m; i++)
//            scanf("%d%d%d",&edge[i].a,&edge[i].b,&edge[i].c);
//        Solve();
//    }
//    return 0;
//}




//#include<iostream>
//#include<cstdio>
//#include<cstring>
//
//#define M 201
//
//using namespace std;
//
//int n,map[M][M],start,end;
//
//void folyd()
//{
//    int i,j,k;
//    for(i=0; i<n; i++)
//        for(j=0; j<n; j++)
//            for(k=0; k<n; k++)
//            {
//                if(map[j][i]==-1||map[i][k]==-1)continue;
//                if(map[j][k]==-1||map[j][i]+map[i][k]<map[j][k])
//                    map[j][k]=map[j][i]+map[i][k];
//            }
//}
//
//int main()
//{
//    int nline,i,a,b,v;
//    while(scanf("%d%d",&n,&nline)!=EOF)
//    {
//        memset(map,-1,sizeof(map));
//        for(i=0; i<n; i++)
//            map[i][i]=0;
//        for(i=0; i<nline; i++)
//        {
//            scanf("%d%d%d",&a,&b,&v);/*编号从0开始*/
//            if(map[a][b]==-1||map[a][b]>v) //一个点到另一个有多条路
//                map[b][a]=map[a][b]=v;
//        }
//        scanf("%d%d",&start,&end);
//        folyd();
//        if(map[start][end]!=-1)
//            printf("%d\n",map[start][end]);
//        else
//            printf("-1\n");
//    }
//    return 0;
//}
///*
//in:
//3 3
//0 1 1
//0 2 3
//1 2 1
//0 2
//3 1
//0 1 1
//1 2
//
//out:
//2
//-1
//
//*/


//#include<iostream>
//#include<cstdio>
//#include<cstring>
//
//#define M 501
//
//using namespace std;
//
//int map[M][M],degree[M],dp[M];
//int ne;/*个数*/
//
//int topoplus()
//{
//    int i,j,k;
//    int maxnum = -1;
//    for(i=0; i<ne; i++)
//    {
//        j=1;
//        while(j<=ne&&degree[j])
//            j++;
//        //直到一个度为零的顶点,这里不检查有多个度为零的情况
//        //if(j>ne){break;}不是拓扑结构
//        degree[j]=-1;
//        for(k=1; k<=ne; k++)
//        {
//            if(map[j][k])
//            {
//                if(map[j][k]+dp[j]>dp[k])
//                    dp[k]=map[j][k]+dp[j];
//                degree[k]--;
//            }
//        }
//    }
//    for(i=0; i<=ne; i++)
//        if(dp[i]>maxnum)
//            maxnum=dp[i];
//    return maxnum;
//}
//
//int main()
//{
//    int a,b,v,i,j,nline;/*nline行*/
//    while(scanf("%d%d",&ne,&nline)!=EOF)
//    {
//        memset(map,0,sizeof(map));
//        memset(degree,0,sizeof(degree));
//        memset(dp,0,sizeof(dp));
//        while(nline--)
//        {
//            scanf("%d%d%d",&a,&b,&v);
//            map[a][b]=v;/*a to b，v>0*/
//        }
//        for(i=1; i<=ne; i++)
//            for(j=1; j<=ne; j++)
//                if(map[i][j])
//                    degree[j]++;
//        printf("%d\n",topoplus());/*拓扑改进*/
//    }
//    return 0;
//}
///*
//in:
//9 11
//1 2 6
//1 3 4
//1 4 5
//2 5 1
//3 5 1
//4 6 2
//5 7 7
//5 8 5
//6 8 4
//7 9 2
//8 9 4
//
//out:
//16
//
//*/




//#include<iostream>
//#include<cstdio>
//#include<cstring>
//
//#define N 301
//
//using namespace std;
//
//int isuse[N]; //记录y中节点是否使用
//int lk[N];  //记录当前与y节点相连的x的节点
//int mat[N][N];//记录连接x和y的边，如果i和j之间有边则为1，否则为0
//int gn,gm;    //二分图中x和y中点的数目
//
//int can(int t)
//{
//    int i;
//    for(i=1; i<=gm; i++) //下标从1开始
//        if(isuse[i]==0 && mat[t][i])
//        {
//            isuse[i]=1;
//            if(lk[i]==-1 || can(lk[i]))
//            {
//                lk[i]=t;
//                return 1;
//            }
//        }
//    return 0;
//}
//
//int MaxMatch()
//{
//    int i,num=0;
//    memset(lk,-1,sizeof(lk));
//    for(i=1; i<=gn; i++)
//    {
//        memset(isuse,0,sizeof(isuse));
//        if(can(i))
//            num++;
//    }
//    return num;
//}
//
//int main()
//{
//    int t,i,j,k,tmp;
//    scanf("%d",&t);
//    while(t--)
//    {
//        scanf("%d%d",&gn,&gm);
//        memset(mat,0,sizeof(mat));//主要得到mat这个数组
//        for(i=1; i<=gn; i++)
//        {
//            scanf("%d",&k);
//            for(j=1; j<=k; j++)
//            {
//                scanf("%d",&tmp);
//                mat[i][tmp]=1;//注意从1开始
//            }
//        }
//        if(MaxMatch()==gn)
//            printf("YES\n");
//        else
//            printf("NO\n");
//    }
//    return 0;
//}
///*
//In:
//2
//3 3
//3 1 2 3
//2 1 2
//1 1
//3 3
//2 1 3
//2 1 3
//1 1
//Out:
//YES
//NO
//*/




//#include<iostream>
//#include<cstdio>
//
//using namespace std;
//
//const int N=1010;
//int pre[N];
//
//void Merge(int x,int y)
//{
//    int i,t,rx=x,ry=y;
//    while(pre[rx]!=-1)//搜索x的树根
//        rx=pre[rx];
//    while(pre[ry]!=-1)//搜索y的树根
//        ry=pre[ry];
//    i=x;//压缩x
//    while(pre[i]!=-1)
//    {
//        t=pre[i];
//        pre[i]=rx;
//        i=t;
//    }
//    i=y;//压缩y
//    while(pre[i]!=-1)
//    {
//        t=pre[i];
//        pre[i]=rx;
//        i=t;
//    }
//    if(ry!=rx)//合并
//        pre[ry]=rx;
//    return;
//}
//int main()
//{
//    int x,y,i,ans,n,m;
//    while(scanf("%d",&n)&&n)
//    {
//        scanf("%d",&m);
//        memset(pre,-1,sizeof(pre));
//        for(i=0; i<m; i++)
//        {//x与y连通
//            scanf("%d %d",&x,&y);
//            Merge(x,y);
//        }
//        ans=0;
//        for(i=1; i<=n; i++)
//            if(pre[i]==-1)
//                ans++;
//        printf("%d\n",ans-1);
//    }
//}
///*
//http://acm.hdu.edu.cn/showproblem.php?pid=1232
//in:
//4 2
//1 3
//4 3
//999 0
//0
//out:
//1
//998
//*/




//#include<iostream>
//#include<cstdio>
//#include<cstring>
//
//#define M 1001
//
//using namespace std;
//
//char a[M],b[M];
//int dp[M+1][M+1],lena,lenb;
//
//void init()
//{
//    int i,j;
//    for(i=0; i<=lena; i++)
//        for(j=0; j<=lenb; j++)
//            dp[i][j]=0;
//}
//
//int cmax(int x,int y)
//{
//    return x>y?x:y;
//}
//
//int main()
//{
//    int i,j,len;
//    while(scanf("%s",a)!=EOF)
//    {
//        scanf("%s",b);
//        init();
//        //下面这步很重要，否则会超时
//        lena=strlen(a);
//        lenb=strlen(b);
//        for(i=0; i<lena; i++)
//            for(j=0; j<lenb; j++)
//                if(a[i]==b[j])
//                    dp[i+1][j+1]=dp[i][j]+1;
//                else
//                    dp[i+1][j+1]=cmax(dp[i][j+1],dp[i+1][j]);
//        printf("%d\n",dp[i][j]);/*打印出子序列*/
//        len=1;
//        for(i=1; i<=lena; i++)
//            for(j=1; j<=lenb; j++)
//                if(len==dp[i][j])
//                {
//                    printf("%c",a[i-1]);
//                    len++;
//                    break;
//                }
//        printf("\n");
//    }
//    return 0;
//}
//
///*
//in:
//cnblogs
//belong
//
//out:
//4
//nlog
//
//*/



//#include<iostream>
//#include<cstdio>
//
//#define M 1001
//
//using namespace std;
//
//int a[M],dp[M];
//
//void init(int n)
//{
//    int i;
//    for(i=0; i<n; i++)
//        dp[i]=1;
//}
//
//int lis(int n)
//{
//    int i,j,maxlen=1;//初始长度为1
//    for(i=n-2; i>=0; i--)
//        for(j=n-1; j>i; j--)
//            if(a[i]<a[j])
//            {
//                if(dp[j]+1>dp[i])
//                {
//                    dp[i]=dp[j]+1;
//                }
//                if(dp[i]>maxlen)maxlen=dp[i];
//            }
//    return maxlen;
//}
//
//void showlis(int n,int maxlen)
//{
//    int i;
//    for(i=0; i<n; i++)
//        if(dp[i]==maxlen)
//        {
//            printf("%d ",a[i]);
//            maxlen--;
//        }
//    printf("\n");
//}
//
//int main()
//{
//    int t,n,i,maxlen;
//    scanf("%d",&t);
//    while(t--)
//    {
//        /*1<=n<=1000*/
//        scanf("%d",&n);
//        for(i=0; i<n; i++)
//            scanf("%d",&a[i]);
//        init(n);
//        maxlen=lis(n);
//        printf("%d\n",maxlen);
//        //显示最长升序列
//        showlis(n,maxlen);
//    }
//    return 0;
//}
//
///*
//in:
//2
//8
//9 2 3 4 8 3 4 5
//5
//1 2 3 5 4
//
//out:
//4
//2 3 4 8
//4
//1 2 3 5
//
//*/




//#include<iostream>
//#include<cstring>
//#include<cstdio>
//
//using namespace std;
//
//int type[]= {150,200,350}; //种类
//int dp[10001];
//
//int max(int a,int b)
//{
//    return a>b?a:b;
//}
//
//int main()
//{
//    int t,n,i,j;
//    scanf("%d",&t);
//    while(t--)
//    {
//        scanf("%d",&n);
//        memset(dp,0,sizeof(dp));
//        for(i=0; i<3; i++)
//            for(j=type[i]; j<=n; j++)
//                //剩余容量为j时装的东西量最大
//                dp[j]=max(dp[j],dp[j-type[i]]+type[i]);
//        printf("%d\n",n-dp[n]);
//    }
//    return 0;
//}


//#include<iostream>
//#include<cstdio>
//#include<cstring>
//
//const int N=110;
//
//using namespace std;
//
//int dp[N*N*10];
//
//struct Node
//{
//    int a,b;
//} node[N];
//
//int main()
//{
//    int n;
//    while(~scanf("%d",&n))
//    {
//        for(int i=0; i<n; i++)
//            scanf("%d%d",&node[i].a,&node[i].b);
//        int m;
//        scanf("%d",&m);
//        memset(dp,0,sizeof(dp));
//        for(int i=0; i<n; i++)
//            for(int j=0; j<=m; j++)
//            {
//                if(j<node[i].b)continue;
//                dp[j]=max(dp[j],dp[j-node[i].b]+node[i].a);
//            }
//        printf("%d\n",dp[m]);
//    }
//    return 0;
//}




//#include<iostream>
//#include<cstdio>
//#include<cstring>
//
//#define M 1002
//
//using namespace std;
//
//int val[M],wei[M],dp[M][M];
//
//int cmax(int a,int b)
//{
//    return a>b?a:b;
//}
//
//int main()
//{
//    int t,n,w,i,j;
//    scanf("%d",&t);
//    while(t--)
//    {
//        scanf("%d%d",&n,&w);
//        for(i=1; i<=n; i++)
//            scanf("%d",&val[i]);
//        for(i=1; i<=n; i++)
//            scanf("%d",&wei[i]);
//        memset(dp,0,sizeof(dp));
//        for(i=1; i<=n; i++)
//            for(j=0; j<=w; j++)
//                if(j>=wei[i])
//                    dp[i][j]=cmax(dp[i-1][j-wei[i]]+val[i],dp[i-1][j]);
//                else
//                    dp[i][j]=dp[i-1][j];
//        printf("%d\n",dp[n][w]);
//    }
//    return 0;
//}
//
///*
//in;
//1
//5 10
//1 2 3 4 5
//5 4 3 2 1
//
//out:
//14
//
//*/





//#include <iostream>
//#include <cstring>
//#include <cstdio>
//
//#define M 17
//#define MAX 305
//
//using namespace std;
//
//int c1[MAX],c2[MAX],add[M+1];//add[]保存M种类
//
//void init()
//{
//    int i;
//    for(i=1; i<=M; i++)
//    {
//        add[i]=i*i;
//    }
//}
//
//int solve(int n)
//{
//    int i,j,k;
//    //c1[k],c2[k]表示展开式中x^k的系数
//    memset(c1,0,sizeof(c1));
//    memset(c2,0,sizeof(c2));
//    c1[0]=c2[0]=1;
//    //使用前i种币时的情况，也即母函数展开前i个多项式的乘积
//    for(i=1; i<=M; i++)
//    {
//        //求新的多项式中的系数
//        for(j=0; j<n; j++)
//        {
//            for(k=1; j+k*add[i]<=n; k++)
//            {
//                c2[j+k*add[i]]+=c1[j];
//            }
//        }
//        for(k=0; k<=n; k++) //滚动数组
//        {
//            c1[k]=c2[k];
//        }
//    }
//    return c1[n];
//}
//
//int main()
//{
//    int n;
//    init();
//    while(scanf("%d",&n)&&n)
//    {
//        printf("%d\n",solve(n));
//    }
//    return 0;
//}




//#include<cstdio>
//#include<iostream>
//#include<cstring>
//
//using namespace std;
//
//bool dp[250002];
//int val[101],num[101];//对应的值和数量
//
//int main()
//{
//    int n,i,j,sum,k;
//    while(scanf("%d",&n)&&n>0)
//    {
//        sum=0;
//        for(i=0; i<n; i++)
//        {
//            scanf("%d%d",&val[i],&num[i]);
//            sum+=val[i]*num[i];
//        }
//        //dp中保存所有可能的组合
//        memset(dp,0,sizeof(dp));
//        dp[0]=1;
//        //遍历n种物品
//        for(i=0; i<n; i++)
//        {
//            //对区间求
//            for(j=sum/2; j>=0; j--)
//            {
//                if(!dp[j])
//                {
//                    for(k=1; k<=num[i]&&k*val[i]<=j; k++)
//                    {
//                        dp[j]|=dp[j-k*val[i]];
//                    }
//                }
//            }
//        }
//        for(i=sum/2; i>=0; i--)
//        {
//            if(dp[i])
//            {
//                printf("%d %d\n",sum-i,i);
//                break;
//            }
//        }
//    }
//    return 0;
//}
///*
//in:
//2
//10 1
//20 1
//3
//10 1
//20 2
//30 1
//-1
//out:
//20 10
//40 40
//*/



//#include<cstdio>
//#include<iostream>
//#include<cstring>
//
//#define M 5001
//
//using namespace std;
//
//char str[M],rstr[M];
//int dp[2][M];//滚动DP
//
//int cmax(int x,int y)
//{
//    return x>y?x:y;
//}
//
//int main()
//{
//    int n,i,j,s1,s2;
//    while(scanf("%d",&n)!=EOF)
//    {
//        scanf(" %s",str);
//        //反转字符数组
//        for(i=0; i<n; i++)
//        {
//            rstr[n-i-1]=str[i];
//        }
//        rstr[n]='\0';
//        memset(dp,0,sizeof(dp));
//        for(i=0; i<n; i++)
//        {
//            for(j=0; j<n; j++)
//            {
//                s1=i%2;
//                s2=(i+1)%2;
//                if(str[i]==rstr[j])
//                {
//                    dp[s1][j+1]=dp[s2][j]+1;
//                }
//                else
//                {
//                    dp[s1][j+1]=cmax(dp[s2][j+1],dp[s1][j]);
//                }
//            }
//        }
//        printf("%d\n",n-dp[(n-1)%2][n]);
//    }
//    return 0;
//}
//
///*
//http://acm.hdu.edu.cn/showproblem.php?pid=1513
//in:
//5
//Ab3bd
//
//out:
//2
//
//*/





//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//
//#define M 101
//
//using namespace std;
//
//int n;
//
//struct Point
//{
//    int s,e;
//} p[M];
//
//int cmp(Point a,Point b)
//{
//    if(a.s==b.s)
//        return a.e<b.e;
//    else return a.s<b.s;
//}
//
//int arrange()
//{
//    int start,end,i,count=1;
//    start=p[0].s;
//    end=p[0].e;
//    for(i=1; i<n; i++)
//    {
//        if(p[i].s>=start&&p[i].e<=end)
//        {
//            start=p[i].s;
//            end=p[i].e;
//        }
//        else if(p[i].s>=end)
//        {
//            count++;
//            end=p[i].e;
//        }
//    }
//    return count;
//}
//
//int main()
//{
//    int i;
//    while(scanf("%d",&n)&&n)
//    {
//        for(i=0; i<n; i++)
//        {
//            scanf("%d%d",&p[i].s,&p[i].e);
//        }
//        sort(p,p+n,cmp);
//        printf("%d\n",arrange());
//    }
//    return 0;
//}


//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//    int t,n,i,a[100002];
//    int beg,end,x,y,cursum,maxsum;
//    cin>>t;
//    while(t--)
//    {
//        cin>>n;
//        for(i=0; i<n; i++)
//        {
//            cin>>a[i];
//        }
//        beg=end=1;
//        cursum=maxsum=a[0];
//        x=y=1;
//        for(i=1; i<n; i++)
//        {
//            if(a[i]+cursum<a[i])
//            {
//                cursum=a[i];
//                x=i+1;
//            }
//            else
//            {
//                cursum+=a[i];
//            }
//            if(cursum>maxsum)
//            {
//                maxsum=cursum;
//                beg=x;
//                end=i+1;
//            }
//        }
//        cout<<maxsum<<" "<<beg<<" "<<end<<endl;
//    }
//    return 0;
//}
///*
//in:
//2
//5 6 -1 5 4 -7
//7 0 6 -1 1 -6 7 -5
//
//out:
//14 1 4
//7 1 6
//
//*/



//#include<iostream>
//#include<cstdio>
//#include<cstring>
//
//using namespace std;
//
//int a[1001];
//
//int main()
//{
//    int n,i,len,count,high;
//    while(scanf("%d",&n)!=EOF)
//    {
//        for(i=0; i<n; i++)
//        {
//            scanf("%d",&a[i]);
//        }
//        count=0;
//        len=n;
//        while(len)
//        {
//            count++;
//            high=30005;//最高值
//            for(i=0; i<n; i++)
//            {
//                if(a[i]&&a[i]<high)
//                {
//                    high=a[i];
//                    a[i]=0;//标记已用值
//                    len--;
//                }
//            }
//        }
//        printf("%d\n",count);
//    }
//    return 0;
//}
//
///*
//in:
//8 389 207 155 300 299 170 158 65
//
//out:
//2
//
//*/



//#include<iostream>
//using namespace std;
//
//__int64 cnk(int n,int k)
//{
//    double sum;
//    if(n == 0 && k==0)
//        return 0;
//    if(k > n-k)
//        k = n-k;
//    sum = 1;
//    for(int i = 1; i <= k; i++)
//        sum *= (double)(n-k+i)/i*1.000000000001;//必需要乘
//    return (__int64)sum;
//}
//
//int main(void)
//{
//    int n,k;
//    while(cin>>n>>k)
//        cout<<(int)cnk(n,k)<<endl;
//    return 0;
//}





//#include<iostream>
//#include<cmath>
//using namespace std;
//const double pi=acos(-1.0);//NOTES:pi
//const double e=
//    2.71828182845904523536028747135266249775724709369995957;
//int main()
//{
//    long long n,tt;
//    cin>>tt;
//    while (tt--)
//    {
//        cin>>n;
//        long long ans=(long long)
//                      ((double)log10(sqrt(2*pi*n))+n*log10(n/e))+1;
//        cout<<ans<<endl;
//    }
//    return 0;
//}



//const int MAX=10000000;//求[2,MAX]间的素数
//bool isprime[MAX+1];
//int prime[MAX];//保存素数
////返回素数表元素总数
//int getprime()
//{
//    int i,j,pnum=0;
//    //memset(isprime,0,sizeof(isprime));
//    for(i=2; i<=MAX; i++)
//    {
//        if(!isprime[i])
//            prime[pnum++]=i;
//        for(j=0; j<pnum&&prime[j]*i<=MAX; j++)
//        {
//            isprime[prime[j]*i]=1;
//            if(i%prime[j]==0)
//                break;
//        }
//    }
//    return pnum;
//}



//#include<iostream>
//#include<cstdio>
//
//using namespace std;
//
//unsigned short in[50001],ste;/*用16位的ste保存16种状态*/
//
//unsigned short power[]=
//{1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768};
//
//int n,m,maxnum,i,j;
//
//void dfs(int s,int count)
//{
//    if(count>maxnum)maxnum=count;
//    for(i=s; i<m; i++)
//    {
//        if(!(ste&in[i])) /*如果相与为0，说明材料未被使用*/
//        {
//            ste=ste|in[i];
//            dfs(i+1,count+1);
//            ste=ste&(~in[i]);
//        }
//    }
//}
//
//int main()
//{
//    int tn,t;
//    while(scanf("%d%d",&n,&m)!=EOF)
//    {
//        if(n==0||m==0)
//        {
//            printf("0\n");
//            continue;
//        }
//        for(i=0; i<m; i++)
//        {
//            scanf("%d",&tn);
//            in[i]=0;
//            for(j=1; j<=tn; j++)
//            {
//                scanf("%d",&t);
//                /*材料编号降为从0开始，防止益处*/
//                in[i]=in[i]|power[t-1];
//            }
//        }
//        ste=0;
//        maxnum=0;
//        dfs(0,0);
//        printf("%d\n",maxnum);
//    }
//    return 0;
//}



//#include<iostream>
//#include<stack>
//#include<queue>
//
//using namespace std;
//
//int main()
//{
//    stack<int> s;
//    queue<int> q;
//    int a[]= {1,2,3,4};za
//    /*加入*/
//    for(int i=0; i<4; i++)
//    {
//        s.push(a[i]);
//        q.push(a[i]);
//    }
//    /*读取stack*/
//    cout<<"stack-size:"<<s.size()<<endl;
//    for(int i=0; i<4; i++)
//    {
//        cout<<s.top()<<" ";
//        s.pop();
//    }
//    cout<<endl<<"queue-size:"<<q.size()<<endl;
//    /*读取queue*/
//    cout<<"front:"<<q.front()<<"back:"<<q.back()<<endl;
//    for(int i=0; i<4; i++)
//    {
//        cout<<q.front()<<" ";
//        q.pop();
//    }
//    cout<<endl;
//    return 0;
//}



//#include<iostream>
//#include<map>
//#include<string>
//#include<iterator>
//using namespace std;
//int main()
//{
//    map<string,int>m;
//    map<string,int>::iterator p;
//    map<string,int>::reverse_iterator q;
//    m["bd"]=2;
//    m["ba"]=1;
//    m["aa"]=3;
//    m["bd"]=4;
//    //按从小到大遍历
//    for(p=m.begin(); p!=m.end(); p++) //注意不能使用p<m.end()
//    {
//        cout<<p->first<<" "<<p->second<<endl;
//    }
//    //按从大到小遍历
//    for(q=m.rbegin(); q!=m.rend(); q++)
//    {
//        cout<<q->first<<" "<<q->second<<endl;
//    }
//    m.erase(m.begin());
//    cout<<m.size()<<endl;
//    //清楚全部
//    m.clear();
//    cout<<m.empty()<<endl;
//    return 0;
//}



//#include<iostream>
//#include<cstring>
//#include<cstdio>
//
//#define M 26
//
//using namespace std;
//
//int ii;//只在Tree中使用
//
//struct Tree
//{
//    Tree* next[M];
//    int val;
//    Tree()
//    {
//        for(ii=0; ii<M; ii++)
//        {
//            next[ii]=0;
//        }
//        val=0;
//    }
//    ~Tree()
//    {
//        for(ii=0; ii<M; ii++)
//        {
//            delete(next[ii]);
//        }
//    }
//};
//
//int main()
//{
//    char word[20];
//    int len,i,j;
//    Tree* root=new Tree;
//    Tree* p;
//    //建立字典树过程
//    while(gets(word))
//    {
//        if(strcmp(word,"")==0)break;
//        len=strlen(word);
//        p=root;
//        for(i=0; i<len; i++)
//        {
//            j=word[i]-'a';
//            if(p->next[j]==0)
//            {
//                p->next[j]=new Tree;
//            }
//            p=p->next[j];
//            (p->val)++;
//        }
//        word[0]='\0';
//    }
//    while(scanf("%s",word)!=EOF)
//    {
//        len=strlen(word);
//        p=root;
//        for(i=0; i<len; i++)
//        {
//            j=word[i]-'a';
//            if(p->next[j]!=0)
//            {
//                p=p->next[j];
//            }
//            else break;
//        }
//        if(i==len)
//            printf("%d\n",p->val);
//        else
//            printf("0\n");
//    }
//    return 0;
//}
//
///*
//In:
//banana
//band
//bee
//absolute
//acm
//
//ba
//b
//band
//abc
//
//out:
//2
//3
//1
//0
//
//*/





//#include<iostream>
//#include<cstdio>
//#include<cstring>
//
//#define M 10001
//
//using namespace std;
//
//int s[M*100],t[M],next[M];
//
////得到next数组，下标均从1开始
//void getnext(int m)
//{
//    int i=1,j=0;
//    next[1]=0;
//    while(i<=m)
//    {
//        if(j==0||t[i]==t[j])
//        {
//            ++i;
//            ++j;
//            next[i]=j;
//        }
//        else j=next[j];
//    }
//}
//
////找不到则返回-1
//int kmp(int n,int m)
//{
//    int i=0,j=1;
//    getnext(m);
//    while(i<=n&&j<=m)
//    {
//        if(!j||s[i]==t[j])
//        {
//            ++i;
//            ++j;
//        }
//        else
//            j=next[j];
//    }
//    if(j>m)
//        return i-m;
//    else return -1;
//}
//
//int main()
//{
//    int test,m,n,i;
//
//    scanf("%d",&test);
//    while(test--)
//    {
//        scanf("%d %d",&n,&m);
//        //主串s,长度为n
//        for(i=1; i<=n; i++)
//            scanf("%d",&s[i]);
//        //横式串t,长度为m
//        for(i=1; i<=m; i++)
//            scanf("%d",&t[i]);
//        printf("%d\n",kmp(n,m));
//    }
//    return 0;
//}




//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<cstring>
//
//#define M 100001
//
//using namespace std;
//
//char message[M*2];
///*后缀数组*/
//int height[M*2];
//int _array[2][M*2];
//int _rank[2][M*2];
//int cnt[M*2];
//int *array, *rank, *narray, *nrank;
//
///*得到最长连续公共子序列长度*/
//int suffix(int len1,int len2,int len)
//{
//    int i,k;
//    memset(cnt,0,1024);
//
//    for(i=0; i<len; ++i)
//    {
//        ++cnt[message[i]];
//    }
//    for(i=1; i<= 'z'; ++i)
//    {
//        cnt[i]+=cnt[i-1];
//    }
//    array = _array[0];
//    rank = _rank[0];
//    for(i=len-1; i>=0; --i)
//    {
//        array[--cnt[message[i]]]=i;
//    }
//    rank[array[0]] = 0;
//
//    for(i=1; i<len; i++)
//    {
//        rank[array[i]]=rank[array[i-1]];
//        if(message[array[i]]!=message[array[i-1]])
//        {
//            rank[array[i]]++;
//        }
//    }
//    narray = _array[1];
//    nrank = _rank[1];
//    for(k=1; k<len&&rank[array[len-1]]<len-1; k<<=1)
//    {
//        for(i=0; i<len; ++i)
//        {
//            cnt[rank[array[i]]]=i+1;
//        }
//        for(i=len-1; i>=0; --i)
//        {
//            if(array[i] >= k)
//            {
//                // array[i]是当前的最大值，所以array[i] - k
//                //是其相同前缀中（rank相同）的最大值
//                narray[--cnt[rank[array[i]-k]]]=array[i]-k;
//            }
//        }
//        for(i=len-k; i<len; ++i)
//        {
//            //这些没有k后缀，所以他们是最后面的k个，他的位置已经比较出来
//            narray[--cnt[rank[i]]]=i;
//        }
//        nrank[narray[0]] = 0;
//        for (i=1; i<len; ++i)
//        {
//            nrank[narray[i]]=nrank[narray[i-1]];
//            if(rank[narray[i]]!= rank[narray[i-1]] ||
//                    rank[narray[i]+k]!=rank[narray[i-1]+k])
//            {
//                //如果前缀的排名不同，则++；如果前缀相同，但是后缀不同，也++
//                nrank[narray[i]]++;
//            }
//        }
//        swap(nrank, rank);
//        swap(narray, array);
//    }
//
//    int ret=0,hei;
//    for(i=1; i<len; ++i)
//    {
//        if(((array[i]<len1&&array[i-1]>=len1) ||
//                (array[i]>=len1&&array[i-1]<len1)))
//        {
//            hei = 0;
//            while(message[array[i]+ hei]==message[array[i-1]+hei])
//            {
//                hei++;
//            }
//            ret = max(ret, hei);
//        }
//    }
//    return ret;
//}
//
//int main()
//{
//    int len,len1,len2;
//    while(gets(message)!=NULL)
//    {
//        len1 = strlen(message);
//        gets(message + len1);
//        len2 = strlen(message+len1);
//        len = len1 + len2;
//        printf("%d\n",suffix(len1,len2,len));
//    }
//    return 0;
//}







//#include<cstdio>
//#include<iostream>
//#include<cstring>
//#include<string>
//
//using namespace std;
//
////返回两个字符串是否同构
////len为s1或S2的长度，s1与s2等长
////pos1与pos2为字符循环最小表示位置，从0开始
//bool CircularMatch(string s1, string s2, int len, int& pos1, int& pos2)
//{
//    int p1 = 0, p2 = 0, k, t1, t2;
//    pos1 = pos2 = -1;
//    while (1)
//    {
//        k = 0;
//        while (1)
//        {
//            t1 = (p1+k)%len;
//            t2 = (p2+k)%len;
//            if(s1[t1] > s2[t2])
//            {
//                p1 = p1+k+1;
//                if (p1 >= len) return false;
//                break;
//            }
//            else if (s1[t1] < s2[t2])
//            {
//                p2 = p2+k+1;
//                if (p2 >= len) return false;
//                break;
//            }
//            else k++;
//            if (k == len)
//            {
//                pos1 = p1;
//                pos2 = p2;
//                return true;
//            }
//        }
//    }
//}
//
////返回字符串循环最小表示的位置,从0开始
//int MinCircularDenote(string s, int len)
//{
//    int p1 = 0, p2 = 1, k, t1, t2;
//
//    while (1)
//    {
//        k = 0;
//        while (1)
//        {
//            t1 = (p1+k)%len;
//            t2 = (p2+k)%len;
//            if(s[t1] > s[t2])
//            {
//                if (p1+k+1 <= p2) p1 = p2+1;
//                else p1 = p1+k+1;
//                if (p1 >= len) return p2;
//                break;
//            }
//            else if (s[t1] < s[t2])
//            {
//                if (p2+k+1 <= p1) p2 = p1+1;
//                else p2 = p2+k+1;
//                if (p2 >= len) return p1;
//                break;
//            }
//            else k++;
//            if (k == len)
//                return (p1<p2 ? p1 : p2);
//        }
//    }
//}
//
////返回字符串循环最大表示的位置,从0开始
//int MaxCircularDenote(string str,int len)
//{
//    int p1 = 0, p2 = 1, k, t1, t2;
//
//    while (1)
//    {
//        k = 0;
//        while (1)
//        {
//            t1 = (p1+k)%len;
//            t2 = (p2+k)%len;
//            if(str[t1] < str[t2])
//            {
//                if (p1+k+1 <= p2) p1 = p2+1;
//                else p1 = p1+k+1;
//
//                if (p1 >= len) return p2;
//                break;
//            }
//            else if (str[t1] > str[t2])
//            {
//                if (p2+k+1 <= p1) p2 = p1+1;
//                else p2 = p2+k+1;
//
//                if (p2 >= len) return p1;
//                break;
//            }
//            else k++;
//            if (k == len)
//                return (p1<p2 ? p1 : p2);
//        }
//    }
//}
//
//int main()
//{
//    string s1,s2;
//    int pos1,pos2,len;
//    while(cin>>s1>>s2)
//    {
//        len=s1.length();
//        cout<<MinCircularDenote(s1,len)<<endl;
//        cout<<MaxCircularDenote(s1,len)<<endl;
//        s1+=s1;//字符串加倍
//        s2+=s2;
//        cout<<CircularMatch(s1,s2,len, pos1,pos2)<<endl;
//        cout<<pos1<<endl<<pos2<<endl;
//    }
//    return 0;
//}






//#include<cstdio>
//#include<iostream>
//#include<cstring>
//#include<algorithm>
//
//#define M 27
//
//using namespace std;
//
//char line[100001];
//int tree[M],tmp[M];//保存权值
//
//int cmp(int a,int b)
//{
//    return a>b;
//}
//
////对序号为index统计长度
//int huffman(int n,int index)
//{
//    if(n==1)return 1;//一个点时返回1
//    int i,j,count,max,len,t;
//    for(i=0; i<n; i++)
//    {
//        tmp[i]=tree[i];
//    }
//    count=max=n-1;
//    len=0;
//    while(count--)
//    {
//        if(index==max||index==max-1)
//        {
//            len++;
//            index=max-1;
//        }
//        tmp[max-1]+=tmp[max];
//        j=--max;
//        while(j>0&&tmp[j]>tmp[j-1])
//        {
//            t=tmp[j];
//            tmp[j]=tmp[j-1];
//            tmp[j-1]=t;
//            if(index==j)
//            {
//                index--;
//            }
//            else if(index==j-1)
//            {
//                index++;
//            }
//            j--;
//        }
//    }
//    return len;
//}
//
//int main()
//{
//    int i,j,len,sum,n;
//    int ch[M];
//    while(gets(line)!=NULL)
//    {
//        if(strcmp(line,"END")==0)break;
//        len=strlen(line);
//        memset(ch,0,sizeof(ch));
//        for(i=0; i<len; i++)
//        {
//            if(line[i]=='_')
//            {
//                ch[0]++;
//            }
//            else ch[line[i]-'A'+1]++;
//        }
//        //权值压缩到tree[]数组中
//        for(j=0,i=0; i<M; i++)
//        {
//            if(ch[i])
//            {
//                tree[j++]=ch[i];
//            }
//        }
//        n=j;
//        sort(tree,tree+n,cmp);
//        for(sum=0,i=0; i<n; i++)
//        {
//            sum+=tree[i]*huffman(n,i);
//        }
//        printf("%d %d %.1lf\n",len*8,sum,len*8.0/(sum*1.0));
//    }
//    return 0;
//}
//
///*
//http://acm.hdu.edu.cn/showproblem.php?pid=1053
//in:
//AAAAABCD
//THE_CAT_IN_THE_HAT
//END
//
//out:
//64 13 4.9
//144 51 2.8
//
//*/



//
//#include<cstdio>
//#include<cstdlib>
//
//using namespace std;
//
//void adjust(int a[],int s,int len)
//{
//    int t,i;
//    t=a[s];
//    for(i=s*2; i<len; i*=2)
//    {
//        if(i<(len-1)&&a[i]<a[i+1])i++;
//        if(t>=a[i])break;
//        a[s]=a[i];
//        s=i;
//    }
//    a[s]=t;
//}
//
//void sort(int a[],int len)
//{
//    int i,t;
//    for(i=(len-1)/2; i>=0; i--)
//    {
//        adjust(a,i,len);
//    }
//    for(i=len-1; i>1; i--)
//    {
//        t=a[i];
//        a[i]=a[0];
//        a[0]=t;
//        adjust(a,0,i-1);
//    }
//    if(a[0]>a[1])
//    {
//        t=a[0];
//        a[0]=a[1];
//        a[1]=t;
//    }
//}
//
//int main()
//{
//    int a[1000],i,n;
//    scanf("%d",&n);
//    //for(i=0;i<n;i++)
//    //	scanf("%d",a+i);
//    for(i=0; i<n; i++)
//        a[i]=rand()%10000;
//    sort(a,n);
//    for(i=0; i<n; i++)
//        printf("%d ",a[i]);
//    printf("\n");
//    return 0;
//}
////2 38 4 99 10 2 22 1 -43 22 33 91 78 33





//#include <iostream>
//#include <cstdio>
//
//#define INT_MAX 0X3F3F3F3F
//#define INT_MIN -0X3F3F3F3F
//#define N 8003
//#define NoCol -1
//#define MulCol -2
//
//using namespace std;
//
//struct SegTree
//{
//    int l,r,c;
//} st[N*4]; //一般大小开成节点数的4倍，不需要担心空间问题
//
//int seg[N],col[N];
//int n,sat,end;
//
////创建线段树
//void segTreeCre(int l,int r,int i=1)
//{
//    int mid;
//    st[i].l=l;
//    st[i].r=r;
//    st[i].c=NoCol;
//    if(l==r)
//    {
//        return;
//    }
//    mid=(l+r)/2;
//    segTreeCre(l,mid,2*i);//左儿子
//    segTreeCre(mid+1,r,2*i+1);//右儿子
//    return;
//}
//
//void segTreeIns(int l,int r,int c,int i=1)
//{
//    int mid;
//    //如果当前线段颜色和要插入的子段颜色相同
//    if(st[i].c==c)
//    {
//        return;
//    }
//    //当前段即是要插入颜色的段
//    if(l==st[i].l && r==st[i].r)
//    {
//        st[i].c=c;
//        return;
//    }
//    //如果当前段没有多种颜色
//    if(st[i].c!=MulCol)
//    {
//        st[i*2].c=st[i].c;
//        st[2*i+1].c=st[i].c;
//    }
//    st[i].c=MulCol;
//    //中间值是当前节点左右两值的中间值！
//    mid=(st[i].l+st[i].r)/2;
//    if(r<=mid)
//    {
//        segTreeIns(l,r,c,i*2);//左
//    }
//    else if(l>mid)
//    {
//        segTreeIns(l,r,c,i*2+1);//右
//    }
//    else
//    {
//        segTreeIns(l,mid,c,i*2);
//        segTreeIns(mid+1,r,c,2*i+1);
//    }
//    return;
//}
//
////计算l到r中的颜色，并存到seg中
//void segTreeCal(int l,int r,int i=1)
//{
//    int mid;
//    if(st[i].c==NoCol)
//    {
//        return;
//    }
//    if(st[i].c!=MulCol)
//    {
//        fill(seg+l,seg+r+1,st[i].c);
//        return;
//    }
//    mid=(st[i].l+st[i].r)/2;
//    if(r<=mid)
//    {
//        segTreeCal(l,r,i*2);//计算左子树
//    }
//    else if(l>mid)
//    {
//        segTreeCal(l,r,i*2+1);//计算右子树
//    }
//    else
//    {
//        segTreeCal(l,mid,i*2);//计算左子树
//        segTreeCal(mid+1,r,i*2+1);//计算右子树
//    }
//    return;
//}
//
//void proc(int x1,int x2,int c)
//{
//    segTreeIns(x1,x2,c);
//    return;
//}
//
//int main()
//{
//    int i;
//    int x1,x2,c;
//    int nowc;
//
//    while(scanf("%d",&n)!=EOF)
//    {
//        fill(seg,seg+N,NoCol);
//        fill(col,col+N,0);
//        sat=INT_MAX;
//        end=INT_MIN;
//        segTreeCre(0,8000);
//
//        for(i=0; i<n; i++)
//        {
//            scanf("%d%d%d",&x1,&x2,&c);
//            x1++;//奇怪的题意，干脆自增1
//            sat=(sat<x1)?sat:x1;
//            end=(end>x2)?end:x2;
//            proc(x1,x2,c);
//        }
//
//        segTreeCal(sat,end);
//        //从seg中计算颜色的段数
//        nowc=NoCol;
//        for(i=sat; i<=end; i++)
//        {
//            if(nowc!=seg[i])
//            {
//                if(nowc!=NoCol)
//                {
//                    col[nowc]++;
//                }
//                nowc=seg[i];
//            }
//        }
//        if(nowc!=NoCol)
//        {
//            col[nowc]++;
//        }
//
//        for(i=0; i<N; i++)
//        {
//            if(col[i]!=0)
//            {
//                printf("%d %d\n",i,col[i]);
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
///*
//http://acm.zju.edu.cn/onlinejudge/showProblem.do?problemCode=1610
//in:
//5
//0 4 4
//0 3 1
//3 4 2
//0 2 2
//0 2 3
//
//out:
//1 1
//2 1
//3 1
//
//*/



//
//
//
//#include <iostream>
//#include <stdio.h>
//#include <string.h>
//
//using namespace std;
//
//int numpack[60000],N;
//int c[60000][11][11];  //第二维为k,第三维为mod
//
//
//
//int lowbit(int x)
//{
//    return x&(-x);
//}
//
//void update_addnum(int pos,int delta,int mod,int k)  //修改成三维的
//{
//    for(int i=pos;i>0;i-=lowbit(i))
//    {
//        c[i][k][mod]+=delta;
//    }
//}
//
//void update_subnum(int pos,int delta,int mod,int k)  //修改成三维的
//{
//    for(int i=pos;i>0;i-=lowbit(i))
//    {
//        c[i][k][mod]-=delta;
//    }
//}
//
//
//int find_add(int x)
//{
//    int a=x;
//    int result=0;
//    for(int i=x;i<=N;i+=lowbit(i))
//    {
//        for(int j=1;j<=10;j++)
//        {
//            result+=c[i][j][a%j];      //把第二维遍历一遍
//        }
//    }
//    return result;
//}
//
//int main()
//{
//
//    while(scanf("%d",&N)!=EOF)
//    {
//        memset(numpack,0,sizeof(numpack));
//        memset(c,0,sizeof(c));
//        for(int i=1;i<=N;i++)
//        {
//            scanf("%d",&numpack[i]);
//        }
//
//        int opernum,oper,a,b,c,k;
//
//        scanf("%d",&opernum);
//        while(opernum--)
//        {
//            scanf("%d",&oper);
//            if(oper==1)
//            {
//                scanf("%d%d%d%d",&a,&b,&k,&c);
//                update_addnum(b,c,a%k,k);
//                update_subnum(a-1,c,a%k,k);
//
//            }
//
//            if(oper==2)
//            {
//                for (int i = 1; i <= N; ++ i)
//                {
//                    int res=numpack[i]+find_add(i);//更新值加原始值
//                    printf("%d ",res);
//                }
//                printf("\n");
////                int idx;
////                scanf("%d",&idx);
////                int res=numpack[idx]+find_add(idx);//更新值加原始值
////                printf("%d\n",res);
//            }
//
//
//        }
//
//
//
//    }
//
//    return 0;
//}


//
//#include <iostream>
//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//#define MAX 10
//#define NAME 10
//using namespace std;
//typedef char ch[NAME];
//int main(void)
//{
//    ch st[MAX];
//    int i, m;
//    while (cin >> m)
//    {
//        for (i = 0; i < m; ++ i)
//            cin >> st[i];
//        for (i = 0; i < m; ++ i)
//            cout << st[i]<< (i + 1 == m ? " \n" : " ");
//
//    }
//    return 0;
//}
//
//
//
//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <windows.h>
//
//using namespace std;
//
//int main(int argc, char * argv[])
//{
//    char sss[100] = "D:a\b\c\Hello.java";
//    char filename[254];
//    char java[254] = "java ";
//    char javac[254] = "javac ";
//    int k = 0;
//    for (int i = strlen(java)-1; '//' != sss[i]; -- i)
//    {
//        filename[k++] = sss[i];
//    }
//    int len = strlen(filename);
//    for(int i = 0; i < (len/2); i ++)
//    {
//        filename[i]^=filename[len-i-1]^=filename[i]^=filename[len-i-1];
//    }
//    java[strlen(java)-5] = '\0';
//    puts(filename);
//    //system(javac);
//    //system(java);
//    getchar();
//    return 0;
//}


//
//#include <iostream>
//using namespace std;
//long long int tbl[36][36];
//long long int get(int n, int h)
//{
//    long long int &ans = tbl[n][h];
//    if (ans == -1)
//    {
//        ans = 0;
//        if (n == 0) ans = 1;
//        else if(h == 0)
//            ans = 0;
//        else
//            for(int j = 0; j <= n-1; ++j)
//                ans += get(j, h-1) * get(n-1-j, h-1);
//    }
//    return ans;
//}
//int main(void)
//{
//    int n,h = 1;
//    while (cin >> n)
//    {
//        for (int i = 0; i <= n; ++i)
//            fill_n(tbl[i], 36, -1);
//        cout << (get(n, n) - get(n, h-1))%20000003 << endl;
//    }
//    return 0;
//}
//


//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int a = 5;
//    if (2<a/2)
//        cout << "1" << endl;
//    else
//        cout << "0" << endl;
//}




//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//void stringFilter(const char *pInputStr, long lInputLen, char *pOutputStr);
//void stringZip(const char *pInputStr, long lInputLen, char *pOutputStr);
//int main() {
//    char pInputStr[1001];
//    char pOutputStr[1001];
//    while(cin>>pInputStr) {
//        stringZip(pInputStr,strlen(pInputStr),pOutputStr);
//        cout<<pOutputStr<<endl;
//    }
//    return 0;
//}
//void stringFilter(const char *pInputStr, long lInputLen, char *pOutputStr) {
//    bool apper[26];
//    memset(apper,true,sizeof(apper));
//    for(long i=0; i<lInputLen; ++i) {
//        if(apper[*(pInputStr+i)-'a']) {
//            *(pOutputStr++)=*(pInputStr+i);
//            apper[*(pInputStr+i)-'a']=false;
//        }
//    }
//    *pOutputStr='\0';
//}
//void stringZip(const char *pInputStr, long lInputLen, char *pOutputStr) {
//    char tempChar=*pInputStr;
//    long charNumber=0;
//    for(long i=1; i<lInputLen; ++i) {
//        if(tempChar!=*(pInputStr+i)) {
//            if(0!=charNumber) {
//                char *tempLen;
//                sprintf(tempLen,"%ld",charNumber+1);
//                while(*tempLen) *(pOutputStr++)=*tempLen++;
//            }
//            *(pOutputStr++)=tempChar;
//            tempChar=*(pInputStr+i);
//            charNumber=0;
//        } else {
//            charNumber++;
//        }
//    }
//    if(0!=charNumber) {
//        char *tempLen;
//        sprintf(tempLen,"%ld",charNumber+1);
//        while(*tempLen) *(pOutputStr++)=*tempLen++;
//    }
//    *(pOutputStr++)=tempChar;
//    *pOutputStr='\0';
//}

//#include <cstdio>
//#include <iostream>
//#include <cstring>
//using namespace std;
//int vane_strcmp(char str1[],char str2[]) {
//    int i=0;
//    while(str1[i]&&str2[i]) {
//        if(str1[i]>str2[i]) return 1;
//        if(str1[i]<str2[i]) return -1;
//        i++;
//    }
//    if(str1[i]) return 1;
//    if(str2[i]) return -1;
//    return 0;
//}
//int main() {
//    char str1[10],str2[10];
//    while(cin>>str1>>str2) {
//        cout<<strcmp(str1,str2)<<endl;
//    }
//    return 0;
//}



//#include <iostream>
//#include <cstring>
//#include <cstdio>
//using namespace std;
//struct POINT {
//    double x,y;
//};
//double det(double x1,double y1,double x2,double y2) {
//    return (x1*y2-x2*y1);
//}
//double cross(double x,double y,double x1,double y1,double x2,double y2, int i) {
//    return det(x1-x,y1-y,x2-x,y2-y);
//}
//
//double cross(double x,double y,double x1,double y1,double x2,double y2) {
//    return ((x1-x)*(y1-y)-(x2-x)*(y2-y));
//}
//
//double cross(POINT p, POINT p1, POINT p2) {
//    return (p1.x-p.x)*(p2.y-p.y)-(p2.x-p.x)*(p1.y-p.y);
//}
//int main()
//{
//    POINT p, p1, p2;
//    while (cin >> p.x >> p.y >> p1.x >> p1.y >> p2.x >> p2.y) {
//        cout << cross(p,p1,p2) << endl;
//        //cout << cross(p.x,p.y,p1.x,p1.y,p2.x,p2.y,1) << endl;
//    }
//    return 0;
//}

//#include<stdio.h>
//#include<math.h>
//#define PI acos(-1)
//int main()
//{
//    int i;
//    double m,n,x,p,a;
//    while(scanf("%lf",&x) != EOF)
//    {
//        n = m = PI*x/180;
//        a = i = 1;
//        p = 0;
//        while(fabs(m/a)>=1e-6)
//        {
//            p+=m/a;
//            m*=-n*n;
//            a*=++i;
//            a*=++i;
//        }
//        printf("vane_sin(%lf)=%lf\n",x,p);
//        printf("syse_sin(%lf)=%lf\n",x,sin(n));
//    }
//    return 0;
//}


//
//void getout(struct children * first ,int w,int s,int N) {
//    int count=0 ;                                          //count用来代表每一轮报数的数字
//    int tempN=N-1;
//    struct children * work,*temp;
//    work=first;
//    temp=work;
//    while(N-->0) {                //用while()实现N次出圈
//        if(N==tempN)
//            while(count!=w) {                //第一次开始报数，找到起始的w位置
//                if(work->next=first)          //当遇到头结点是，跳过
//                    work=work->next;
//                work=work->next;
//                count ++;
//            }
//        count=1;
//        while(count!=s) {              //到报数到s的位置
//            if(work->next=first)               //当遇到头结点是，跳过
//                work=work->next;
//            work=work->next;
//            count++;
//        }
//        puts(work->name);            //输出报数到s的人名
//        putchar(10);
//    }
//}
//
//int main() {
//
//    return 0;
//}




//#include<stdio.h>
//struct {
//    int year;
//    int month;
//    int day;
//} date;
//int main() {
//    int days=0,i;
//    int daysOfMonth[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
//    printf("input year,month,day: ");
//    scanf("%d,%d,%d",&date.year,&date.month,&date.day);
//    for(i=1; i<date.month;i++) {
//        days+=daysOfMonth[i];
//    }
//    if((date.year%4==0&&date.year%100!=0||date.year%400==0)&&date.month>=3) days++;
//    printf("%d/%d is the %dth day in %d.\n",date.month,date.day,days,date.year);
//    return 0;
//}

//
//
//
//#include<cstdio>
//int main() {
//    int num[18];
//    while(scanf("%1d",%num[0]),num[0]) {
//        int s=num[0];
//        for(int i=1;i<17;i++) {
//            scanf("%1d",&num[i]);
//            s+=num[i]*(i+1);
//        }
//
//    }
//    return 0;
//}

//
//
//#include<cstdio>
//int n;
//int gcd(int a,int b) {
//    n++;
//    printf("递归调用第%d次:\n",n);
//    printf("a = %d\n",a);
//    printf("b = %d\n",b);
//    if(0==b) {
//        return a;
//    }
//    gcd(b,a%b);
//}
//int main() {
//    int a,b;
//    while(scanf("%d%d",&a,&b),a) {
//        n=0;
//        printf("%d和%d的最大公约数是%d!\n",a,b,gcd(a,b));
//        printf("函数调用了%d次!\n",n);
//    }
//    return 0;
//}
//
//

///**
//面试的时候，被问到的一个问题：
//char c;
//char *p1=&c;
//char *p2 = (char *)malloc(4*sizeof(char));
//如何编写代码区分p1是指向栈，p2是指向堆？
//*/
//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//int main() {
//    char c='a';
//    char *p1=&c;
//    char *p2 = (char *)malloc(4*sizeof(char));
//
//    char c1;
//    char *p3=&c1;
//    char *p4=(char *)malloc(4*sizeof(char));
//
//    printf("%d %d\n",p1,p3);
//    printf("%d %d\n",p2,p4);
//}

//
//
//
//#include<iostream>
//using namespace std;
//template<typename T>
//
//T Max(T a,T b) {
//    return a>b?a:b;
//}
//int main() {
//    char c1,c2;
//    int a,b;
//    double c,d;
//    while(cin>>a>>b>>c>>d>>c1>>c2) {
//        cout<<Max(a,b)<<endl;
//        cout<<Max(c,d)<<endl;
//        cout<<Max(c1,c2)<<endl;
//    }
//    return 0;
//}

//
//#include<iostream>
//#include<algorithm>
//#include<time.h>
//#include<stdio.h>
//using namespace std;
//int n;
//int m;
//int k[100000001];
//int kk[100000001];
//bool binary_Search(int x) {
//    int l=0,r=n;
//    while(l<r) {
//        int mind=(l+r)/2;
//        if(k[mind]==x) return true;
//        else if(k[mind]<x) l=mind+1;
//        else r=mind;
//    }
//    return false;
//}
//bool binary_Search1(int x) //3
//{
//    int l=0,r=n*n;     // 1 2 2 3
//    while(l<r)
//    {
//        int mind=(l+r)/2;
//        if(kk[mind]==x) return true;
//        else if(kk[mind]<x) l=mind+1;
//        else r=mind;
//    }
//    return false;
//}
//
//int main() {
//    //while(true) {
//        cin>>n;
//        cin>>m;
//        int flag=false;
//        for(int i=0; i<n; i++)
//            cin>>k[i];
//        cout<<"方法一："<<endl;
//        clock_t t = clock();
//        for(int a=0; a<n; a++)
//            for(int b=0; b<n; b++)
//                for(int c=0; c<n; c++)
//                    for(int d=0; d<n; d++)
//                        if(m==k[a]+k[b]+k[c]+k[d])
//                            flag=true;
//        printf("Time: %f\n", 1.0 * (clock() - t) / CLOCKS_PER_SEC);
//        if(flag)
//            cout<<"YES"<<endl;
//        else
//            cout<<"NO"<<endl;
//        flag=false;
//        cout<<"方法二："<<endl;
//        t = clock();
//        sort(k,k+n);
//        for(int a=0; a<n; a++)
//            for(int b=0; b<n; b++)
//                for(int c=0; c<n; c++)
//                    if(binary_Search(m-k[a]-k[b]-k[c]))
//                        flag=true;
//        printf("Time: %f\n", 1.0 * (clock() - t) / CLOCKS_PER_SEC);
//        if(flag)
//            cout<<"YES"<<endl;
//        else
//            cout<<"NO"<<endl;
//    flag=false;
//      cout<<"方法3: "<<endl;
//      t = clock();
// for(int c=0; c<n; c++)
//        for(int d=0; d<n; d++)
//        {
//            kk[c*n+d]=k[c]+k[d];
//        }
//    sort(kk,kk+n*n);
//    for(int a=0; a<n; a++)
//        for(int b=0; b<n; b++)
//        {
//            if(binary_Search1(m-k[a]-k[b]))  //m-1-3=6
//                flag=true;
//        }
//printf("Time: %f\n", 1.0 * (clock() - t) / CLOCKS_PER_SEC);
//        if(flag)
//            cout<<"YES"<<endl;
//        else
//            cout<<"NO"<<endl;
//
//}
///**
//测试数据：
//200
//88
//68 85 40 78 87 55 13 88 99 49 51 3 51 2 90 83 24 43 40 37 37 21 71 25 15 41 53 58 2 13 18 27 87 72 98 36 23 88 79 34 66 71 81 54 96 44 28 49 6 70 58 0 44 49 86 86 85 75 96 6 63 90 58 85 81 37 74 41 95 76 8 15 25 64 43 38 63 70 59 24 3 83 58 9 99 28 91 93 60 34 18 35 11 88 98 84 39 72 59 36 32 0 12 11 38 10 24 86 9 34 51 21 3 42 43 12 18 70 4 89 85 57 1 33 9 7 63 48 80 45 35 6 68 6 47 23 92 68 61 75 5 18 48 11 23 27 71 67 62 87 43 68 91 64 11 59 65 48 46 62 17 76 68 11 89 40 33 43 68 49 14 17 95 72 57 19 38 66 84 99 34 59 33 18 42 54 97 50 99 73 73 30 57 1 11 82 18 81 29 54 45 15 63 3 7 79 28 64 89 67 11 47 19 30 2 84 30 49 34 13 76 83 76 15 36 36 36 27 64 68 96 29 27 73 40 93 46 18 75 87 7 22 68 53 7 41 46 2 8 12 80 33 39 6 25 37 18 49 71 92 42 15 34 31 83 15 60 24 92 35 87 87 20 39 27 1 72 2 96 63 91 27 13 33 77 7 22 74 28 21 60 66 44 93 75 81 71 13 65 76 71 77 52 89 52 75 39 84 34 18 57 83 20 26 31 10 84 44 13 28 21 82 2 44 47 78 27 59 18 91 45 32 21 52 62 37 20 68 49 2 84 66 1 4 66 22 52 35 42 79 4 91 45 82 14 96 97 74 93 0 73 22 9 17 61 72 48 70 71 40 86 58 29 80 72 23 93 9 12 22 39 38 43 12 9 79 72 62 29 53 55 96 82 88 56 62 16 45 7 17 9 93 63 1 56 2 46 95 29 32 37 88 5 79 16 98 84 19 64 63 44 19 91 64 20 94 72 76 92 79 43 29 7 13 83 50 58 99 6 98 63 87 37 63 90 92 10 14 38 96 2 55 64 8 50 80 23 61 59 71 8 47 60 15 92 2 33 2 13 74 6 36 78 15 10 11 45 67 80 48 96 20 17 1 52 89 56 75 20 51 6 2 57 19 66 74 56 10 88 56 5 29 32 2 82 42 70 75 75 91 87 43 49 14 94 9 48 28 60 70 70 18 25 29 81 36 40 67 87 36 41 57 64 95 9 48 52 74 90 4 91 88 59 4 13 85 38 93 73 58 59 44 93 56 44 57 31 35 32 6 98 28 40 89 32 40 33 81 51 2 57 86 17 74 32 90 1 23 70 71 58 44 50 70 38 51 15 94 35 82 88 62 33 82 53 39 96 28 99 66 11 29 17 84 90 69 5 86 51 67 69 71 79 52 63 40 80 94 5 91 38 15 33 0 94 14 32 8 89 23 77 94 89 45 96 70 20 57 20 32 34 69 66 62 89 76 66 5 23 0 71 37 23 64 55 39 15 48 16 99 85 53 69 42 68 17 79 53 70 54 51 59 43 33 40 51 87 47 1 74 35 63 89 0 22 99 49 88 55 32 34 93 7 14 16 17 96 33 66 21 73 44 11 91 72 11 32 56 17 24 74 14 41 26 55 15 44 82 12 50 70 22 98 41 52 66 62 12 13 92 81 97 79 39 79 41 72 4 62 98 68 69 31 46 65 81 49 62 7 79 77 82 77 30 8 4 34 70 54 47 24 12 32 82 79 56 77 45 91 26 74 43 71 5 22 53 89 68 6 30 14 85 82 67 87 44 48 17 40 16 74 61 24 92 46 83 77 69 23 98 70 78 95 95 38 60 28 4 59 79 16 11 70 96 64 79 73 73 57 21 2 61 8 91 42 13 4 13 26 59 79 85 48 41 43 33 93 54 72 62 14 18 85 72 1 4 66 11 1 3 29 0 69 62 45 92 29 37 10 28 81 3 35 13 21 9 52 42 37 79 80 12 54 41 10 58 70 37 2 21 69 7 42 73 60 41 13 13 1 45 16 23 18 43 56 51 50 63 11 82 13 87 42 98 12 85 34 48 22 87 86 21 1 38 93 41 47 20 40 57 34 97 98 67 86 53 77 23 90 32 28 88 82 34 91 19 75 68 63 67 47 46 39 10 79 99 33 71 7 18 89 21 69 38 47 71 12 76 36 72 89 91 30 64 75 72 95 0 32 91 47 79 12 34 81 49 21 73 36 76 31 86 66 25 69 94 12 52 36 47 3 7 60 99 99 64 8 53 22 88
//
//*/


/////数独
//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//#include<string>
//#include<queue>
//#include<algorithm>
//#include<map>
//#include<iomanip>
//#include<time.h>
//#define INF 99999999
//using namespace std;
//
//const int MAX=10;
//char map_[MAX][MAX];
//int pos[MAX*9][2];//存储是问号点的坐标，方便搜索时只需要搜索这些点填什么数字.
//bool row[MAX][MAX],list[MAX][MAX];//用来标明哪行哪列出现过什么数.
//int k;
//
//bool check(int v,int num){
//    int n=pos[v][0]/3*3;//搜索周围9小格的行的开始搜索位置.
//    int m=pos[v][1]/3*3;//搜索周围9小格的列的开始搜索位置.
//    for(int i=n;i<n+3;++i){
//        for(int j=m;j<m+3;++j){
//            if(map_[i][j] == num+'0')return false;
//        }
//    }
//    return true;
//}
//
//bool DFS(int v){
//    if(v == k){return true;}//代表前面已经把所有的点都搜索完了.
//    for(int i=1;i<10;++i){
//        if(!row[pos[v][0]][i] && !list[pos[v][1]][i] && check(v,i)){
//            map_[pos[v][0]][pos[v][1]]=i+'0';
//            row[pos[v][0]][i]=true;
//            list[pos[v][1]][i]=true;
//            if(DFS(v+1)){return true;}
//            map_[pos[v][0]][pos[v][1]]='?';
//            row[pos[v][0]][i]=false;
//            list[pos[v][1]][i]=false;
//        }
//    }
//    return false;
//}
//
//void output(){
//    for(int i=0;i<9;++i){
//        cout<<map_[i][0];
//        for(int j=1;j<9;++j){
//            cout<<' '<<map_[i][j];
//        }
//        cout<<endl;
//    }
//    return;
//}
//
//int main(){
// int num=0;
//    while(1){
//     k=0;
//     memset(row,false,sizeof row);
//     memset(list,false,sizeof list);
//     for(int i=0;i<9;++i){
//          for(int j=0;j<9;++j){
//              if(!(cin>>map_[i][j]))exit(0);
//              if(map_[i][j] == '?'){pos[k][0]=i;pos[k++][1]=j;continue;}
//              row[i][map_[i][j]-'0']=true;
//              list[j][map_[i][j]-'0']=true;
//            }
//        }
//
//     clock_t start = clock();
//     DFS(0);//开始搜索第1个是问号的点.
//     clock_t ends = clock();
//     if(num++)cout<<endl;
//     cout<<endl;
//     output();
//    cout<<"解算用时: "<<1.0*(ends-start)/CLOCKS_PER_SEC<<"秒"<<endl<<endl;
//    }
//    return 0;
//}
///**
//? ? 1 ? ? ? 6 ? ?
//? 5 9 ? ? 2 ? ? ?
//4 ? ? ? ? 6 ? ? 2
//? ? ? 8 7 ? ? 1 ?
//2 ? ? ? 9 ? ? ? 7
//? 4 ? ? 5 3 ? ? ?
//8 ? ? 5 ? ? ? ? 6
//? ? ? 1 ? ? 7 9 ?
//? ? 4 ? ? ? 5 ? ?
//
//? ? ? ? 1 ? ? 5 4
//8 ? ? ? ? ? ? ? ?
//? ? ? ? ? ? ? ? ?
//6 5 ? 4 ? ? ? ? ?
//? ? ? ? ? 2 7 3 ?
//? ? ? ? ? ? ? ? ?
//2 1 ? ? ? ? 8 ? ?
//7 ? ? ? ? ? 3 ? ?
//? ? ? 3 5 ? ? ? ?
//
//8 ? ? ? ? ? ? ? ?
//? ? 3 6 ? ? ? ? ?
//? 7 ? ? 9 ? 2 ? ?
//? 5 ? ? ? 7 ? ? ?
//? ? ? ? 4 5 7 ? ?
//? ? ? 1 ? ? ? 3 ?
//? ? 1 ? ? ? ? 6 8
//? ? 8 5 ? ? ? 1 ?
//? 9 ? ? ? ? 4 ? ?
//
//
//*/





//#include<iostream>
//#define MAX_N 100
//#define MAX_M 100
//using namespace std;
//char Map[MAX_N][MAX_M];
//int n,m;
//void DFS(int x,int y) {
//    Map[x][y]='.';
//    for(int dx=-1; dx<=1; dx++)
//        for(int dy=-1; dy<=1; dy++) {
//            int nx=x+dx;
//            int ny=y+dy;
//            if(0<=nx && nx<=n && 0<=ny && ny<=m && Map[nx][ny]=='W')
//                DFS(nx,ny);
//        }
//}
//int main() {
//    cin>>n;
//    cin>>m;
//    int res=0;
//    for(int i=0; i<n; i++)
//        for(int j=0; j<m; j++)
//            cin>>Map[i][j];
//    for(int i=0; i<n; i++)
//        for(int j=0; j<m; j++)
//            if(Map[i][j]=='W') {
//                DFS(i,j);
//                res++;
//            }
//    cout<<res<<endl;
//}
///**
//测试数据：
//3 6
//......
//.W..W.
//......
//
//10 12
//W........WW.
//.WWW.....WWW
//....WW...WW.
//.........WW.
//.........W..
//..W......W..
//.W.W.....WW.
//W.W.W.....W.
//.W.W......W.
//..W.......W.
//
//*/




//
//
//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#define MAX_N 100
//#define MAX_M 100
//using namespace std;
//int Map[MAX_N][MAX_M];
//int startI,startJ;
//int endI,endJ;
//int success=0;
//
//int visit(int i,int j)
//{
//    Map[i][j]=1;
//    if(i==endI&&j==endJ)    success=1;
//    if(success!=1&&Map[i][j+1]==0) visit(i,j+1);
//    if(success!=1&&Map[i+1][j]==0) visit(i+1,j);
//    if(success!=1&&Map[i][j-1]==0) visit(i,j-1);
//    if(success!=1&&Map[i-1][j]==0) visit(i-1,j);
//    if(success!=1)
//        Map[i][j]=0;
//    return success;
//}
//int main()
//{
//    int n,m;
//    cin>>n;
//    cin>>m;
//    for(int i=0; i<n; i++)
//        for(int j=0; j<m; j++)
//            cin>>Map[i][j];
//    startI=1,startJ=1;
//    endI=5,endI=5;
//    cout<<"显示地图："<<endl;
//    for(int i=0; i<n; i++)
//    {
//        for(int j=0; j<m; j++)
//        {
//            if(Map[i][j]==2)
//                printf("█");
//            else
//                printf("  ");
//        }
//        printf("n");
//    }
//    if(visit(startI,startJ)==0)
//        cout<<"无解"<<endl;
//    else
//    {
//        cout<<"显示路径："<<endl;
//        for(int i=0; i<n; i++)
//        {
//            for(int j=0; j<m; j++)
//            {
//                if(Map[i][j]==2)
//                    printf("█");
//                else if(Map[i][j]==1)
//                    printf("◇");
//                else
//                    printf("  ");
//            }
//            printf("n");
//    }
//    }
//}





//#include<stdio.h>
//#include<math.h>
//int main() {
//    double x1,x2,y1,y2,s,l;
//    while(scanf("%lf%lf%lf%lf",&x1,&x2,&y1,&y2)!=EOF) {
//        s=fabs(x1-x2)*fabs(x1-x2)+fabs(y1-y2)*fabs(y1-y2);
//        l=sqrt(s);
//        printf("%.2lf\n",l);
//    }
//    return 0;
//}


//#include<cstdio>
//int main() {
//    printf("%d\n",1,2);
//    return 0;
//}


//进程从运行状态进入就绪状态的原因可能是 时间片用完
//
//实时操作系统追求的目标是 快速响应
//
//响应比 等待到运行结束/运行时间
//
//操作系统是一种 系统软件
//
//支持紧凑的地址转换的机制是 动态重定位
//
//解决死锁的方法有预防、避免和检测与恢复
//
//设信号量S,当S<0时,表示 系统中等待本资源的进程数为|S|
//
//段式存储管理中的地址格式是 二维 地址
//
//一次只允许一个进程访问的资源,称为 临界资源
//
//在动态页式管理中，若所需页面不在内存中，则会引起 缺页中断
//
//设备管理中为了提高I/O速度和设备利用率，通过 缓冲管理 技术实现
//
//对空闲磁盘空间的管理办法有 位视图 空闲块链 空闲文件目录
//
//操作系统的四个特征是并发、共享 和 虚拟 与异步
//
//用户进程执行中发生以下事件不改变执行状态的是 子例程调用
//
//有利于使用CPU较多的进程调度算法是 先来先服务
//
//可以用于硬实时任务的调度策略是
//    基于优先级的固定点抢先式调度
//    基于优先级的随时抢先式调度
//
//段页式存储管理中存取数据需 三次 访问主存
//
//方便内存共享的存储管理方式是 段式
//
//整组数据的传送过程无须CPU干预的控制方式是 通道方式
//
//缓冲技术中的缓冲池在 主存 中
//
//多道程序系统中不断地选择新进程运行,来实现CPU的共享,引起CPU调度新进程的直接原因是
//    运行进程的时间片用完
//    运行进程出错
//    运行进程等待I/O
//
//线程是 调度的基本单位
//
//支持程序紧凑的地址转换机制是 动态重定位
//
//操作系统中,“死锁”的概念是指 并发进程都进入进程资源循环等待链
//
//在批处理系统中，用户的作业是由 程序+数据+作业说明书 组成的
//
//作业调度程序是从处于 收容 状态的作业中选取一个作业并把它装入主存
//
//作业的执行过程是 提交→收容→执行→完成
//
//资源的按顺序分配打破的是死锁的 环路 条件
//
//在请求页式存储管理中，页表增加中断位是为了确定相应的页 是否在内存
//
//在中断控制方式下，当I/O完成时紧接着做的工作是 由控制器向CPU发中断
//
//在请求调页的存储管理中，页表增加修改位是为了确定相应的页 淘汰时是否写到外存
//
//一种既有利于短小作业又兼顾到长作业的作业调度算法是 最高响应比优先
//
//产生死锁的根本原因是 系统的资源数少于并发进程要求的该类资源数
//
//按数据块为单位来传送数据的I/O控制方式是 DMA
//
//产生死锁的原因主要是：
//    因为系统资源不足。
//    进程运行推进的顺序不合适。
//    资源分配不当等。
//
//产生死锁的4个必要条件
//    互斥
//    占有并等待
//    不可剥夺
//    环路
//
//操作系统为用户提供三种类型的使用接口 命令方式 系统调用 图形用户界面
//
//原语是不可中断的程序
//
//考虑作业等待时间和作业执行时间 响应比高者优先
//
//P(S=0) A进入就绪,让出CPU
//
//等待队列有 一个或多个
//
//临界区是程序段




//#include<cstdio>
//#include<cstring>
//int main() {
//    char st1[10] = "maybe";
//    char st2[] = "";
//    printf("st1: %d\nst2: %d\n",st1,st2);
//    strcat(st2,st1);
//    printf("%s %s\n", st1, st2);
//    return 0;
//}
//假设:
//&st1 = 100;
//&st2 = 99;
//st1 = "maybe\0\0\0\0\0";
//st2 = "\0";
//strcat(st2, st1);
//st2 = "maybe\0";
//st1 是从 st2[1] 开始的



//#include<cstdio>
//#include<cstring>
//char st1[10] = "maybe";
//int main() {
//    char st2[10] = "hello";
//
//
//    return 0;
//}

//
//#include<stdio.h>
//int main(void) {
//    int x;
//    char A,B,C,D,E;
//    while(scanf("%d",&x)!=EOF);
//    {
//        x=x/10;
//        switch(x) {
//        case 10:
//        case 9:printf("A\n");break;
//        case 8:printf("B\n");break;
//        case 7:printf("C\n");break;
//        case 6:printf("D\n");break;
//        case 5:case 4:case 3:case 2:case 1:
//        case 0:printf("E\n");break;
//        default:printf("Score is error!\n");break;
//        }
//    }
//    return 0;
//}



//
//#include<cstdio>
//int main() {
//    int a[10] = {0,1,2,3,4,5,6,7,8,9};
//    int *p;
//    int i;
//    p=&a;
//    for(i=0;i<10;i++) {
//        printf("%d ",*p++);
//    }
//    return 0;
//}
//
//
//#include<cstdio>
//int main() {
//    double a = 11.5000;
//    double b = 12.5000;
//    printf("%.0lf %.0lf\n", a, b);
//    return 0;
//}
//


//
//#include <iostream>
//#include<stdio.h>
//#include<string.h>
//#include<time.h>
//#define MAX 100001
//using namespace std;
//char X[MAX]; //保存接受的十六进制数
//char B[MAX*4];//保存转换成的二进制数
//char eight[MAX];//保存转换成的八进制
//char M_1[65]="0000000100100011010001010110011110001001";     //作为0-9的二进制数码模版
//char M_2[25]="101010111100110111101111";        //作为a-f的二进制数码模版
//int Count_eight=0;
//void xtob(char *p)     //十六进制转换成二进制  12F
//{
//    int Count=0;
//    for(int i=0; i<strlen(p); i++)  //100000
//    {
//        if(X[i]=='0')
//            for(int j=0; j<4; j++)
//                B[Count++]=M_1[j];
//        else if(X[i]>='1'&&X[i]<='9')
//        {
//            for(int j=(X[i]-'0'+1)*4-4; j<(X[i]-'0'+1)*4; j++)
//                B[Count++]=M_1[j];
//        }
//        else if(tolower(X[i])>='a'&&tolower(X[i]<='f'))
//        {
//            for(int j=(tolower(X[i])-'a'+1)*4-4; j<(tolower(X[i])-'a'+1)*4; j++)
//                B[Count++]=M_2[j];
//        }
//    }
//}
//
//void btoegith(char *p)   // 00 010 010       22
//{
//    int mod=strlen(p)%3;  // i=6
//    for(int i=strlen(p)-1; i>=mod; i=i-3)
//    {
//        eight[Count_eight++]=(B[i]-'0')+((B[i-1]-'0')<<1)+((B[i-2]-'0')<<2)+'0';
//    }
//    if(mod!=0)
//    {
//        if(mod==1)
//            eight[Count_eight++]=B[0];
//        else if(mod==2)
//            eight[Count_eight++]=(B[0]-'0'<<1)+B[1]-'0'+'0';
//    }
//}
//
//int main()
//{
//    freopen("input1.txt", "r", stdin);
//    int Case;
//    cin>>Case;
//    while(Case--)
//    {
//        memset(B,0,sizeof(B));
//        memset(eight,0,sizeof(eight));
//        cin>>X;
//        clock_t t1=clock();
//        xtob(X);
//        Count_eight = 0;
//        btoegith(B);
//        if(eight[Count_eight-1]=='0')
//            Count_eight=Count_eight-1;
//        for(int i=Count_eight-1; i>=0; i--)
//        {
//            cout<<eight[i];
//        }
//        cout<<"\n";
//        printf("%lf s\n", (double)(clock() - t1)/CLOCKS_PER_SEC);
//    }
//
//    return 0;
//}
//
//
//
//#include <iostream>
//
//using namespace std;
//
//int main(void)
//{
//    long long n=3;
//    cout<<sizeof(n&1)<<endl;
//    return 0;
//}


//
//#include <iostream>
//
//using namespace std;
//
//int main(void)
//{
//    long long n=3;
//    cout<<sizeof(n&1)<<endl;
//    return 0;
//}


//素数筛选
//#include <iostream>
//#include <cmath>
//#include <cstring>
//#include <cstdio>
//#include <time.h>
//
//using namespace std;
//
//const int cmax = 100000000;
//
//bool flag[cmax+1];
//int prime[cmax+1];
//int size;
//
//void primer1(int n) {
//    for(int i=0; i<cmax+1; ++i) {
//        i&1 ? flag[i]=true : flag[i]=false;
//    }
//    for(int i=3; i<=sqrt(n); i+=2) {
//        if(flag[i]) {
//            for(int j=i+i; j<=n; j+=i) {
//                flag[j]=false;
//            }
//        }
//    }
////    for(int i=0; i<=n; ++i) {
////        if(flag[i]) {
////            cout << i << " ";
////        }
////    }
////    cout << endl;
//}
//
//void primer2(int n) {
//    memset(flag, true, sizeof(flag));
//    for(int i=0; (i<<1)+3<=sqrt(n); ++i) {
//        if(flag[i]) {
//            for(int j=i+(i<<1)+3; j<=n; j+=(i<<1)+3) {
//                flag[j]=false;
//            }
//        }
//    }
////    cout << "1 ";
////    for(int i=0; (i<<1)+3<=n; ++i) {
////        if(flag[i]) {
////            cout << (i<<1)+3 << " ";
////        }
////    }
////    cout << endl;
//}
//
//int main() {
//    clock_t start;
//    start=clock();
//    primer1(100000000);
//    cout << (double)(clock()-start)/CLOCKS_PER_SEC << endl;
//    start=clock();
//    primer2(100000000);
//    cout << (double)(clock()-start)/CLOCKS_PER_SEC << endl;
//    return 0;
//}
///*
//
//3 5 7 9 11 13 15 17 19
//3     9       15
//3 5 7   11  13   17 19
//  5           15
//3 5 7   11  13   17 19
//    7
//
//*/

//
//#include <stdio.h>
//#include <string.h>
//
//int strToHex(char *ch, char *hex);
//int hexToStr(char *hex, char *ch);
//int hexCharToValue(const char ch);
//char valueToHexCh(const int value);
//int main(int argc, char *argv[])
//{
//    char ch[1024];
//    char hex[1024];
//    char result[1024];
//    char *p_ch = ch;
//    char *p_hex = hex;
//    char *p_result = result;
//    printf("please input the string:");
//    scanf("%s",p_ch);
//
//    strToHex(p_ch,p_hex);
//    printf("the hex is:%s\n",p_hex);
//    hexToStr(p_hex, p_result);
//    printf("the string is:%s\n", p_result);
//    return 0;
//}
//
//int strToHex(char *ch, char *hex)
//{
//    int high,low;
//    int tmp = 0;
//    if(ch == NULL || hex == NULL)
//    {
//        return -1;
//    }
//
//    if(strlen(ch) == 0)
//    {
//        return -2;
//    }
//
//    while(*ch)
//    {
//        tmp = (int)*ch;
//        high = tmp >> 4;
//        low = tmp & 15;
//        *hex++ = valueToHexCh(high); //先写高字节
//        *hex++ = valueToHexCh(low); //其次写低字节
//        ch++;
//    }
//    *hex = '\0';
//    return 0;
//}
//
//int hexToStr(char *hex, char *ch)
//{
//    int high,low;
//    int tmp = 0;
//    if(hex == NULL || ch == NULL)
//    {
//        return -1;
//    }
//
//    if(strlen(hex) %2 == 1)
//    {
//        return -2;
//    }
//
//    while(*hex)
//    {
//        high = hexCharToValue(*hex);
//        if(high < 0)
//        {
//            *ch = '\0';
//            return -3;
//        }
//        hex++; //指针移动到下一个字符上
//        low = hexCharToValue(*hex);
//        if(low < 0)
//        {
//            *ch = '\0';
//            return -3;
//        }
//        tmp = (high << 4) + low;
//        *ch++ = (char)tmp;
//        hex++;
//    }
//    *ch = '\0';
//    return 0;
//}
//
//int hexCharToValue(const char ch)
//{
//    int result = 0;
//    //获取16进制的高字节位数据
//    if(ch >= '0' && ch <= '9')
//    {
//        result = (int)(ch - '0');
//    }
//    else if(ch >= 'a' && ch <= 'z')
//    {
//        result = (int)(ch - 'a') + 10;
//    }
//    else if(ch >= 'A' && ch <= 'Z')
//    {
//        result = (int)(ch - 'A') + 10;
//    }
//    else
//    {
//        result = -1;
//    }
//    return result;
//}
//
//char valueToHexCh(const int value)
//{
//    char result = '\0';
//    if(value >= 0 && value <= 9)
//    {
//        result = (char)(value + 48); //48为ascii编码的‘0’字符编码值
//    }
//    else if(value >= 10 && value <= 15)
//    {
//        result = (char)(value - 10 + 65); //减去10则找出其在16进制的偏移量，65为ascii的'A'的字符编码值
//    }
//    else
//    {
//        ;
//    }
//
//    return result;
//}




//
////Function to convert unsigned char to string of length 2
//void Char2Hex(const unsigned char ch, char* szHex) {
//    unsigned char byte[2];
//    byte[0] = ch / 16;
//    byte[1] = ch % 16;
//    for (int i = 0; i < 2; i++) {
//        if (byte[i] >= 0 && byte[i] <= 9)
//            szHex[i] = '0' + byte[i];
//        else
//            szHex[i] = 'A' + byte[i] - 10;
//    }
//    szHex[2] = 0;
//}
////Function to convert string of length 2 to unsigned char
//void Hex2Char(const char* szHex, unsigned char& rch) {
//    rch = 0;
//    for (int i = 0; i < 2; i++) {
//        if (*(szHex + i) >= '0' && *(szHex + i) <= '9')
//            rch = (rch << 4) + (*(szHex + i) - '0');
//        else if (*(szHex + i) >= 'A' && *(szHex + i) <= 'F')
//            rch = (rch << 4) + (*(szHex + i) - 'A' + 10);
//        else
//            break;
//    }
//}
////Function to convert string of unsigned chars to string of chars
//void CharStr2HexStr(const unsigned char* pucCharStr, char* pszHexStr, int iSize) {
//    int i;
//    char szHex[3];
//    pszHexStr[0] = 0;
//    for (i = 0; i < iSize; i++) {
//        Char2Hex(pucCharStr[i], szHex);
//        strcat(pszHexStr, szHex);
//    }
//}
////Function to convert string of chars to string of unsigned chars
//void HexStr2CharStr(const char* pszHexStr, unsigned char* pucCharStr, int iSize) {
//    int i;
//    unsigned char ch;
//    for (i = 0; i < iSize; i++) {
//        Hex2Char(pszHexStr + 2* i , ch);
//        pucCharStr[i] = ch;
//    }
//}

//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//#include <cassert>
//unsigned char * unsignedStrcpy(unsigned char *dst,const unsigned char *src)
//{
//    assert(dst != NULL && src != NULL);
//    unsigned char *ret = dst;
//    while ((*dst++=*src++)!='\0');
//    return ret;
//}
//bool EnBlowFish(void *Plain, void *EnCode)
//{
//    unsigned char enCode[25] = "qazxswedcvfrtgbnhyujmkio";
//    unsigned char* encode = (unsigned char *)EnCode;
//    unsignedStrcpy(encode, enCode);
//    return true;
//}
//int main()
//{
//    unsigned char plain[25];
//    unsigned long EnCode[25];
//    EnBlowFish(plain, EnCode);
//    printf("%s\n", EnCode);
//    return 0;
//}

//
//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//#include <ctime>
//#include <cctype>
//
//int unsignedStrcmp(const unsigned char* str1, const unsigned char* str2)
//{
//    for(;(*str1==*str2)&&*str1!='\0';str1++,str2++);
//    return *str1 - *str2;
//}
//
//int main(void)
//{
//    unsigned char st1[100] = "liubingshishabi";
//    unsigned char st2[100] = "liubingshishabi";
//    printf("%d\n", unsignedStrcmp(st2, st1));
//    return 0;
//}

//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//#include <ctime>
//#include <cctype>
//
//bool f(void *Plain, void *Encode)
//{
//    unsigned char *plain = (unsigned char *)Plain;
//    unsigned long* encode = (unsigned long *)Encode;
//
//    encode = (unsigned long *)plain;
//
//    for(int i=0; i<3; ++i)
//    {
//        printf("%0#x %0#x\n", *encode, *(encode+1));
//        encode += 2;
//    }
//
//    return true;
//}
//
//int main(void)
//{
//    unsigned char Plain[24]
//    ={'1','2','3','4','5','6','7','8','9','0',
//      '1','2','3','4','5','6','7','8','9','0',
//       0 ,'2','3','4'};
//    unsigned long Encode[6];
//    f(Plain, Encode);
//    return 0;
//}



//#include <cstdio>
//
//unsigned long Crc32Table[256];
//
//int unsignedStrlen(unsigned char *strIn)
//{
//    unsigned char *p = strIn;
//    while(*p++ != '\0');
//    return p - strIn - 1;
//}
//void MakeTable()
//{
//    int i,j;
//    unsigned long crc;
//    for (i = 0; i < 256; i++)
//    {
//        crc = i;
//        for (j = 0; j < 8; j++)
//        {
//            if (crc & 1)
//                crc = (crc >> 1) ^ 0xEDB88320;
//            else
//                crc >>= 1;
//        }
//        Crc32Table[i] = crc;
//    }
//}
//int GetCrc(unsigned char* csData, unsigned long dwSize)
//{
//    unsigned long crc  = 0xffffffff;
//    int len;
//    unsigned char* buffer;
//    len = dwSize;
//    buffer = csData;
//
//    while(len--)
//    {
//       crc = (crc >> 8) ^ Crc32Table[(crc & 0xFF) ^ *buffer++];
//    }
//    return crc ^ 0xffffffff;
//}
//int main()
//{
//    MakeTable();
//    unsigned char ch[100] = "123";
//    unsigned long len = unsignedStrlen(ch);
//    int a = GetCrc(ch, len);
//    printf("%0#x", a);
//    return 0;
//}


//#include <cstdio>
//
//int main()
//{
//    int k = 99999;
//    printf("%0#x\n", k);
//    unsigned char* p = (unsigned char*)k;
//    unsigned char* s;
//    s = p;
//    printf("%c\n", *s++);
//    printf("%c\n", *s++);
//    printf("%c\n", *s++);
//    printf("%c\n", *s++);
//    printf("%c\n", *s++);
//    return 0;
//}

//#include <stdio.h>
//main(){
//      int x = 123;
//      char str[4];
//      sprintf(str, "%x", x);
//      printf("%s\n", str);
//}


#include<stdio.h>
struct number {
    int year;
    int month;
    int day;
} date;
int main()
{
    while(scanf("%d/%d/%d",&date.year,&date.month,&date.day)!=EOF) {
        int i,days;
        int daysofmonth[13]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
        days=0;
        for(i=0; i<date.month; i++) {
            days+=daysofmonth[i];
        }
        days+=date.day;
        if((date.year%4==0&&date.year%100!=0||date.year%400==0)&&date.month>=3){
            days++;
        }
        printf("%d\n",days);
    }
    return 0;
}
