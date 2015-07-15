#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#define MAX_STUDENTS 1000
using namespace std;
struct smatch {
    char name[11];
    int ACtopics;
    int usetime;
};
bool cmp(smatch math1, smatch math2) {
    if (math1.ACtopics == math2.ACtopics)
        if (math1.usetime == math2.usetime)
            return strcmp(math1.name, math2.name) > 0 ? true : false;
        else return math1.usetime > math2.usetime ? true : false;
    else return math1.ACtopics < math2.ACtopics ? true : false;
}
int main() {
    char ch;
    int i = -1;
    int number;
    int n, m;
    smatch students[MAX_STUDENTS];
    cin >> n >> m;
    while (cin >> students[++ i].name) {
        students[i].ACtopics = students[i].usetime = 0;
        for (int j = 0; j < n; ++ j) {
            cin >> number;
            if (number > 0) {
                ++ students[i].ACtopics;
                students[i].usetime += number;
                if ((ch = getchar()) == '(') {
                    cin >> number;
                    students[i].usetime += number * m;
                    getchar();
                }
            }
        }
    }
    sort(students, students + i, cmp);
    while (i --)
        printf("%-10s %2d %4d\n", students[i].name, students[i].ACtopics, students[i].usetime);
    return 0;
}

/*
8 20
Smith	  -1	-16	8	0	0	120	39	0
Zob	  0	0	57(5)	0	0	168	-7	0
John	  116	-2	11	0	0	82	55(1)	0
Josephus  72(3)	126	10	-3	0	47	21(2)	-2
Bush	  0	-1	-8	0	0	0	0	0
Alice	  -2	67(2)	13	-1	0	133	79(1)	-1
Bob	  0	0	57(5)	0	0	168	-7	0

Josephus    5  376
John        4  284
Alice       4  352
Smith       3  167
Bob         2  325
Bush        0    0
*/
