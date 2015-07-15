#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    int a, i = 0;
    char st[10];
    cin >> a;
    do
    {
        if(a % 16 > 9)
        {
            st[i ++] = (char)(a % 16 - 10 + 'A');
        }
        else
        {
            st[i ++] = (char)(a % 16 + '0');
        }
        a /= 16;
    } while(a);
    st[i] = '\0';
    reverse(st, st + strlen(st));
    cout << st << endl;
    return 0;
}
