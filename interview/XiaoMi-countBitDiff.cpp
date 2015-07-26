#include <iostream>
using namespace std;
class Solution {
public:
    /**
     * 获得两个整形二进制表达位数不同的数量
     * 
     * @param m 整数m
     * @param n 整数n
     * @return 整型
     */
    int countBitDiff(int m, int n) {
        int count = 0;
        for (int i=0; i<32; ++i) {
            if ((m&1) != (n&1)) {
                ++count;
            }
            m >>= 1;
            n >>= 1;
        }
        return count;
    }
};
int main()
{
    Solution s;
    int m, n;
    while (cin >> m >> n) {
        cout << s.countBitDiff(m, n) << endl;
    }
 	return 0;   
}
