#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
    int i,n,st[10010],sum=0;
    cin>>n;
    for(i=0;i<n;i++) {
        cin>>st[i];
        sum+=st[i];
    }
    sort(st,st+n);
    cout<<st[n-1]<<endl<<st[0]<<endl<<sum<<endl;
    return 0;
}
