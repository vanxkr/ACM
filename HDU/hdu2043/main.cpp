#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    bool flag[4];
    string st;
    int m, i, num;
    cin >> m;
    while (m --)
    {
        num = 0;
        memset(flag, false, sizeof(flag));
        cin >> st;
        if (st.length() > 7 && st.length() < 17){
            for (i = 0; st[i]; ++ i)
            {
                if (isdigit(st[i]))
                    flag[0] = true;
                else if (islower(st[i]))
                    flag[1] = true;
                else if (isupper(st[i]))
                    flag[2] = true;
                else
                    flag[3] = true;

            }
            for (i = 0; i < 4; ++ i)
                if (flag[i])
                    ++ num;
            if (num > 2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
}
return 0;
}
