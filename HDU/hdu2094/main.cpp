#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main() {
    string stw,stl;
    int n;
    map<string,int> mp;
    while(cin>>n&&n) {
        for(int i=0; i<n; i++) {
            cin>>stw>>stl;
            if(0==mp[stw]) mp[stw]=2;
            mp[stl]=1;
        }
        map<string,int>::iterator it;
        int resoult=0;
        for(it=mp.begin(); it!=mp.end(); ++it)
            if(it->second==2) resoult++;
        if(1==resoult) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        mp.clear();
    }
    return 0;
}
