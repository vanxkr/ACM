#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    /**
     * 计算你能获得的最大收益
     * 
     * @param prices Prices[i]即第i天的股价
     * @return 整型
     */
    int getMax(int a, int b, vector<int> v) {
        int max = 0;
        for (int i=a; i<b; ++i) {
            for (int j=i+1; j<b; ++j) {
                if (v[i] < v[j]) {
                    max = max > v[j] - v[i] ? max : v[j] - v[i];
                }
            }
        }
        return max;
    }
    int calculateMax(vector<int> prices) {
		int x, y;
        int temp, max = 0;
        int i, j;
        int len = prices.size();
        for (i=2; i<=len-2; ++i) {
            temp = getMax(0, i, prices) + getMax(i, len, prices);
            max = max > temp ? max : temp;
        }
        max = max > getMax(0, len, prices) ? max : getMax(0, len, prices);
        return max;
    }
};
int main()
{
    int n;
    int temp;
    vector<int> prices;
    Solution s;
    while (cin >> n, n) {
        for (int i=0; i<n; ++i) {
            cin >> temp;
            prices.push_back(temp);
        }
        cout << s.calculateMax(prices) << endl;
    }
    return 0;
}
