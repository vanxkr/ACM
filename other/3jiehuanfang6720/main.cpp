#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int num, i;
    int st[10];
    cin >> num;
    while (num --)
    {
        for (i = 1; i <= 9; ++ i)
            cin >> st[i];
        sort(st + 1, st + 10);
        cout << st[4] << " " << st[9] << " " << st[2] << endl;
        cout << st[3] << " " << st[5] << " " << st[7] << endl;
        cout << st[8] << " " << st[1] << " " << st[6] << endl;
    }
    return 0;
}
