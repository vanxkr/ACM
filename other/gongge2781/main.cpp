#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int number, num, i, j, k, c;
    int st[101][101];
    while (cin >> num, num)
    {
        for (i = 0; i < num; ++ i)
        {
            st[0][i] = i + 1;
        }
        number = num  + 1;
        j = k = num - 1;
        i = 1;
        while (k)
        {
            if (!(num & 1) && 1 == k)
            {
                st[i][j] = number ++;
                st[i][-- j] = number ++;
                break;
            }
            for (c = 0; c < k; ++ i, ++ c)
            {
                st[i][j] = number ++;
            }
            -- i;
            -- j;
            for (c = 0; c < k; -- j, ++ c)
            {
                st[i][j] = number ++;
            }
            ++ j;
            -- i;
            -- k;
            for (c = 0; c < k; -- i, ++ c)
            {
                st[i][j] = number ++;
            }
            ++ i;
            ++ j;
            for (c = 0; c < k; ++ j, ++ c)
            {
                st[i][j] = number ++;
            }
            -- j;
            ++ i;
            -- k;
        }
        for (i = 0; i < num; ++ i)
        {
            for (j = 0; j < num; ++ j)
            {
                cout << st[i][j] << ((j + 1) == num ? "\n" : "\t");
            }
        }
    }
    return 0;
}
