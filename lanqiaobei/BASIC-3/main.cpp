#include <iostream>
using namespace std;
int main() {
    int i,j,n,m;
    bool flag;
    char ch;
    cin>>n>>m;
    for(i=0;i<n;i++) {
        ch='A'+i;
        for(flag=false,j=0;j<m;j++) {
            if(ch=='A') {
                flag=true;
            }
            cout<<ch;
            if(flag) {
                ch ++;
            } else {
                ch --;
            }
        }
        cout<<endl;
    }
    return 0;
}
