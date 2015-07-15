#include <iostream>

using namespace std;

int main()
{
    int num;
    int hour1, minute1, second1;
    int hour2, minute2, second2;
    cin >> num;
    while (num --)
    {
        cin >> hour1 >> minute1 >> second1;
        cin >> hour2 >> minute2 >> second2;
        if (second1 + second2 > 59)
        {
            second1 -= 60;
            ++ minute1;
        }
        if (minute1 + minute2 > 59)
        {
            minute1 -= 60;
            ++ hour1;
        }
        cout << hour1 + hour2 << " " << minute1 + minute2 << " " << second1 + second2 << endl;
    }
    return 0;
}
