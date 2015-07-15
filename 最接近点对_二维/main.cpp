/**
��Ҫ˼����Ƿ��Ρ��Ȱ�n���㰴x��������Ȼ�������n/2�����ұ�n/2����������룬���ϲ����ϲ�Ҫ�ص�˵һ�£��Ƚ��鷳��


     ���ȣ��������n�������Ϊ1��n������Ҫ����������һ���м�ı��mid�������1��mid������������Ϊd1��
     ����mid+1��n�����������Ϊd2������ĵ���Ҫ��x�����˳���źã����Ҽ�����Щ���У�û��2����ͬһ��λ�á�
     �����У���ֱ����С����Ϊ0�ˣ���


     Ȼ����dΪd1, d2�н�С���Ǹ��㡣���˵�������е����㶼��1-mid�����У�����mid+1��n�����У���d����
     ��С�����ˡ����ǻ��п��ܵ����������е�����������������ϣ��������Ǳ����ȼ��һ����������Ƿ����ڣ�
     �����ڣ������������Եľ����¼������ȥ����d���������ǾͿ��Եõ���С�ľ���d�ˡ�


    �ؼ���Ҫȥ��������ԣ�������ÿ���㶼Ҫ�Ͷ��漯�ϵĵ�ƥ��һ�Σ���Ч�ʻ��ǲ����������ǵ�Ҫ����������
    Ҫ�Ż�����ô�Ż��أ�����һ�£�������������ѡ�ķָ��midΪ�磬���ĳһ��ĺ����굽��mid�ĺ�����ľ���ֵ
    ����d1���ҳ���d2����ô����㵽mid��ľ����Ȼ����d1��d2�е�С�ߣ���������㵽�Է����ϵ������ľ����Ȼ
    �������е�����С�ġ�


    ���������Ȱ���midΪ������һ����Χ�ڵĵ�ȫ��ɸѡ�������ŵ�һ�������ɸѡ���Ժ󣬵�Ȼ���԰���Щ��������
    ����ȥ����d�ˣ������������Ǻ�������һ���������ĵ�ܶ��ء����ﻹ�ü����Ż������Ȱ���Щ�㰴y�������򡣼�
    ��������Ժ���cnt���㣬���Ϊ0��cnt-1����ô������0��ȥ��1��cnt-1�ŵĵ���һ�¾��룬Ȼ��1�ź�2��cnt-1�ŵ�
    ����һ�¾��롣�������ĳ������y������Ѿ�������d�����ѭ���Ϳ���ֱ��break�ˣ���ʼ����һ���������.
*/
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int n;
struct node
{
  double x;
  double y;
}p[100005];
int a[100005];
double cmpx(node a,node b)
{
  return a.x<b.x;
}
double cmpy(int a,int b)
{
  return p[a].y<p[b].y;
}
double min(double a,double b)
{
  return a<b?a:b;
}
double dis(node a,node b)
{
  return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
double find(int l,int r)
{
     if(r==l+1)
      return dis(p[l],p[r]);
     if(l+2==r)
      return min(dis(p[l],p[r]),min(dis(p[l],p[l+1]),dis(p[l+1],p[r])));
     int mid=(l+r)>>1;
     double ans=min(find(l,mid),find(mid+1,r));
     int i,j,cnt=0;
     for(i=l;i<=r;i++)
     {
       if(p[i].x>=p[mid].x-ans&&p[i].x<=p[mid].x+ans)
          a[cnt++]=i;
     }
     sort(a,a+cnt,cmpy);
     for(i=0;i<cnt;i++)
     {
       for(j=i+1;j<cnt;j++)
       {
         if(p[a[j]].y-p[a[i]].y>=ans) break;
         ans=min(ans,dis(p[a[i]],p[a[j]]));
       }
     }
     return ans;
}
int main()
{
    int i;
    while(scanf("%d",&n)!=EOF)
    {
      if(!n) break;
      for(i=0;i<n;i++)
       scanf("%lf %lf",&p[i].x,&p[i].y);
      sort(p,p+n,cmpx);
      printf("%.2lf%\n",find(0,n-1));
    }
    return 0;
}


/*
8
5 5
5 -5
-5 5
-5 -5
3 4
3 -4
3 9
-1 1

*/
