#include <iostream>
using namespace std;
int main() {
    int n,m;
    while(cin>>n>>m) {
        cout<<(m-1)%n<<endl;
    }
    return 0;
}
