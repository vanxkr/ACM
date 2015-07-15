#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<map>
#include<stack>
#include<list>
#include<queue>
#define eps 1e-6
#define INF (1<<30)
#define PI acos(-1.0)
using namespace std;
char a[100005];
unsigned long long base[100005];
unsigned long long pos[100005];
unsigned long long shash[100005];
map <unsigned long long,int>hash_table;
main()
{

    int m,l,n,k;
    base[0]=1;
    for (int i=1;i<=100000;i++)
        base[i]=base[i-1]*131;
    while(~scanf("%d%d",&m,&l)){
    pos[0]=0;
    scanf("%s",a);
    n=strlen(a);
    for (int i=0;i<n;i++)
            pos[i+1]=pos[i]*131ull+a[i];
    for (int i=1;i<=n-l+1;i++)
            shash[i]=pos[i+l-1]-pos[i-1]*base[l];//计算每个长度为l的hash
    int fp,lp,ti,ans=0;
    for (int i=1;(i<=l)&&i+l-1<=n;i++)
    {
        ti=0;
        hash_table.clear();
        fp=i;
        lp=i+l*(m-1);//fp代表开头 lp代表结尾
        if (lp+l-1>n) break;
        for (int j=fp;j<=lp;j+=l)
        {
            if (hash_table[shash[j]]==0) ++ti;
            hash_table[shash[j]]++;
            cout << " j: " << j << " " << hash_table[shash[j]] << endl;
        }

        cout << ti << endl << endl;
        if (ti==m) ans++;
        while (lp+l+(l-1)<=n)
        {
            if (hash_table[shash[fp]]==1) --ti;
            hash_table[shash[fp]]--;
            cout << "fp: " << fp << " " << hash_table[shash[fp]] << endl;
            fp+=l;
            lp+=l;
            if (lp>n) break;
            if (hash_table[shash[lp]]==0) ++ti;
            hash_table[shash[lp]]++;
            cout << "lp: " << lp << " " << hash_table[shash[lp]] << endl << ti << endl << endl;
            if (ti==m) ans++;
        }
    }
    printf("%d\n",ans);
    }
}


