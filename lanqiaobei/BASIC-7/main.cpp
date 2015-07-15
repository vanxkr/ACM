#include <iostream>
using namespace std;
int main() {
    int a;
    for(a=100;a<1000;a++) {
        if(a==((a/100)*(a/100)*(a/100)+(a%10)*(a%10)*(a%10)+((a/10)%10)*((a/10)%10)*((a/10)%10))) {
            cout<<a<<endl;
        }
    }
    return 0;
}
