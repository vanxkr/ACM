#include <iostream>

using namespace std;

int main()
{
    int st[6][6];
    int _max[6], _min[6], min2 = 0xFFFF, max2 = -0xFFFF;
    int i, j;
    for (i = 0; i < 5; ++ i)
    {
        min2 = 0xFFFF, max2 = -0xFFFF;
        for (j = 0; j < 5; ++ j)
        {
            cin >> st[i][j];
            if (max2 < st[i][j])
                max2 = st[i][j];
        }
        _max[i] = max2;
    }
    for (i = 0; i < 5; ++ i)
    {
        min2 = 0xFFFF, max2 = -0xFFFF;
        for (j = 0; j < 5; ++ j)
        {
            if (min2 > st[j][i])
                min2 = st[j][i];
        }
        _min[i] = min2;
    }
    for (i = 0; i < 5; ++ i)
    {
        for (j = 0; j < 5; ++ j)
        {
            if (_min[i] == _max[j])
            {
                cout << j + 1 << " " <<  i + 1 << " " << _min[i] << endl;
            }
        }
    }

    return 0;
}
