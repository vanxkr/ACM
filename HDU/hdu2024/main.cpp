#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i, t;
    string st;
    cin >> t;
    cin.get();
    while (t --)
    {
        getline(cin, st);
        if (isalpha(st[0]) || '_' == st[0])
        {
            for (i = 1; i < st.length(); ++ i)
                if (!isalnum(st[i]) && '_' != st[i])
                {
                    cout << "no" << endl;
                    break;
                }
            if (i == st.length())
            {
                cout << "yes" << endl;
                continue;
            }
        }
        else
            cout << "no" << endl;
    }
    return 0;
}
