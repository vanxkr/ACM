/// ***************************************************************
///  骑士游街问题  version:  1.0   张新玉 06 程序设计大赛标准题 date: 06/08/2014
///  -------------------------------------------------------------
///  程序完成功能：对于一个N*N的棋盘，从棋盘的任一方格出发，用走日字
///                的方式，是否能遍历整个棋盘。
///                本程序能输出所有的行走方案
///  -------------------------------------------------------------
///  Copyright (C) 2014 - All Rights Reserved
/// ***************************************************************

#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int mmm;
int a[5][5]= {0}; ///全局变量，存放骑士行进的路线
int N;///棋盘的大小
int flag;///标志位，1为得到一组路线，2为得到行进的所有路线
int repeat=0;///标志位，去掉重复路线
void print();
int count=0;///计数，存放所有的行进路线总和
int main()
{
    freopen("out.txt", "w", stdout);
    int i,j;
    bool ok;
    bool solve(int i, int j, int k,bool &ok);
    char again='y';///开关，控制用户是否继续
    do
    {
        for(i=0; i<10; i++)
            for(j=0; j<10; j++)
                a[i][j]=0;
        cout<<"请输入棋盘的大小(我们设计的是不能超过10"<<endl;
        cout<<"但为了节省您的时间，我们建议您的输入不要大于7,"
            <<"另外，如果您想得到所有的行进路线，请输入不要大于5，谢谢！)："<<endl;
        cout<<"N=";
        cin>>N;
        cout<<"请输入骑士的起点位置(i,j)(i,j都要小于N)：例如0 0"<<endl;

        do
        {
            cin>>i>>j;
            if(i>=N||j>=N) cout<<"对不起，您输入的位置超过了棋盘的大小,请重新输入"<<endl;
        }
        while(i>=N||j>=N);

        cout<<"你是想要得到一种可能路线,  还是想得到所有的行进路线"<<endl;
        cout<<"1  想要得到一种可能路线,2  想得到所有的行进路线"<<endl;
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
        if(ok==false&&flag==1) cout<<"无解"<<endl;
        if(count==0&&flag==2)
            cout<<"无解"<<endl;
        cout<<"是否想继续巡游(y/n)："<<endl;
        cin>>again;
    }
    while(again=='y');

}
bool solve(int i, int j, int k,bool &ok)
{
    if(k==N*N+1)
    {
        if(flag==1)
            return true;    ///结束条件
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
        return false;///发生越界
    if(a[i][j]==0)
    {
        a[i][j]=k;
        if(solve(i-1, j-2,k+1,ok))
            return true;///继续向第五个方向行走
        else if(i-1>=0&&i-1<N&&j-2>=0&&j-2<N&& a[i-1][j-2]>k)
            a[i-1][j-2]=0;///第五个方向走不通，退步
        if(solve(i+1, j-2,k+1,ok))
            return true;///继续向第四个方向行走
        else if(i+1>=0&&i+1<N&&j-2>=0&&j-2<N&&a[i+1][j-2]>k)
            a[i+1][j-2]=0;///第四个方向走不通，退步
        if(solve(i+2, j-1,k+1,ok))
            return true;///继续向第三个方向行走
        else if(i+2>=0&&i+2<N&&j-1>=0&&j-1<N&&a[i+2][j-1]>k)
            a[i+2][j-1]=0;///第三个方向走不通，退步
        if(solve(i+2, j+1,k+1,ok))
            return true;///继续向第二个方向行走
        else if(i+2>=0&&i+2<N&&j+1>=0&&j+1<N&&a[i+2][j+1]>k)
            a[i+2][j+1]=0;///第二个方向走不通，退步
        if(solve(i+1, j+2,k+1,ok))
            return true;///继续向第一个方向行走
        else  if(i+1>=0&&i+1<N&&j+2>=0&&j+2<N&&a[i+1][j+2]>k)
            a[i+1][j+2]=0;///第一个方向走不通，退步
        if(solve(i-1, j+2,k+1,ok))
            return true;///继续向第八个方向行走
        else if(i-1>=0&&i-1<N&&j+2>=0&&j+2<N&&a[i-1][j+2]>k)
        {
            a[i-1][j+2]=0;
            repeat=0;
        }
        ///第八个方向走不通，退步
        if(solve(i-2, j+1,k+1,ok))
            return true;///继续向第七个方向行走
        else if(i-2>=0&&i-2<N&&j+1>=0&&j+1<N&&a[i-2][j+1]>k)
            a[i-2][j+1]=0;///第七个方向走不通，退步
        if(solve(i-2, j-1,k+1,ok))
            return true;///继续向第六个方向行走
        else if(i-2>=0&&i-2<N&&j-1>=0&&j-1<N&&a[i-2][j-1]>k)
            a[i-2][j-1]=0;///第六个方向走不通，退步
        return false;
    }
    else
        return false;
}
void print() ///输出解的情况
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
