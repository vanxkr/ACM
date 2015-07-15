#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(0==n%400||(0==n%4&&0!=n%100)) {
        cout<<"yes"<<endl;
    } else {
        cout<<"no"<<endl;
    }
    return 0;
}
