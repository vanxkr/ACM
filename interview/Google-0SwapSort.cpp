#include <iostream>
using namespace std;
const int maxLength = 10010;
/**
 * 交换数组里n和0的位置
 * array: 存储[0-n)的数组
 * len: 数组长度
 * n: 数组里要和0交换的数
 */
void swap_with_zero(int* array, int len, int n) {
    int i = -1;
    while (array[++i] != n) {
    }
    int temp = i;
    i = -1;
    while (array[++i]) {
    }
    array[i]^=array[temp]^=array[i]^=array[temp];
}

class Solution {
public:
    /**
     * 调用方法swap_with_zero来对array进行排序
     */
    void sort(int* array, int len) {
        swap_with_zero(array, len, array[0]);
        for (int i=1; i<len; ++i) {
            if (array[i] != i) {
               	int j=array[i];
                while (j!=array[j] && array[j]!=i) {
                    j = array[j];
                }
                cout << i << " " << j << endl;
                swap_with_zero(array, len, array[j]);
                swap_with_zero(array, len, array[i]);
                swap_with_zero(array, len, array[0]);
                for (int j=0; j<len; ++j) {
                    cout << array[j] << (j==len-1?"\n":" ");
                }
            }
        }
    }
};
int main()
{
    Solution s;
    int i, n;
    int array[maxLength];
    while (cin >> n) {
        for (i=0; i<n; ++i) {
            cin >> array[i];
        }
        s.sort(array, n);
        for (i=0; i<n; ++i) {
            cout << array[i] << (i==n-1?"\n":" ");
        }
    }
    return 0;
}

