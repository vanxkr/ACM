#include<iostream>
#include<cmath>
using namespace std;
const double pi=acos(-1.0);//NOTES:pi
const double e=
    2.71828182845904523536028747135266249775724709369995957;
int main()
{
    long long n,tt;
    cin>>tt;
    while (tt--)
    {
        cin>>n;
        long long ans=(long long)
                      ((double)log10(sqrt(2*pi*n))+n*log10(n/e))+1;
        cout<<ans<<endl;
    }
    return 0;
}

