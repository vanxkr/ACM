#include <iostream>
#include <cstring>
#include <ctype.h>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    char stc[21];
    int stn[21];
    int i, j;
    while (cin.getline(stc, 21))
    {
        for (j = i = 0; stc[i]; ++ i)
        {
            if (isdigit(stc[i]))
            {
                stn[j ++] = stc[i] - '0';
            }
        }
        sort(stn, stn + j);
        for (i = 0; i < j; ++ i)
        {
            cout << setw(4) << stn[i];
        }
        cout << endl;
    }
    return 0;
}
