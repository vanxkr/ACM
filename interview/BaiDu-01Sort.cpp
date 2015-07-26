#include <iostream>
#include <cstring>
using namespace std;
const int maxLength = 1000010;
int main()
{
    int T;
    int i, j;
    int count;
    char st[maxLength];
    cin >> T;
    while (T --) {
        cin >> st;
        i = count = 0;
        j = strlen(st) - 1;
        while (i < j) {
            while (i<j && st[i]=='0') {
                ++i;
            }
            while (i<j && st[j]=='1') {
                --j;
            }
            if (i<j) {
                ++count;
                ++i;
                --j;
            }
        }
        cout << count << endl;
    }
    return 0;
}
