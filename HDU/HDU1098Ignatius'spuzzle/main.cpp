#include <iostream>

using namespace std;

int main()
{
    int k, a, num;
    while (cin >> k)
    {
        num = 0;
        for (a = 1; a < 66; ++ a)
        {
            if (0 == (k*a + 18)%65)
            {
                break;
            }
        }
        if (66 == a)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << a << endl;
        }
    }
    return 0;
}
