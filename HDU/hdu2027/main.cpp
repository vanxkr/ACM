#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
map <char, int> aeiou;
int main()
{
    int i, t;
    map <char, int>::iterator j;
    string st;
    cin >> t;
    cin.get();
    while (t --)
    {
        getline(cin, st);
        aeiou.clear();
        aeiou['a'] = 0;
        aeiou['e'] = 0;
        aeiou['i'] = 0;
        aeiou['o'] = 0;
        aeiou['u'] = 0;
        for (i = 0; st[i]; ++ i)
            if ('a' == st[i])
                ++ aeiou['a'];
            else if ('e' == st[i])
                ++ aeiou['e'];
            else if ('i' == st[i])
                ++ aeiou['i'];
            else if ('o' == st[i])
                ++ aeiou['o'];
            else if ('u' == st[i])
                ++ aeiou['u'];
        for (j = aeiou.begin(); j != aeiou.end(); ++ j)
            cout << j->first << ":" << j->second << endl;
        if (t)
            cout << endl;
    }
    return 0;
}
