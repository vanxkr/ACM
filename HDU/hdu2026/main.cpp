#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i;
    string st;
    while (getline(cin, st))
    {
        st[0] -= 32;
        for (i = 0; st[i]; ++ i)
            if (' ' == st[i])
                st[i + 1] -= 32;
        cout << st << endl;
    }
    return 0;
}
