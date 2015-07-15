#include <iostream>

using namespace std;

int main()
{
    int num_1, num_2, num_5;
    while (cin >> num_1 >> num_2 >> num_5 && num_1 + num_2 + num_5)
    {
        if (num_1 > 3 || (num_1 && num_2 > 1) || (num_1 > 1 && num_2))
        {
            cout << num_5*5 + num_2*2 + num_1 + 1 << endl;
        }
        else
        {
            if (num_1)
            {
                if (num_2)
                {
                    cout << "4" << endl;
                }
                else
                {
                    cout << num_1 + 1 << endl;
                }
            }
            else
            {
                cout << "1" << endl;
            }
        }
    }
    return 0;
}
