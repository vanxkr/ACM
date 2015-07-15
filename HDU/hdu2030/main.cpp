#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t, num, i;
    string st;
    cin >> t;
    cin.get();
    while (t --)
    {
        i = num = 0;
        getline(cin, st);
        while (st[i])
            if (st[i++] < 0)
                ++ num;
        cout << num/2 << endl;
    }
    return 0;
}
