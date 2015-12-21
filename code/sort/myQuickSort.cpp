#include <iostream>
using namespace std;
const int maxLength = 10010;
void myQuickSort(int st[], int low, int high) {
    if (low >= high ) {
        return;
    }
    int first = low;
    int last = high;
    int key = st[first];
    while (first < last) {
        while (first < last && st[last] >= key) {
            --last;
        }
        st[first] = st[last];
        while (first < last && st[first] <= key) {
            ++first;
        }
        st[last] = st[first];
    }
    st[first] = key;
    for (int i=low; i<=high; ++i) {
        cout << st[i] << (i==high?"\n":" ");
    }
    myQuickSort(st, low, first-1);
    myQuickSort(st, first+1, high);
}
int main()
{
    int n;
    int st[maxLength];
    while (cin >> n, n) {
        for (int i=0; i<n; ++i) {
            cin >> st[i];
        }
        myQuickSort(st, 0, n-1);
        for (int i=0; i<n; ++i) {
            cout << st[i] << (i==n-1?"\n":" ");
        }
    }
    return 0;
}
