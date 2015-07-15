#include <iostream>

using namespace std;

int main()
{
    int i;
    char s, st[105];
    while (cin >> st)
    {
        s = 'A';
        for (i = 0; st[i]; ++ i)
            if (s < st[i])
                s = st[i];
        for (i = 0; st[i]; ++ i)
                cout << st[i] << ((s == st[i]) ? "" : "(max)") << (st[i + 1] ? "" : "\n");
    }
    return 0;
}
