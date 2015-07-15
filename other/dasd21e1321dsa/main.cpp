#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,k,temp;
    while(cin>>a>>b)
    {
        if(a>b)
        {
            temp=b;
            b=a;
            a=temp;
        }
        k=b-a;
        temp=(floor)(k*(1.0+sqrt(5.0))/2.0);///重要公式
        if(temp==a)
            cout<<"0"<<endl;
        else
            cout<<"1"<<endl;
    }
    return 0;
}
