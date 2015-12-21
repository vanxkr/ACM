// 14208881 2015-07-27 22:48:09 Accepted 2055 0MS 1608K 442 B G++ xyx_0 
#include <iostream>
#include <map>
using namespace std;
map<char, int> dir;
void init() {
    for (char ch='a'; ch<'z'+1; ++ch) {
        dir[ch]='a'-ch-1;
    }
    for (char ch='A'; ch<'Z'+1; ++ch) {
        dir[ch]=ch-'A'+1;
    }
}
int main()
{
    int T;
    char ch;
    int num;
    init();
    cin >> T;
    while (T--) {
        cin >> ch >> num;
        cout << dir[ch] + num << endl;
    }
    return 0;
}
