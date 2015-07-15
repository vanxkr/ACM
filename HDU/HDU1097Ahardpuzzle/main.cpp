#include <iostream>

using namespace std;

int main()
{
    int num;
    int a, b;
    int st[10][4] =
    {
        0, 0, 0, 0,
        1, 1, 1, 1,
        6, 2, 4, 8,
        1, 3, 9, 7,
        6, 4, 6, 4,
        5, 5, 5, 5,
        6, 6, 6, 6,
        1, 7, 9, 3,
        6, 8, 4, 2,
        1, 9, 1, 9
    };
    while (cin >> a >> b)
    {
        cout << st[a%10][b%4] << endl;
    }

    return 0;
}
