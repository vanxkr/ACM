#include <iostream>

using namespace std;

int main()
{
    double num, sum = 0;
    int i;
    for (i = 0; i < 12; ++ i)
    {
        cin >> num;
        sum += num;
    }
    cout << "$" << sum/12 << endl;
    return 0;
}
