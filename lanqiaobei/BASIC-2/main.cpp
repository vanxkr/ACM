#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main() {
    int i,j;
    char st[8];
    for(i=0;i<32;i++) {
        itoa(i,st,2);
        for(j=0;j<5-strlen(st);j++) {
            cout<<"0";
        }
        cout<<st<<endl;
    }
    return 0;
}
