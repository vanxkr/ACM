#include <iostream>

using namespace std;

int main()
{
    int a = 1, b = 1;
    int num, number, i, t;
    cin >> num;
    while (num --)
    {
        a = b = 1;
        cin >> number;
        if (1 == number || 2 == number)
            cout << "1" << endl;
        else
        {
            for (i = 2; i < number; ++ i)
            {
                t = a;
                a += b;
                b = t;
                a %= 1000;
            }
            cout << a << endl;
        }
    }
    return 0;
}
