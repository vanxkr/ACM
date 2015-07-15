#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i;
    string st;
    char ch;
    while (cin >> st)
    {
        ch = 64;
        for (i = 0; st[i]; ++ i)
            if (ch < st[i])
                ch = st[i];
        for (i = 0; st[i]; ++ i)
            cout << st[i] << ((st[i] == ch) ? "(max)" : "");
        cout << endl;
    }
    return 0;
}
