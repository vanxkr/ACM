#include <iostream>
#include <cstring>

using namespace std;

char st[1001][1001];
int stn[1001];

int main()
{
    int num, number, _max;
    int i, j;
    char ch[16];
    bool flag;
    while (cin >> num, num)
    {

        memset(st, '\0', sizeof(st));
        memset(stn, 0, sizeof(stn));
        for (i = 0; i < num; ++ i)
        {
            flag = true;
            cin >> ch;
            for (j = 0; st[j][0]; ++ j)
                if (!strcmp(ch, st[j]))
                {
                    ++ stn[j];
                    flag = false;
                }
            if (flag)
                strcpy(st[j], ch);
        }
        _max = 0;
        for (i = 0; st[i][0]; ++ i)
            if (_max < stn[i])
            {
                _max = stn[i];
                number = i;
            }
        cout << st[number] << endl;
    }
    return 0;
}
