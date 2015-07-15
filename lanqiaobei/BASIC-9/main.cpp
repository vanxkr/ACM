#include <iostream>
using namespace std;
int main() {
    int n;
    int a, b, c;
    cin >> n;
    for(c = 1; c < 10; c ++) {
        for(b = 0; b < 10; b ++) {
            for(a = 0; a < 10; a ++) {
                if(a + b + b + c + c == n) {
                    cout << c << b << a << b << c << endl;
                }
            }
        }
    }
    for(c = 1; c < 10; c ++) {
        for(b = 0; b < 10; b ++) {
            for(a = 0; a < 10; a ++) {
                if(a + a + b + b + c + c == n) {
                    cout << c << b << a << a << b << c << endl;
                }
            }
        }
    }
    return 0;
}
