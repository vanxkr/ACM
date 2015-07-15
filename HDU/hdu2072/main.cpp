#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    string str,word;
    int first,last;
    set<string> s;
    while(getline(cin,str),str!="#")
    {
        s.clear();
        first=last=0;
        while(last!=string::npos)
        {
            first=str.find_first_not_of(' ',last);
            if(first==string::npos) break;
            last=str.find_first_of(' ',first);
            word=str.substr(first,last-first);
            s.insert(word);
        }
        cout<<s.size()<<endl;
    }
    return 0;
}
