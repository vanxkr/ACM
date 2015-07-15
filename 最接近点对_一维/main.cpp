//2d10-1 һά���ڽ��������
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

const int L=100;
//��Խṹ��
struct Pair
{
	double d;//��Ծ���
	double d1,d2;//�������
};
double Random();
int input(double s[]);//����S
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
	cout<<endl<<"����������Ϊ�� (d1:"<<d.d1<<",d2:"<<d.d2<<")";
	cout<<endl<<"���������Ϊ�� "<<d.d<<endl;
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
	cout<<"��������Ŀ�� ";
	cin>>length;
	cout<<"�㼯��X��������Ϊ��";
	for(int i=0;i<length;i++)
	{
		s[i]=Random();
		cout<<s[i]<<" ";
	}

	return length;
}


double Max(double s[],int l,int r)//����s[]�е����ֵ
{
	double s_max=s[l];
	for(int i=l+1;i<=r;i++)
		if(s_max<s[i])
			s_max=s[i];
	return s_max;
}

double Min(double s[],int l,int r)//����s[]�е���Сֵ
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

//����s[]�еľ����������ĵ�Լ������
Pair Cpair(double s[],int l,int r)
{
	Pair min_d={99999,0,0};//��̾���

	if(r-l<1) return min_d;
	double m1=Max(s,l,r),m2=Min(s,l,r);

	double m=(m1+m2)/2;//�ҳ��㼯�е���λ��

	//���㼯�еĸ�Ԫ�ذ���m�Ĵ�С��ϵ����
	int j = Partition(s,m,l,r);

	Pair d1=Cpair(s,l,j),d2=Cpair(s,j+1,r);//�ݹ�
	double p=Max(s,l,j),q=Min(s,j+1,r);

	//����s[]�еľ����������ĵ�Լ������
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
