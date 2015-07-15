#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int chazhao(int num,int from, int len, int st[], int sum)
{
    if (num == st[(len - from)/2 + from])
        return sum;
    else if (from == len)
        return 0;
    else if (num < st[(len - from)/2 + from])
        chazhao(num, from, (len - from)/2 + from, st, sum + 1);
    else
        chazhao(num, (len - from + 1)/2 + from, len, st, sum + 1);
}

int main()
{
    bool flage;
    int num, i, number;
    int st[105];
    while(cin >> num)
    {
        for (i = 0; i < num; ++ i)
            cin >> st[i];
        cin >> number;
        sort(st, st + num);
        if (chazhao(number, 0, num - 1, st, 1))
            cout << chazhao(number, 0, num - 1, st, 1) << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}

/*
9
7 5 8 1 2 3 0 4 9
1
20
7 5 8 1 2 3 0 4 9 15 54 67 90 123 543 7684 89706 777 8888 1122
777
*/
