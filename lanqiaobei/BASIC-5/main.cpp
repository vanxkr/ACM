#include <iostream>
using namespace std;
int main() {
    int i,n,st[1010],num;
    cin>>n;
    for(i=0;i<n;i++) {
        cin>>st[i];
    }
    cin>>num;
    for(i=0;i<n;i++) {
        if(num==st[i]) {
            cout<<i+1<<endl;
            break;
        }
    }
    if(i==n) {
        cout<<"-1"<<endl;
    }
    return 0;
}
