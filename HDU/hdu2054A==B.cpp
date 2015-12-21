#include <iostream>
// 14208765 2015-07-27 22:38:18 Accepted 2054 15MS 1640K 1730 B G++ xyx_0 
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
using namespace std;

class Number {
    public:
        Number(){}
        ~Number(){}

        void deleteZeroAndDot() {
            string::iterator it;
            for (it=num.begin(); it!=num.end();) {
                if(*it=='0') {
                    num.erase(it);
                } else if (*it=='.') {
                    num.erase(it);
                    break;
                } else {
                    break;
                }
            }
            for (it=num.begin(); it!=num.end(); ++it) {
                if (*it=='.') {
                    for (it=num.end()-1; it!=num.begin();) {
                        if(*it=='0') {
                            num.erase(it);
                            it=num.end()-1;
                        } else if (*it=='.') {
                            num.erase(it);
                            break;
                        } else {
                            break;
                        }
                    }
                    break;
                }
            }
        }

        friend istream& operator >>(istream& i, Number &n) {
            i >> n.num;
            return i;
        }
        bool operator ==(Number &n) {
            this->deleteZeroAndDot();
            n.deleteZeroAndDot();
            return this->num == n.num;
        }
    protected:
    private:
        string num;
};

int main()
{
    Number A, B;
    while (cin >> A >> B) {
        if (A == B) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

