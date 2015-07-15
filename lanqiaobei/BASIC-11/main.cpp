#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
long long power(int i)
{
    long long k  = 1;
    while(i --)
    {
        k *= 16;
    }
    return k;
}
int main()
{
    char st[10];
    long long num = 0;
    cin >> st;
    reverse(st, st + strlen(st));
    for(int i = 0; st[i]; i ++)
    {
        if(st[i] <= '9')
        {
            num += (st[i] - '0') * power(i);
        }
        else
        {
            num += (st[i] - 'A' + 10) * power(i);
        }
    }
    cout << num << endl;
    return 0;
}
