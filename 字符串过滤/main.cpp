#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
void stringFilter(const char *pInputStr, long lInputLen, char *pOutputStr);
void stringZip(const char *pInputStr, long lInputLen, char *pOutputStr);
void arithmetic(const char *pInputStr, long lInputLen, char *pOutputStr);
int main() {
    char pInputStr[1001];
    char pOutputStr[1001];
    while(gets(pInputStr)) {
        arithmetic(pInputStr,strlen(pInputStr),pOutputStr);
        cout<<pOutputStr<<endl;
    }
    return 0;
}
void stringFilter(const char *pInputStr, long lInputLen, char *pOutputStr) {
    bool apper[26];
    memset(apper,true,sizeof(apper));
    for(long i=0; i<lInputLen; ++i) {
        if(apper[*(pInputStr+i)-'a']) {
            *(pOutputStr++)=*(pInputStr+i);
            apper[*(pInputStr+i)-'a']=false;
        }
    }
    *pOutputStr='\0';
}
void stringZip(const char *pInputStr, long lInputLen, char *pOutputStr) {
    char tempChar=*pInputStr;
    long charNumber=0;
    for(long i=1; i<lInputLen; ++i) {
        if(tempChar!=*(pInputStr+i)) {
            if(0!=charNumber) {
                char *tempLen;
                tempLen=(char *)malloc(sizeof(char)*10);
                sprintf(tempLen,"%ld",charNumber+1);
                while(*tempLen) *(pOutputStr++)=*tempLen++;
            }
            *(pOutputStr++)=tempChar;
            tempChar=*(pInputStr+i);
            charNumber=0;
        } else {
            charNumber++;
        }
    }
    if(0!=charNumber) {
        char *tempLen;
        tempLen=(char *)malloc(sizeof(char)*10);
        sprintf(tempLen,"%ld",charNumber+1);
        while(*tempLen) *(pOutputStr++)=*tempLen++;
    }
    *(pOutputStr++)=tempChar;
    *pOutputStr='\0';
}
void arithmetic(const char *pInputStr, long lInputLen, char *pOutputStr) {
    int num1=0,num2=0,resoult=0;
    char sign;
    sscanf(pInputStr,"%d %c %d",&num1,&sign,&num2);
    if(num1>0&&num1<101&&num2>0&&num2<101&&('+'==sign||'-'==sign)) resoult='+'==sign?num1+num2:num1-num2;
    itoa(resoult,pOutputStr,10);
}
