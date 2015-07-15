#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int i,st[3];
    cin>>st[0]>>st[1]>>st[2];
    sort(st,st+3);
    cout<<st[2]<<" "<<st[1]<<" "<<st[0];
    return 0;
}
