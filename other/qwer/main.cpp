///<h5><a trace="combo_series" traceNum="2" href="/search?q=%C6%BB%B9%FB&spu_title=%C6%BB%B9%FB+IPHONE+5S&app=detailproduct&pspuid=251575&cat=1512&jc=1&from_pos=19_1512.bpvcombo_1_1_251575" title="Æ»¹û IPHONE 5S" target="_blank">	a
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main(void)
{
    int i, j;
    bool flage;
    char ch[10001];
    char st[10001];
    memset(st, '\0', sizeof(st));
    gets(st);
    cout << st << endl;
    i = strlen(st) - 4;
    cout << i << endl;
    cout << st[i] << st[i + 1] << st[i + 2] << st[i + 3] << endl;
    while (true)
    {
        if ('h' == st[i] && 'r' == st[i + 1] && 'e' == st[i + 2] && 'f' == st[i + 3])
            break;
        else
            -- i;
    }
    flage = true;
    while (flage)
    {
        if ('\"' == st[i])
        {
            j = 0;
            ++ i;
            while ('\"' != st[i])
            {
                ch[j ++] = st[i ++];
                flage = false;
            }
        }
        else
            ++ i;
    }

    cout << ch << endl;
}
