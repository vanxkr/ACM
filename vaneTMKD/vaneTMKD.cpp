#include <bits/stdc++.h>
#include "blowfish.h"

#define KEY "12345678"
#define Key_Lenth 8
#define Plain_Lenth 24

using namespace std;

bool EnBlowFish(void *Plain, void *EnCode); // encrypt Plain(unsigned char[25]) to EnCode(unsigned long[6]) by blowfish algorithm.
bool DeBlowFish(void *Plain, void *EnCode); // encrypt Plain(unsigned char[25]) to DnCode(unsigned long[6]) by blowfish algorithm.
int unsignedStrcmp(const unsigned char* str1, const unsigned char* str2);
int unsignedStrlen(unsigned char *strIn);
unsigned char* unsignedStrcat(unsigned char* strDest , const unsigned char* strSrc);
unsigned char * unsignedStrcpy(unsigned char *dst,const unsigned char *src);
void Char2Hex(const unsigned char ch, char* szHex);//Function to convert unsigned char to string of length 2
void Hex2Char(const char* szHex, unsigned char& rch);//Function to convert string of length 2 to unsigned char
void CharStr2HexStr(const unsigned char* pucCharStr, char* pszHexStr, int iSize);//Function to convert string of unsigned chars to string of chars
void HexStr2CharStr(const char* pszHexStr, unsigned char* pucCharStr, int iSize);//Function to convert string of chars to string of unsigned chars

int main() ///test
{
    return 0;
}
bool EnBlowFish(void *Plain, void *EnCode)
{
    unsigned char *plain = (unsigned char *)Plain;
    unsigned long* encode = (unsigned long *)EnCode;
    unsigned char key[Key_Lenth + 1] = KEY;
    unsigned char tempStr[5] = {0};
    char tempHex[9];
    unsigned long tempUl[3][2];
    int i, j, k, a;
    BLOWFISH_CTX *ctx;
    ctx = (BLOWFISH_CTX *)malloc(sizeof(BLOWFISH_CTX));
    int keyLen = Key_Lenth;
    for(i = a = 0; i < 3; ++ i)
    {
        for(j = 0; j < 2; ++ j)
        {
            for(k = 0; k < 4; k ++, a ++)
            {
                tempStr[k] = plain[a];
            }
            CharStr2HexStr(tempStr, tempHex, 4);
            tempUl[i][j] = strtoul(tempHex, NULL, 16);
        }
    }
    for(i = 0; i < 3; i ++)
    {
        Blowfish_Init(ctx, key, keyLen);
        Blowfish_Encrypt(ctx, &tempUl[i][0], &tempUl[i][1]);
    }
    for(i = k = 0; i < 3; i ++)
    {
        for(j = 0; j < 2; j ++)
        {
            encode[k++] = tempUl[i][j];
        }
    }
    return true;
}
bool DeBlowFish(void *EnCode, void *DeCode)
{
    unsigned long *enCode = (unsigned long *)EnCode;
    unsigned char *decode = (unsigned char *)DeCode;
    unsigned char key[Key_Lenth + 1] = KEY;
    unsigned char deCode[Plain_Lenth+1] = {0};
    unsigned char tempStr[5] = {0};
    char tempHex[9];
    unsigned long tempUl[3][2];
    int i, j, k;
    BLOWFISH_CTX *ctx;
    ctx = (BLOWFISH_CTX *)malloc(sizeof(BLOWFISH_CTX));
    int keyLen = Key_Lenth;
    for(i = k = 0; i < 3; i ++)
    {
        for(j = 0; j < 2; j ++)
        {
            tempUl[i][j] = *enCode++;
        }
    }
    for(int i = 0; i < 3; ++ i)
    {
        Blowfish_Init(ctx, key, keyLen);
        Blowfish_Decrypt(ctx, &tempUl[i][0], &tempUl[i][1]);
    }
    for(i = 0; i < 3; i ++)
    {
        for(j = 0; j < 2; j ++)
        {
            sprintf(tempHex, "%lX", tempUl[i][j]);
            HexStr2CharStr(tempHex, tempStr, 4);
            unsignedStrcat(deCode, tempStr);
        }
    }
    unsignedStrcpy(decode, deCode);
    return true;
}
int unsignedStrcmp(const unsigned char* str1, const unsigned char* str2)
{
    for(;(*str1==*str2)&&*str1!='\0';str1++,str2++);
    return *str1 - *str2;
}
unsigned char * unsignedStrcpy(unsigned char *dst,const unsigned char *src)
{
    assert(dst != NULL && src != NULL);
    unsigned char *ret = dst;
    while ((*dst++=*src++)!='\0');
    return ret;
}
unsigned char* unsignedStrcat(unsigned char* strDest , const unsigned char* strSrc)
{
    unsigned char* address = strDest;
    assert( (strDest!=NULL)&&(strSrc!=NULL) );
    while(*strDest)
    {
        strDest++;
    }
    while((*strDest++=*strSrc++)!='\0');
    return address;
}
int unsignedStrlen(unsigned char *strIn)
{
    unsigned char *p = strIn;
    assert(strIn);
    while(*p++ != '\0');
    return p - strIn - 1;
}
//Function to convert unsigned char to string of length 2
void Char2Hex(const unsigned char ch, char* szHex)
{
    unsigned char byte[2];
    byte[0] = ch / 16;
    byte[1] = ch % 16;
    for (int i = 0; i < 2; i++)
    {
        if (byte[i] >= 0 && byte[i] <= 9)
            szHex[i] = '0' + byte[i];
        else
            szHex[i] = 'A' + byte[i] - 10;
    }
    szHex[2] = 0;
}
//Function to convert string of length 2 to unsigned char
void Hex2Char(const char* szHex, unsigned char& rch)
{
    rch = 0;
    for (int i = 0; i < 2; i++)
    {
        if (*(szHex + i) >= '0' && *(szHex + i) <= '9')
            rch = (rch << 4) + (*(szHex + i) - '0');
        else if (*(szHex + i) >= 'A' && *(szHex + i) <= 'F')
            rch = (rch << 4) + (*(szHex + i) - 'A' + 10);
        else
            break;
    }
}
//Function to convert string of unsigned chars to string of chars
void CharStr2HexStr(const unsigned char* pucCharStr, char* pszHexStr, int iSize)
{
    int i;
    char szHex[3];
    pszHexStr[0] = 0;
    for (i = 0; i < iSize; i++)
    {
        Char2Hex(pucCharStr[i], szHex);
        strcat(pszHexStr, szHex);
    }
}
//Function to convert string of chars to string of unsigned chars
void HexStr2CharStr(const char* pszHexStr, unsigned char* pucCharStr, int iSize)
{
    int i;
    unsigned char ch;
    for (i = 0; i < iSize; i++)
    {
        Hex2Char(pszHexStr + 2*i , ch);
        pucCharStr[i] = ch;
    }
}
