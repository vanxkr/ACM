#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

bool fun(double sti[], double stj[])
{
    double x = stj[1] - (stj[0]*(sti[1] - sti[3]) + (sti[0]*sti[3] - sti[2]*sti[1]))/(sti[0] - sti[2]);
    double y = stj[3] - (stj[2]*(sti[1] - sti[3]) + (sti[0]*sti[3] - sti[2]*sti[1]))/(sti[0] - sti[2]);
    if (x*y <= 0)
        return true;
    return false;
}

int main()
{
//    freopen("D:\\Users\\xyx_0\\Desktop\\code\\in.txt", "r", stdin);
//    freopen("D:\\Users\\xyx_0\\Desktop\\code\\my.txt", "w", stdout);
    int i, j, num, number;
    double st[101][4];
    while (cin >> num, num)
    {
        number = 0;
        for (i = 0; i < num; ++ i)
        {
            cin >> st[i][0] >> st[i][1] >> st[i][2] >> st[i][3];
        }
        for (i = 0; i < num - 1; ++ i)
        {
            for (j = i + 1; j < num; ++ j)
            {
                if (fun(st[i], st[j]) && fun(st[j], st[i]))
                {
                    ++ number;
                }
            }
        }
        cout << number << endl;
    }
    return 0;
}
