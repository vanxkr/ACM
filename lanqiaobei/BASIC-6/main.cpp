#include <iostream>
using namespace std;
int main() {
    int i,j,n;
    int st[35][35];
    for(i=0;i<35;i++) {
        st[i][0]=st[i][i]=1;
    }
    for(i=2;i<35;i++) {
        for(j=1;j<i;j++) {
            st[i][j]=st[i-1][j-1]+st[i-1][j];
        }
    }
    cin>>n;
    for(i=0;i<n;i++) {
        for(j=0;j<i;j++) {
            cout<<st[i][j]<<" ";
        }
        cout<<st[i][j]<<endl;
    }
    return 0;
}
