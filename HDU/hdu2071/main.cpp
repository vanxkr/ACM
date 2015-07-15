#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int t, n;
    double number, m;
    cin >> t;
    while (t --) {
        cin >> n;
        m = 0;
        for (int i = 0; i < n; ++ i) {
            cin >> number;
            m = m > number ? m : number;
        }
        cout << fixed << setprecision(2) << m << endl;
    }
    return 0;
}
