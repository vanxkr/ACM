#include <iostream>

using namespace std;

void math(int n);
void gcd(__int64 &a, __int64 &b)
{
    __int64 a1 = a, b1 = b, c = 1;
    while(0 != a1%b1)
    {
        c = a1 - a1/b1 * b1;
        a1=b1;
        b1=c;
        if(a1%b1==1)
        {
            c=1;
            break;
        }
    }
    a /= c;
    b /= c;
}

int main()
{
    int num;
    while (cin >> num)
    {
        math(num);
    }
    return 0;
}

void math(int n)
{
    __int64 up = 0, down = 1;
    int num = 0;
    int i;
    for (i = 1; i <= n; ++ i)
    {
        if (0 == n%i)
        {
            num += n/i;
        }
        else
        {
            num += n/i;
            up = (n%i)*down + up*i;
            down *= i;
            if (up >= down)
            {
                ++ num;
                if (up == down)
                {
                    up = 0;
                    down = 1;
                }
                else
                {
                    up -= down;
                }
            }
            gcd(up, down);
        }
    }
    if (1 == down)
    {
        cout << num << endl;
    }
    else
    {
        for (i = 1; i <= num; i *= 10)
        {
            cout << " ";
        }
        cout << " ";
        cout << up << endl;
        cout << num;
        cout << " ";
        for (i = 1; i <= down; i *= 10)
        {
            cout << "-";
        }
        cout << endl;
        cout << " ";
        for (i = 1; i <= num; i *= 10)
        {
            cout << " ";
        }
        cout << down << endl;
    }
}
