#include <iostream>

using namespace std;

int zeroCount(int);

int main()
{
    int num;
    while (cin >> num, num)
    {
        cout << zeroCount(num) << endl;
    }
    return 0;
}

int zeroCount (int n)
{
    int counter = 0;
    while (n >= 5)
    {
        n /= 5;
        counter += n;
    }
    return counter;
}
