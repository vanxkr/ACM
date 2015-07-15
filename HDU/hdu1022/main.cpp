#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int i, j, k;
    bool flag;
    int n;
    char in[1010];
    char out[1010];
    bool num[1010];
    while (cin >> n)
    {
        stack<char> st;
        cin >> in >> out;
        flag = true;
        i = j = k = 0;
        while (k < n)
        {
            if (in[i] == out[k])
            {
                num[j ++] = true;
                num[j ++] = false;
                ++ i;
                ++ k;
            }
            else if (!st.empty() && out[k] == st.top())
            {
                num[j ++] = false;
                st.pop();
                ++ k;
            }
            else if (i < n)
            {
                num[j ++] = true;
                st.push(in[i ++]);
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "Yes." << endl;
            for (i = 0; i < j; ++ i)
                if (num[i])
                    cout << "in" << endl;
                else
                    cout << "out" << endl;
        }
        else
            cout << "No." << endl;
        cout << "FINISH" << endl;
    }
    return 0;
}
