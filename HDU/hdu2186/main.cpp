#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main() { _
    int t, n,sum;
    cin>>t;
    while(t--) {
        cin>>n;
        sum=(n/2+9)/10+((n-n/2)*2/3+9)/10+((n-n/2-(n-n/2)*2/3)+9)/10;
        cout<<sum<<endl;
    }
    return 0;
}
