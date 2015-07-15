#include <iostream>
#include <cstdio>

using namespace std;

bool is_tag(char st[]);

int main()
{
    char st[55];
    int num;
    cin >> num;
    getchar();
    while (num --)
    {
        gets(st);
        cout << (is_tag(st) ? "yes" : "no") << endl;
    }
    return 0;
}

bool is_tag(char st[])
{
    int i;
    if ('_' != st[0] && !isalpha(st[0]))
        return false;
    for (i = 1; st[i]; ++ i)
        if ('_' != st[i] && !isalnum(st[i]))
            return false;
    return true;
}
