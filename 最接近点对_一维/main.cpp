//2d10-1 一维最邻近点对问题
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

const int L=100;
//点对结构体
struct Pair
{
	double d;//点对距离
	double d1,d2;//点对坐标
};
double Random();
int input(double s[]);//构造S
double Max(double s[],int p,int q);
double Min(double s[],int p,int q);
template <class Type>
void Swap(Type &x,Type &y);
template <class Type>
int Partition(Type s[],Type x,int l,int r);
Pair Cpair(double s[],int l,int r);

int main()
{
	srand((unsigned)time(NULL));
	int m;
	double s[L];
	Pair d;
	m=input(s);
	d=Cpair(s,0,m-1);
	cout<<endl<<"最近点对坐标为： (d1:"<<d.d1<<",d2:"<<d.d2<<")";
	cout<<endl<<"这两点距离为： "<<d.d<<endl;
	return 0;
}


double Random()
{
	double result=rand()%10000;
	 return result*0.01;
}

int input(double s[])
{
	int length;
	cout<<"输入点的数目： ";
	cin>>length;
	cout<<"点集在X轴上坐标为：";
	for(int i=0;i<length;i++)
	{
		s[i]=Random();
		cout<<s[i]<<" ";
	}

	return length;
}


double Max(double s[],int l,int r)//返回s[]中的最大值
{
	double s_max=s[l];
	for(int i=l+1;i<=r;i++)
		if(s_max<s[i])
			s_max=s[i];
	return s_max;
}

double Min(double s[],int l,int r)//返回s[]中的最小值
{
	double s_min=s[l];
	for(int i=l+1;i<=r;i++)
		if(s_min>s[i])
			s_min=s[i];
	return s_min;
}

template <class Type>
void Swap(Type &x,Type &y)
{
	Type temp = x;
	x = y;
	y = temp;
}

template <class Type>
int Partition(Type s[],Type x,int l,int r)
{
	int i = l - 1,j = r + 1;

	while(true)
	{
		while(s[++i]<x && i<r);
		while(s[--j]>x);
		if(i>=j)
		{
			break;
		}
		Swap(s[i],s[j]);
	}
	return j;
}

//返回s[]中的具有最近距离的点对及其距离
Pair Cpair(double s[],int l,int r)
{
	Pair min_d={99999,0,0};//最短距离

	if(r-l<1) return min_d;
	double m1=Max(s,l,r),m2=Min(s,l,r);

	double m=(m1+m2)/2;//找出点集中的中位数

	//将点集中的各元素按与m的大小关系分组
	int j = Partition(s,m,l,r);

	Pair d1=Cpair(s,l,j),d2=Cpair(s,j+1,r);//递归
	double p=Max(s,l,j),q=Min(s,j+1,r);

	//返回s[]中的具有最近距离的点对及其距离
	if(d1.d<d2.d)
	{
		if((q-p)<d1.d)
		{
			min_d.d=(q-p);
			min_d.d1=q;
            min_d.d2=p;
			return min_d;
		}
		else return d1;
	}
	else
	{
		if((q-p)<d2.d)
		{
			min_d.d=(q-p);
			min_d.d1=q;
            min_d.d2=p;
			return min_d;
		}
		else return d2;
	}
}
