#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{0
    bool space = false;
    bool hr = false;
    int character = 0;
    char in[82];
    while (cin >> in)
    {
        if (!strcmp(in, "<br>"))
        {
            cout << "\n";
            space = false;
            character = 0;
        }
        else if (!strcmp(in, "<hr>"))
        {
            if (hr)
            {
                cout << "\n";
            }
            cout << "--------------------------------------------------------------------------------\n";
            hr = false;
            space = false;
            character = 0;
        }
        else if (80 <= (character + strlen(in)))
        {
            hr = true;
            cout << "\n" << in;
            character = strlen(in);
        }
        else
        {
            hr = true;
            if (space)
                cout << " ";
            cout << in;
            space = true;
            character += strlen(in) + 1;
        }
    }
    cout << "\n";
    return 0;
}
