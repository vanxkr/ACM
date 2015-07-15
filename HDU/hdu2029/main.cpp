#include <iostream>
#include <string>
using namespace std;
int main()
{
    string st;
    int i, t;
    cin >> t;
    while (t --)
    {
        cin >> st;
        for (i = 0; i < st.length()/2; ++ i)
            if (st[i] != st[st.length() - i - 1])
            {
                cout << "no" << endl;
                break;
            }
        if (i == st.length()/2)
            cout << "yes" << endl;
    }
    return 0;
}
