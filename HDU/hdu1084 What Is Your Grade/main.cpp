#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
struct STUDENTS {
    int stu_num;
    int score;

    int ac_num;
    int hours;
    int minutes;
    int seconds;
};
bool score_cmp(const STUDENTS a,const STUDENTS b) {
    if(a.ac_num!=b.ac_num) {
        return a.ac_num>b.ac_num;
    }
    if(a.hours!=b.hours) {
        return a.hours<b.hours;
    }
    if(a.minutes!=b.minutes) {
        return a.minutes<b.minutes;
    }
    return a.seconds<b.seconds;
}
bool stu_cmp(const STUDENTS a,const STUDENTS b) {
    return a.stu_num<b.stu_num;
}
int main() {
    int n;
    while(scanf("%d",&n),-1!=n) {
        STUDENTS students[n];
        for(int i=0;i<n;i++) {
            students[i].stu_num = i;
            scanf("%d %d:%d:%d",&students[i].ac_num,&students[i].hours,&students[i].minutes,&students[i].seconds);
        }
        sort(students,students+n,score_cmp);
        int i,j;
        for(i=0;i<n&&5==students[i].ac_num;i++) {
                students[i].score=100;
        }
        for(j=0;i<n&&4==students[i].ac_num;i++,j++) {
                students[i].score=90;
        }
        for(int k=0;k<j/2;k++) {
            students[i-j+k].score+=5;
        }
        for(j=0;i<n&&3==students[i].ac_num;i++,j++) {
                students[i].score=80;
        }
        for(int k=0;k<j/2;k++) {
            students[i-j+k].score+=5;
        }
        for(j=0;i<n&&2==students[i].ac_num;i++,j++) {
                students[i].score=70;
        }
        for(int k=0;k<j/2;k++) {
            students[i-j+k].score+=5;
        }
        for(j=0;i<n&&1==students[i].ac_num;i++,j++) {
                students[i].score=60;
        }
        for(int k=0;k<j/2;k++) {
            students[i-j+k].score+=5;
        }
        for(;i<n&&0==students[i].ac_num;i++,j++) {
                students[i].score=50;
        }
        sort(students,students+n,stu_cmp);
        for(i=0;i<n;i++) {
            printf("%d\n",students[i].score);
        }
        printf("\n");
    }
    return 0;
}

/**
printf("%d: %d %d:%d:%d %d\n",students[i].stu_num,students[i].ac_num,students[i].hours,students[i].minutes,students[i].seconds,students[i].score);
8
5 06:30:17
4 07:31:27
3 08:12:12
2 05:23:14
2 05:23:15
2 05:23:10
1 05:23:13
0 05:23:13
4
5 06:30:17
4 07:31:27
4 08:12:12
4 05:23:13
1
5 06:30:17
-1

*/
