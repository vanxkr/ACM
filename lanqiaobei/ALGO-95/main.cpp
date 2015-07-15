#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
bool flag;
void two(int n) {
    //cout<<n<<endl;
    int i,len;
    char st[20];
    itoa(n,st,2);
    len=strlen(st);
    for(i=0;st[i];i++) {
        if('1'==st[i]) {
            if(len-i>1) {
                if(flag) {
                    cout<<"2(";
                } else {
                    cout<<"+2(";
                }
                two(1<<(len-i-1));
                cout<<")";
            } else if(len-i==1) {
                if(flag) {
                    cout<<"2";
                    flag=false;
                } else {
                    cout<<"+2";
                }
            } else {
                if(flag) {
                    cout<<"2(0)";
                    flag=false;
                } else {
                    cout<<"+2(0)";
                }
            }
        }
    }
}
int main() {
    int n;
    flag=true;
    cin>>n;
    two(n);
    return 0;
}
