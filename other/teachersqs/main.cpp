/// ***************************************************************
///  ��ʿ�ν�����  version:  1.0   ������ 06 ������ƴ�����׼�� date: 06/08/2014
///  -------------------------------------------------------------
///  ������ɹ��ܣ�����һ��N*N�����̣������̵���һ�����������������
///                �ķ�ʽ���Ƿ��ܱ����������̡�
///                ��������������е����߷���
///  -------------------------------------------------------------
///  Copyright (C) 2014 - All Rights Reserved
/// ***************************************************************

#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int mmm;
int a[5][5]= {0}; ///ȫ�ֱ����������ʿ�н���·��
int N;///���̵Ĵ�С
int flag;///��־λ��1Ϊ�õ�һ��·�ߣ�2Ϊ�õ��н�������·��
int repeat=0;///��־λ��ȥ���ظ�·��
void print();
int count=0;///������������е��н�·���ܺ�
int main()
{
    freopen("out.txt", "w", stdout);
    int i,j;
    bool ok;
    bool solve(int i, int j, int k,bool &ok);
    char again='y';///���أ������û��Ƿ����
    do
    {
        for(i=0; i<10; i++)
            for(j=0; j<10; j++)
                a[i][j]=0;
        cout<<"���������̵Ĵ�С(������Ƶ��ǲ��ܳ���10"<<endl;
        cout<<"��Ϊ�˽�ʡ����ʱ�䣬���ǽ����������벻Ҫ����7,"
            <<"���⣬�������õ����е��н�·�ߣ������벻Ҫ����5��лл��)��"<<endl;
        cout<<"N=";
        cin>>N;
        cout<<"��������ʿ�����λ��(i,j)(i,j��ҪС��N)������0 0"<<endl;

        do
        {
            cin>>i>>j;
            if(i>=N||j>=N) cout<<"�Բ����������λ�ó��������̵Ĵ�С,����������"<<endl;
        }
        while(i>=N||j>=N);

        cout<<"������Ҫ�õ�һ�ֿ���·��,  ������õ����е��н�·��"<<endl;
        cout<<"1  ��Ҫ�õ�һ�ֿ���·��,2  ��õ����е��н�·��"<<endl;
        cin>>flag;
        mmm = 0;
        ok=(solve(i,j,1,ok));
        if(ok==true&&flag==1)
            for(i=0; i<N; i++)
            {
                for(j=0; j<N; j++)
                    printf("%3d",a[i][j]);
                cout<<endl;
            }
        if(ok==false&&flag==1) cout<<"�޽�"<<endl;
        if(count==0&&flag==2)
            cout<<"�޽�"<<endl;
        cout<<"�Ƿ������Ѳ��(y/n)��"<<endl;
        cin>>again;
    }
    while(again=='y');

}
bool solve(int i, int j, int k,bool &ok)
{
    if(k==N*N+1)
    {
        if(flag==1)
            return true;    ///��������
        else if(repeat==0)
        {
            print();
            repeat=1;
            return false;
        }
        else
            return false;
    }
    if(i<0||i>=N||j<0||j>=N)
        return false;///����Խ��
    if(a[i][j]==0)
    {
        a[i][j]=k;
        if(solve(i-1, j-2,k+1,ok))
            return true;///������������������
        else if(i-1>=0&&i-1<N&&j-2>=0&&j-2<N&& a[i-1][j-2]>k)
            a[i-1][j-2]=0;///����������߲�ͨ���˲�
        if(solve(i+1, j-2,k+1,ok))
            return true;///��������ĸ���������
        else if(i+1>=0&&i+1<N&&j-2>=0&&j-2<N&&a[i+1][j-2]>k)
            a[i+1][j-2]=0;///���ĸ������߲�ͨ���˲�
        if(solve(i+2, j-1,k+1,ok))
            return true;///�������������������
        else if(i+2>=0&&i+2<N&&j-1>=0&&j-1<N&&a[i+2][j-1]>k)
            a[i+2][j-1]=0;///�����������߲�ͨ���˲�
        if(solve(i+2, j+1,k+1,ok))
            return true;///������ڶ�����������
        else if(i+2>=0&&i+2<N&&j+1>=0&&j+1<N&&a[i+2][j+1]>k)
            a[i+2][j+1]=0;///�ڶ��������߲�ͨ���˲�
        if(solve(i+1, j+2,k+1,ok))
            return true;///�������һ����������
        else  if(i+1>=0&&i+1<N&&j+2>=0&&j+2<N&&a[i+1][j+2]>k)
            a[i+1][j+2]=0;///��һ�������߲�ͨ���˲�
        if(solve(i-1, j+2,k+1,ok))
            return true;///������ڰ˸���������
        else if(i-1>=0&&i-1<N&&j+2>=0&&j+2<N&&a[i-1][j+2]>k)
        {
            a[i-1][j+2]=0;
            repeat=0;
        }
        ///�ڰ˸������߲�ͨ���˲�
        if(solve(i-2, j+1,k+1,ok))
            return true;///��������߸���������
        else if(i-2>=0&&i-2<N&&j+1>=0&&j+1<N&&a[i-2][j+1]>k)
            a[i-2][j+1]=0;///���߸������߲�ͨ���˲�
        if(solve(i-2, j-1,k+1,ok))
            return true;///�������������������
        else if(i-2>=0&&i-2<N&&j-1>=0&&j-1<N&&a[i-2][j-1]>k)
            a[i-2][j-1]=0;///�����������߲�ͨ���˲�
        return false;
    }
    else
        return false;
}
void print() ///���������
{
    int i,j;
    count++;
    cout << ++ mmm << ": " << endl;
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
            printf("%3d",a[i][j]);
        cout<<endl;
    }
    cout<<endl;
}
