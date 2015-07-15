#include <iostream>
#include <algorithm>
#include <map>
#include <cstdio>
#include <vector>
#define N 1000000
using namespace std;
int st[N];
map <int, int> tMap;
int cmp(const pair<int,int>& x,const pair<int,int>& y)
{
    return x.second<y.second;
}
void sortMapByValue(map<int,int>& tMap,vector<pair<int,int> >& tVector)
{
      for(map<int,int>::iterator curr=tMap.begin();curr!=tMap.end();curr++)
      {
         tVector.push_back(make_pair(curr->first,curr->second));
      }
      sort(tVector.begin(),tVector.end(),cmp);
}
int main()
{
//    freopen("D:\\Users\\xyx_0\\Desktop\\code\\in.txt", "r", stdin);
//    freopen("D:\\Users\\xyx_0\\Desktop\\code\\out.txt", "w", stdout);
    int num;
    int i;
    while (cin >> num)
    {
        tMap.clear();
        for (i = 0; i < num; ++ i)
        {
            scanf("%d", &st[i]);
            ++ tMap[st[i]];
        }
        vector<pair<int, int> > tVector;
        sortMapByValue(tMap,tVector);
        printf("%d\n", tVector[tVector.size() - 1].first);
    }
    return 0;
}
