#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    bool flag=false;
    int n;
    char ch;
    while(cin>>ch){
        if('@'==ch) break;
        if(flag) cout<<endl;
        flag=true;
        cin>>n;
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<i;j++) cout<<" ";
            cout<<ch;
            if(i!=n-1&&i){
                for(int j=1;j<2*(n-i-1);j++) cout<<" ";
                cout<<ch;
            }
            if(!i)
                for(int j=0;j<2*n-2;j++) cout<<ch;
            cout<<endl;
        }
    }
    return 0;
}
