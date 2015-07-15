#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, m;
    while (cin >> n >> m && (n || m)) {
        double k = (n+sqrt(n*n - 4*m))/2;
        cout << (floor(k) == ceil(k) ? "Yes" : "No") << endl;
    }
    return 0;
}
